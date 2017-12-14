#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_ArmNativeTrace[] = {
    120,156,165,145,77,79,219,64,16,134,103,29,39,124,85,40,
    151,138,83,165,229,84,171,42,113,47,185,32,132,10,229,90,
    26,37,233,161,190,88,203,122,130,29,121,109,107,119,65,112,
    134,255,93,102,214,37,132,115,215,246,171,249,216,29,63,51,
    171,225,223,26,208,247,93,2,184,43,50,10,122,5,212,0,
    70,64,38,64,176,31,65,29,193,146,173,1,212,3,48,49,
    100,49,101,98,192,24,86,2,138,33,60,3,60,1,252,201,
    134,80,140,96,145,236,80,161,234,47,173,68,144,229,247,72,
    22,149,249,117,179,70,237,251,16,203,151,222,60,32,185,86,
    190,186,199,165,85,26,253,33,249,23,214,108,133,244,54,233,
    37,147,126,37,3,129,1,137,42,139,24,57,27,48,40,129,
    225,16,214,35,192,29,166,125,162,200,46,204,23,73,76,7,
    230,124,220,125,36,9,85,79,79,223,255,197,29,81,70,89,
    93,166,202,154,180,9,9,207,137,73,89,186,111,220,130,111,
    59,249,115,42,171,149,172,188,84,77,33,157,87,190,223,243,
    217,201,78,59,169,44,202,162,90,173,208,98,227,19,238,219,
    239,146,228,121,163,12,230,185,223,15,142,105,139,187,154,93,
    166,242,143,29,134,9,233,135,135,92,215,202,185,176,139,189,
    18,85,129,214,15,201,157,41,171,76,216,127,217,182,117,48,
    150,246,14,253,152,91,34,174,188,109,242,78,231,104,109,107,
    19,30,213,155,184,19,146,180,108,13,166,168,85,122,139,102,
    154,58,171,211,77,171,239,199,48,233,30,195,160,142,249,40,
    147,140,68,255,236,137,235,100,196,192,31,72,204,116,178,185,
    209,57,188,94,50,69,59,6,237,91,248,49,251,29,42,90,
    55,143,94,199,255,223,108,97,158,103,253,4,207,63,113,9,
    102,26,139,125,49,142,94,0,103,153,162,175,
};

EmbeddedPython embedded_m5_objects_ArmNativeTrace(
    "m5/objects/ArmNativeTrace.py",
    "/home/eca/gem5/src/arch/arm/ArmNativeTrace.py",
    "m5.objects.ArmNativeTrace",
    data_m5_objects_ArmNativeTrace,
    412,
    722);

} // anonymous namespace
