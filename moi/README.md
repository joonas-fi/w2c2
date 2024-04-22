Instructions for transpiling MOI library from WebAssembly to C
==============================================================


### Grab this repo

```
$ git clone --branch feature/moi-transpile https://github.com/joonas-fi/w2c2.git
$ cd w2c2
```


### Enter container, install prerequisites and build the tooling

```
$ docker run --rm -it -v "$(pwd):/workspace" -w /workspace ubuntu
$ apt update && apt install -y build-essential cmake
$ (cd w2c2/ && cmake -B . && cmake --build .)
$ (cd wasi/ && cmake -B . && cmake --build .)
```

### Test the moi binary

The accompanying `moi.wasm` was built to take a MOI protocol frame (like it was sent by server -> agent)
from `stdin` and emit a response to `stdout`.

There's a pre-built binary, test it:

```
$ cd moi/
$ ./moi < example-input/readiness-status-req.bin
q{"Op":"READINESS_STATUS_RESPONSE","Time":"2024-04-22T13:50:18.350172874Z","ReadinessStatusResponse":{"Error":""}}
```

NOTE the "q" prefix, remember the protocol is a sequence of `length + payload` pairs!


### How was the binary built?

Let's first remove all build artefacts and C wrappers for the built `moi.wasm` module:

```
$ make clean
```

You should now only have:

```
├── Makefile
├── README.md
├── example-input
│   └── readiness-status-req.bin
├── main.c
└── moi.wasm
```

You can now test that the previous run example doesn't work.

Now build it again:

```
$ make
```

This takes `moi.wasm` and generates:

- moi.c
- moi.h

And after that it compiles it as a regular C-based project.

You now have the `./moi` binary again. You can now test that the previous run example works again.


### Porting this to non-Linux targets

As you can see the transpilation references `w2c2_base.h` and `wasi.h`.

The first looks rather portable generic support for WebAssembly primitives and `wasi.h` is system
interfaces like opening files and such. That should be portable for POSIX-targets
(which NuttX claims to be). But we can get rid of the WASI interface and implement things like
sockets or file access at C side if needed, as MOI-external wrappers.
