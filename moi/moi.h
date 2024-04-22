#ifndef moi_H
#define moi_H

#ifdef __cplusplus
extern "C" {
#endif

#include "w2c2_base.h"

typedef struct moiInstance {
wasmModuleInstance common;
wasmMemory* m0;
wasmTable t0;
U32 g0;
U32 g1;
U32 g2;
} moiInstance;

U32 wasi_snapshot_preview1__fd_write(void*,U32,U32,U32,U32);

U32 wasi_snapshot_preview1__clock_time_get(void*,U32,U64,U32);

U32 wasi_snapshot_preview1__args_sizes_get(void*,U32,U32);

U32 wasi_snapshot_preview1__args_get(void*,U32,U32);

U32 wasi_snapshot_preview1__environ_get(void*,U32,U32);

U32 wasi_snapshot_preview1__environ_sizes_get(void*,U32,U32);

U32 wasi_snapshot_preview1__fd_close(void*,U32);

U32 wasi_snapshot_preview1__fd_fdstat_get(void*,U32,U32);

U32 wasi_snapshot_preview1__fd_prestat_get(void*,U32,U32);

U32 wasi_snapshot_preview1__fd_prestat_dir_name(void*,U32,U32,U32);

U32 wasi_snapshot_preview1__fd_read(void*,U32,U32,U32,U32);

U32 wasi_snapshot_preview1__fd_seek(void*,U32,U64,U32,U32);

U32 wasi_snapshot_preview1__path_open(void*,U32,U32,U32,U32,U32,U64,U64,U32,U32);

void wasi_snapshot_preview1__proc_exit(void*,U32);

void f14(moiInstance*);

U32 f15(moiInstance*);

void f16(moiInstance*,U32);

void f17(moiInstance*,U32);

void f18(moiInstance*,U32);

U32 f19(moiInstance*,U32,U32,U32);

U32 f20(moiInstance*,U32,U32,U32);

U32 f21(moiInstance*,U32);

U64 f22(moiInstance*,U32,U64,U32);

U32 f23(moiInstance*,U32,U32,U32);

U32 f24(moiInstance*,U32,U32,U32);

U32 f25(moiInstance*,U32,U32);

U32 f26(moiInstance*,U32,U32);

U32 f27(moiInstance*,U32);

U32 f28(moiInstance*,U32,U32);

U32 f29(moiInstance*,U32,U32);

U32 f30(moiInstance*,U32,U32,U32);

U32 f31(moiInstance*,U32,U32,U32,U32);

U32 f32(moiInstance*,U32,U64,U32,U32);

U32 f33(moiInstance*,U32,U32,U32,U32);

U32 f34(moiInstance*,U32,U32,U32,U32,U64,U64,U32,U32);

void f35(moiInstance*,U32);

void f36(moiInstance*);

void f37(moiInstance*,U32);

U32 f38(moiInstance*,U32,U32);

U32 f39(moiInstance*,U32,U32,U32,U32);

U32 f40(moiInstance*,U32,U32,U32);

void f41(moiInstance*);

void f42(moiInstance*);

void f43(moiInstance*);

U32 f44(moiInstance*,U32);

U32 f45(moiInstance*,U32,U32,U32);

U32 f46(moiInstance*,U32,U32,U32);

U32 f47(moiInstance*,U32,U32);

U32 f48(moiInstance*,U32);

U32 f49(moiInstance*,U32);

U32 f50(moiInstance*,U32,U32,U32);

void f51(moiInstance*,U32,U32);

void f52(moiInstance*,U32,U32);

void f53(moiInstance*,U32,U32,U32,U32,U32);

U32 f54(moiInstance*,U32);

void f55(moiInstance*,U32,U32,U32);

void f56(moiInstance*);

void f57(moiInstance*,U32,U64,U64);

void f58(moiInstance*,U32,U32,U32);

void f59(moiInstance*,U32,U32,U32);

U32 f60(moiInstance*,U32,U32,U32);

void f61(moiInstance*,U32,U32,U32,U32,U32);

void f62(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

U32 f63(moiInstance*,U32,U32);

U32 f64(moiInstance*,U32);

void f65(moiInstance*,U32,U32);

void f66(moiInstance*,U32,U32);

U32 f67(moiInstance*,U32);

U32 f68(moiInstance*,U32);

U32 f69(moiInstance*,U32);

U32 f70(moiInstance*,U32);

U32 f71(moiInstance*,U32);

U32 f72(moiInstance*,U32);

U32 f73(moiInstance*,U32);

U32 f74(moiInstance*,U32);

U32 f75(moiInstance*,U32);

void f76(moiInstance*,U32,U32);

void f77(moiInstance*,U32,U32);

void f78(moiInstance*,U32,U32,U32);

void f79(moiInstance*);

void f80(moiInstance*,U32,U32);

U32 f81(moiInstance*,U32);

void f82(moiInstance*);

void f83(moiInstance*);

U32 f84(moiInstance*,U32,U32);

U32 f85(moiInstance*,U32,U32,U32);

void f86(moiInstance*,U32,U32,U32,U32,U32);

U32 f87(moiInstance*,U32,U32);

U32 f88(moiInstance*,U32,U32,U32);

U32 f89(moiInstance*,U32,U32,U32);

U32 f90(moiInstance*,U32,U32,U32);

void f91(moiInstance*,U32,U32,U32,U32);

void f92(moiInstance*,U32,U32,U32,U32,U32);

void f93(moiInstance*,U32,U32,U32,U32);

void f94(moiInstance*,U32,U32);

U32 f95(moiInstance*,U32);

void f96(moiInstance*,U32,U32,U32,U32);

U32 f97(moiInstance*,U32,U32,U32);

void f98(moiInstance*,U32,U32,U32);

void f99(moiInstance*,U32,U32,U32);

U32 f100(moiInstance*,U32,U32);

void f101(moiInstance*,U32);

void f102(moiInstance*,U32,U32,U32,U32);

U32 f103(moiInstance*,U32,U32,U32);

void f104(moiInstance*,U32,U32,U32,U32);

void f105(moiInstance*,U32);

U32 f106(moiInstance*,U32,U32);

void f107(moiInstance*,U32,U32,U32);

void f108(moiInstance*,U32,U32,U32,U32);

U64 f109(moiInstance*,U32,U32,U32);

void f110(moiInstance*,U32,F64,U32);

void f111(moiInstance*);

U64 f112(moiInstance*,U32,U32,U32);

void f113(moiInstance*,U32,U64,U32);

void f114(moiInstance*);

F64 f115(moiInstance*,U32,U32,U32);

void f116(moiInstance*);

U32 f117(moiInstance*,U32,U32);

void f118(moiInstance*);

void f119(moiInstance*,U32,U32,U32);

U32 f120(moiInstance*,U32,U32,U32);

U32 f121(moiInstance*,U32,U64);

U32 f122(moiInstance*,U32,U64);

U32 f123(moiInstance*,U32,U32,U32);

void f124(moiInstance*,U32,U32,U32,U32,U32);

void f125(moiInstance*,U32);

void f126(moiInstance*,U32,U32,U32,U32);

void f127(moiInstance*,U32,U32,U32,U32,U32);

void f128(moiInstance*,U32,U32,U32);

void f129(moiInstance*,U32,U32,U32);

void f130(moiInstance*,U32,U32);

U32 f131(moiInstance*,U32);

U32 f132(moiInstance*,U32,U32,U32,U32);

void f133(moiInstance*,U32,U32);

void f134(moiInstance*,U32,U32);

U32 f135(moiInstance*,U32,U32);

void f136(moiInstance*,U32,U32,U32,U32);

void f137(moiInstance*,U32,U32,U32);

void f138(moiInstance*,U32,U32,U32);

void f139(moiInstance*,U32,U32,U32);

void f140(moiInstance*,U32,U32,U32);

void f141(moiInstance*,U32,U32);

void f142(moiInstance*,U32,U32,U32);

void f143(moiInstance*,U32,U64);

void f144(moiInstance*);

void f145(moiInstance*,U32,U32);

void f146(moiInstance*);

void f147(moiInstance*,U32,U32);

void f148(moiInstance*,U32);

void f149(moiInstance*,U32);

void f150(moiInstance*,U32);

void f151(moiInstance*,U32,U32,U32,U32);

U32 f152(moiInstance*,U32,U32,U32,U32,U32);

void f153(moiInstance*,U32,U32,U32,U32,U32,U32);

U32 f154(moiInstance*,U32,U32,U32,U32);

void f155(moiInstance*,U32,U32,U32,U32);

void f156(moiInstance*,U32,U32,U32);

void f157(moiInstance*,U32,U32);

void f158(moiInstance*,U32,U32,U32);

void f159(moiInstance*,U32,U32);

void f160(moiInstance*,U32,U32,U32,U32,U32);

void f161(moiInstance*,U32,U32,U32,U32);

void f162(moiInstance*,U32,U32,U32,U32);

void f163(moiInstance*,U32,U32,U32,U32);

void f164(moiInstance*,U32,U32,U32,U32);

void f165(moiInstance*,U32,U32,U32,U32);

void f166(moiInstance*,U32,U32,U32,U32,U32,U32);

void f167(moiInstance*,U32,U32,U32,U32);

void f168(moiInstance*,U32,U32,U32,U32);

void f169(moiInstance*,U32,U32,U32,U32);

void f170(moiInstance*,U32,U32);

void f171(moiInstance*,U32,U32,U32);

void f172(moiInstance*,U32,U32,U32,U32,U32);

void f173(moiInstance*,U32,U32,U32,U32);

U32 f174(moiInstance*,U32,U32);

void f175(moiInstance*);

U32 f176(moiInstance*,U32,U32);

void f177(moiInstance*,U32,U32);

void f178(moiInstance*,U32,U32);

U32 f179(moiInstance*,U32,U32);

void f180(moiInstance*,U32,U32,U32);

void f181(moiInstance*,U32,U32);

void f182(moiInstance*,U32,U32);

void f183(moiInstance*,U32,U32,U32);

U32 f184(moiInstance*,U32,U32,U32,U32);

void f185(moiInstance*,U32,U32,U32);

void f186(moiInstance*,U32,U32,U32,U32,U32,U32);

void f187(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

U32 f188(moiInstance*,U32);

U32 f189(moiInstance*,U32,U32,U32);

void f190(moiInstance*,U32,U32,U32);

U32 f191(moiInstance*,U32,U32,U32,U32);

void f192(moiInstance*,U32,U32,U32);

void f193(moiInstance*,U32,U32,U32,U32,U64,U32,U32,U32);

U32 f194(moiInstance*,U32,U32,U32,U32);

void f195(moiInstance*,U32,U64,U32,U32);

U32 f196(moiInstance*,U32,U32,U32);

void f197(moiInstance*,U32,U32,U32);

void f198(moiInstance*,U32,U32);

U32 f199(moiInstance*,U32,U32);

void f200(moiInstance*,U32,U32);

void f201(moiInstance*,U32,U32);

void f202(moiInstance*,U32);

void f203(moiInstance*,U32,U64,U32,U32);

void f204(moiInstance*,U32,U32,U32,U32);

U32 f205(moiInstance*,U32,U32,U32,U32);

void f206(moiInstance*,U32,U64);

void f207(moiInstance*,U32,U32);

void f208(moiInstance*,U32,U32,U32,U32,U64,U32,U32);

void f209(moiInstance*,U32,U32,U32);

void f210(moiInstance*,U32,U32,U32);

void f211(moiInstance*,U32,F64,U32);

void f212(moiInstance*,U32,U32,U32,U32,F64,U32,U32,U32);

void f213(moiInstance*,U32,U64,U64,U64,U32,U32);

void f214(moiInstance*,U32,U32,U32,U32);

U32 f215(moiInstance*,U64,U32);

void f216(moiInstance*,U32,U64,U32,U32);

void f217(moiInstance*,U32,U64,U32,U32,U32);

void f218(moiInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f219(moiInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f220(moiInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f221(moiInstance*,U32,U64);

void f222(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f223(moiInstance*,U32,U32,U32,U32,F64,U32,U32,U32);

void f224(moiInstance*,U32,U32,U32,U32);

void f225(moiInstance*,U32,U32,U32,U32,U32,U32);

void f226(moiInstance*,U32,U32,U32,U32);

void f227(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f228(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

U32 f229(moiInstance*,U32,U32,U32,U32,U32,U32);

U32 f230(moiInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f231(moiInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f232(moiInstance*,U32,U32);

void f233(moiInstance*,U32,U32,U32,U32,U32);

void f234(moiInstance*,U32,U32,U32,U32);

void f235(moiInstance*,U32,U32,U32,U32);

void f236(moiInstance*,U32,U32,U32,U32,U32);

U32 f237(moiInstance*,U32,U32,U32,U32);

U32 f238(moiInstance*,U32,U32,U32,U32,U32,U32);

U32 f239(moiInstance*,U32,U32,U32,U32);

U32 f240(moiInstance*,U32,U32,U32,U32);

U32 f241(moiInstance*,U32,U32,U32,U32,U32,U32);

U32 f242(moiInstance*,U32,U32,U32,U32);

void f243(moiInstance*,U32,U32,U32,U32);

void f244(moiInstance*,U32,U32,U32,U32);

void f245(moiInstance*,U32,U32,U32,U32,U32,U32);

void f246(moiInstance*,U32,U32,U32,U32);

void f247(moiInstance*,U32,U32,U32,U32);

U32 f248(moiInstance*,U32,U32,U32,U32);

void f249(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

U32 f250(moiInstance*,U32,U32,U32,U32);

U32 f251(moiInstance*,U32,U32,U32,U32);

void f252(moiInstance*,U32,U32);

void f253(moiInstance*);

void f254(moiInstance*,U32);

void f255(moiInstance*,U32,U32);

U32 f256(moiInstance*,U32);

void f257(moiInstance*,U32);

U32 f258(moiInstance*);

void f259(moiInstance*,U32);

void f260(moiInstance*,U32,U32);

void f261(moiInstance*);

U32 f262(moiInstance*,U32);

U32 f263(moiInstance*,U32);

void f264(moiInstance*,U32,U32,U32);

void f265(moiInstance*,U32);

U32 f266(moiInstance*,U32,U32);

void f267(moiInstance*,U32,U32);

U32 f268(moiInstance*,U32,U32);

U32 f269(moiInstance*,U32,U32);

void f270(moiInstance*);

void f271(moiInstance*,U32);

void f272(moiInstance*);

void f273(moiInstance*);

void f274(moiInstance*);

void f275(moiInstance*,U32);

void f276(moiInstance*,U32);

U32 f277(moiInstance*,U32,U32,U32,U32);

void f278(moiInstance*,U32,U32,U32,U32);

U32 f279(moiInstance*,U32,U32,U32);

U32 f280(moiInstance*,U32,U32,U32);

void f281(moiInstance*,U32,U32);

void f282(moiInstance*,U32);

void f283(moiInstance*,U32,U32,U32,U32,U32);

void f284(moiInstance*,U32,U32,U32,U32);

void f285(moiInstance*,U32,U32,U32,U32,U32,U32);

void f286(moiInstance*,U32,U32,U32);

void f287(moiInstance*,U32,U32,U32);

void f288(moiInstance*,U32,U32,U32,U32);

void f289(moiInstance*,U32,U32,U32,U32);

void f290(moiInstance*,U32,U32,U32,U32,U32,U32);

void f291(moiInstance*,U32,U32);

void f292(moiInstance*,U32,U32);

void f293(moiInstance*,U32);

void f294(moiInstance*,U64);

void f295(moiInstance*,U32);

void f296(moiInstance*,U32);

U32 f297(moiInstance*,U32);

U32 f298(moiInstance*,U32);

void f299(moiInstance*,U32,U32,U32);

void f300(moiInstance*,U32,U64,U64,U32);

U32 f301(moiInstance*,U32);

void f302(moiInstance*,U32,U32);

U32 f303(moiInstance*,U32,U32,U32,U32);

void f304(moiInstance*,U32,U32,U32);

void f305(moiInstance*);

void f306(moiInstance*,U32,U32,U32,U32);

U32 f307(moiInstance*);

U32 f308(moiInstance*,U32,U32);

U32 f309(moiInstance*,U32,U32,U32,U32);

U32 f310(moiInstance*,U32,U32,U32,U32);

U32 f311(moiInstance*,U32,U32,U32,U32);

U32 f312(moiInstance*,U32,U32,U32,U32);

U32 f313(moiInstance*,U32,U32,U32,U32,U32,U32);

U32 f314(moiInstance*,U32,U32,U32);

U32 f315(moiInstance*,U32,U32);

U32 f316(moiInstance*,U32,U32);

U32 f317(moiInstance*,U32,U32,U32);

void f318(moiInstance*,U32,U32,U32,U32);

U32 f319(moiInstance*,U32,U32,U32,U32,U32);

void f320(moiInstance*,U32,U32,U32);

void f321(moiInstance*,U32);

void f322(moiInstance*,U32,U32,U32,U32);

void f323(moiInstance*,U32,U32);

void f324(moiInstance*,U32,U32,U32,U32);

void f325(moiInstance*,U32,U32,U32);

void f326(moiInstance*,U32,U32,U32);

U32 f327(moiInstance*,U32,U32,U32);

void f328(moiInstance*,U32,U32,U32,U32,U32);

void f329(moiInstance*,U32,U32,U32,U32,U32,U32);

void f330(moiInstance*,U32,U32,U32,U32,U32,U32);

U32 f331(moiInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f332(moiInstance*,U32,U32,U32);

void f333(moiInstance*,U32,U32,U32,U32);

void f334(moiInstance*,U32,U32,U32);

U32 f335(moiInstance*,U32);

U32 f336(moiInstance*,U32,U32);

void f337(moiInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f338(moiInstance*,U32,U32,U32,U32);

U64 f339(moiInstance*,U32);

void f340(moiInstance*,U32,U32,U64);

void f341(moiInstance*,U32,U32);

void f342(moiInstance*,U32,U64);

void f343(moiInstance*,U32);

void f344(moiInstance*,U32,U32,U32,U64,U64);

U32 f345(moiInstance*,U32,U32,U32);

void f346(moiInstance*,U32);

U32 f347(moiInstance*,U32,U32,U32);

void f348(moiInstance*,U32,U32,U32);

void f349(moiInstance*,U32,U32,U32);

void f350(moiInstance*,U32,U32,U32,U32);

U32 f351(moiInstance*,U32,U32);

void f352(moiInstance*,U32);

void f353(moiInstance*,U32,U32,U32,U32,U32);

void f354(moiInstance*,U32,U32,U32,U32,U32);

void f355(moiInstance*,U32,U32,U32,U32,U32,U32);

void f356(moiInstance*,U32,U32,U32);

void f357(moiInstance*,U32,U32,U32,U32,U32,U32);

U32 f358(moiInstance*,U32,U32);

void f359(moiInstance*,U32,U32,U32);

void f360(moiInstance*,U32,U32);

void f361(moiInstance*,U32,U32);

void f362(moiInstance*,U32,U32,U32);

void f363(moiInstance*,U32,U32,U32);

void f364(moiInstance*,U32,U32,U32);

void f365(moiInstance*,U32,U64,U32);

U32 f366(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f367(moiInstance*,U32,U32,U32,U32,U32);

U32 f368(moiInstance*,U32,U32,U32,U32,U32);

void f369(moiInstance*,U32,U32,U32,U32);

U32 f370(moiInstance*,U32,U32,U32,U32,U32);

U32 f371(moiInstance*,U32,U32,U32);

void f372(moiInstance*,U32,U64,U64,U32);

void f373(moiInstance*,U32,U64,U64,U32,U32,U32,U32);

void f374(moiInstance*,U32,U64);

void f375(moiInstance*,U32,U32);

void f376(moiInstance*,U32,U64,U64,U32);

void f377(moiInstance*,U32,U64,U64,U32);

void f378(moiInstance*,U32,U64,U64,U32);

void f379(moiInstance*,U32);

void f380(moiInstance*,U32,U32,U32);

U32 f381(moiInstance*,U32,U32,U32,U32);

U32 f382(moiInstance*,U32,U32,U32);

void f383(moiInstance*,U32,U32,U32);

void f384(moiInstance*,U32,U32,U32);

void f385(moiInstance*,U32,U32);

void f386(moiInstance*,U32,U32);

void f387(moiInstance*,U32,U32);

void f388(moiInstance*,U32,U32,U32);

void f389(moiInstance*,U32,U32,U32,U32);

void f390(moiInstance*,U32,U32,U32,U32,U32,U32);

void f391(moiInstance*,U32,F64,U32,U32,U32);

void f392(moiInstance*,U32,U32,U32);

void f393(moiInstance*,U32,U32);

void f394(moiInstance*,U32,U64,U32,U32,U32,U32);

void f395(moiInstance*,U32,U32,U32);

void f396(moiInstance*,U32,U32,U32,U32);

void f397(moiInstance*,U32,U32,U32);

void f398(moiInstance*,U32,U32,U32);

void f399(moiInstance*,U32,U32,U32,U32);

void f400(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f401(moiInstance*,U32,U32,U32,U32,U32);

void f402(moiInstance*,U32,U32);

void f403(moiInstance*,U32,U32,U32,U32);

void f404(moiInstance*,U32,U32,U32,U32,U32,U32);

void f405(moiInstance*,U32,U32,U32,U32,U32,U32);

void f406(moiInstance*,U32,U32,U32,U32);

void f407(moiInstance*,U32,U64,U32);

void f408(moiInstance*,U32,U32,U32);

void f409(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f410(moiInstance*,U32,F64,F64,U32,U32);

void f411(moiInstance*,U32,F64,U32,U32);

void f412(moiInstance*,U32,U64,U32,U32);

void f413(moiInstance*,U32,U32,U32,U32,U32);

void f414(moiInstance*,U32,U32,U32,U32);

void f415(moiInstance*,U32);

U32 f416(moiInstance*,U32,U32);

U32 f417(moiInstance*);

void f418(moiInstance*,U32,U32);

void f419(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f420(moiInstance*,U32,U32,U32,U32,U32);

void f421(moiInstance*,U32,U32);

void f422(moiInstance*,U32,U32);

U32 f423(moiInstance*,U32);

void f424(moiInstance*,U32,U32,U32,U32);

U32 f425(moiInstance*,U32,U32,U32);

void f426(moiInstance*,U32);

U32 f427(moiInstance*,U32,U32,U32);

U32 f428(moiInstance*,U32,U32,U32,U32);

U32 f429(moiInstance*,U32,U32,U32);

U32 f430(moiInstance*,U32,U32,U32);

U32 f431(moiInstance*,U32,U32,U32);

U32 f432(moiInstance*,U32,U32,U32);

U32 f433(moiInstance*,U32,U32,U32);

U32 f434(moiInstance*,U32,U32,U32);

U32 f435(moiInstance*,U32,U32,U32);

U32 f436(moiInstance*,U32,U32,U32);

U32 f437(moiInstance*,U32,U32,U32);

U32 f438(moiInstance*,U32,U32,U32);

U32 f439(moiInstance*,U32,U32,U32);

U32 f440(moiInstance*,U32,U32,U32);

U32 f441(moiInstance*,U32,U32,U32);

U32 f442(moiInstance*,U32,U32,U32);

U32 f443(moiInstance*,U32,U32,U32);

U32 f444(moiInstance*,U32,U32,U32);

U32 f445(moiInstance*,U32,U32,U32);

U32 f446(moiInstance*,U32,U32,U32);

U32 f447(moiInstance*,U32,U32,U32);

U32 f448(moiInstance*,U32,U32,U32);

U32 f449(moiInstance*,U32,U32,U32);

U32 f450(moiInstance*,U32,U32,U32);

U32 f451(moiInstance*,U32,U32,U32);

U32 f452(moiInstance*,U32,U32,U32);

U32 f453(moiInstance*,U32,U32,U32);

U32 f454(moiInstance*,U32,U32,U32);

U32 f455(moiInstance*,U32,U32,U32);

void f456(moiInstance*,U32,U32,U32,U32,U32);

void f457(moiInstance*,U32);

void f458(moiInstance*,U32,U32,U32,U32,U32,U32);

void f459(moiInstance*,U32,U32,U32);

void f460(moiInstance*,U32,U32);

void f461(moiInstance*,U32);

void f462(moiInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f463(moiInstance*,U32,U32,U32,U32,U32);

void f464(moiInstance*,U32);

void f465(moiInstance*,U32,U32,U32);

U32 f466(moiInstance*,U32);

void f467(moiInstance*,U32,U32,U32);

void f468(moiInstance*,U32,U32,U32,U32);

void f469(moiInstance*,U32,U32,U32,U32);

void f470(moiInstance*,U32,U32);

U32 f471(moiInstance*,U32,U32);

void f472(moiInstance*,U32,U32,U32,U32);

U32 f473(moiInstance*,U32,U32,U32);

void f474(moiInstance*,U32,U32,U32,U32);

void f475(moiInstance*,U32,U32);

U32 f476(moiInstance*,U32,U32,U32,U32);

U32 f477(moiInstance*,U32,U32,U32);

void f478(moiInstance*,U32,U32,U32);

void f479(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f480(moiInstance*,U32,U32,U32,U32);

void f481(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f482(moiInstance*,U32,U32,U32,U32);

void f483(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f484(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f485(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f486(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f487(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f488(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f489(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f490(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f491(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f492(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f493(moiInstance*,U32,U32,U32);

void f494(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f495(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f496(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f497(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f498(moiInstance*,U32,U32,U32,U32,U32,U32);

void f499(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f500(moiInstance*,U32,U32,U32);

void f501(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f502(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f503(moiInstance*,U32,U32,U32);

U32 f504(moiInstance*,U32,U32,U32);

void f505(moiInstance*,U32);

void f506(moiInstance*,U32,U32,U32,U32,U32,U32,U32);

U32 f507(moiInstance*,U32);

void f508(moiInstance*,U32,U32,U32);

void f509(moiInstance*,U32);

void f510(moiInstance*);

void f511(moiInstance*,U32);

void f512(moiInstance*);

U32 f513(moiInstance*);

wasmMemory*moi_memory(moiInstance* i);

U32 moi_malloc(moiInstance*i,U32 l0);

void moi_free(moiInstance*i,U32 l0);

U32 moi_calloc(moiInstance*i,U32 l0,U32 l1);

U32 moi_realloc(moiInstance*i,U32 l0,U32 l1);

void moi__start(moiInstance*i);

void moi_asyncify_start_unwind(moiInstance*i,U32 l0);

void moi_asyncify_stop_unwind(moiInstance*i);

void moi_asyncify_start_rewind(moiInstance*i,U32 l0);

void moi_asyncify_stop_rewind(moiInstance*i);

U32 moi_asyncify_get_state(moiInstance*i);

void moiInstantiate(moiInstance* instance, void* resolve(const char* module, const char* name));

void moiFreeInstance(moiInstance* instance);

#ifdef __cplusplus
}
#endif

#endif /* moi_H */

