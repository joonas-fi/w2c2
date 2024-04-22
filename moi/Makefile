LDFLAGS += -lm -L../wasi -lw2c2wasi
CFLAGS += -O3
W2C2 ?= ../w2c2/w2c2

moi: moi.o main.o
	$(CC) $^ -o moi $(LDFLAGS)

%.c: %.wasm
	$(W2C2) $< $@

%.o: %.c
	$(CC) -I../w2c2 -I../wasi -c $(CFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f *.o moi moi.c moi.h