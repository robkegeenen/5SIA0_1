#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_I2C[] = {
    120,156,157,82,77,79,219,64,16,157,181,29,39,5,138,232,
    165,39,14,238,5,25,14,49,66,66,234,161,170,128,114,225,
    210,34,135,86,170,47,214,102,119,33,142,178,113,228,221,32,
    56,167,255,187,157,153,197,105,47,189,224,143,209,204,120,118,
    252,222,155,81,240,114,197,248,94,100,0,174,66,71,227,35,
    96,1,96,5,84,2,4,197,17,44,34,184,35,47,134,69,
    12,54,129,42,193,47,9,24,1,247,2,244,0,126,1,108,
    0,126,86,3,208,41,152,132,179,195,109,54,5,61,130,73,
    254,6,219,55,191,241,202,5,122,158,194,73,99,191,77,231,
    70,249,144,34,115,18,220,125,52,87,210,53,234,182,105,175,
    205,99,163,12,31,184,57,251,18,34,213,163,143,168,144,208,
    31,163,99,128,64,35,210,42,34,26,85,76,96,16,149,73,
    97,62,36,34,27,76,142,160,156,228,68,186,36,227,222,17,
    107,243,88,52,103,170,208,220,123,60,155,185,67,204,94,106,
    221,25,231,178,246,62,11,31,178,118,153,97,89,54,93,59,
    102,227,71,104,234,122,41,173,169,107,191,195,129,109,245,122,
    65,97,66,5,207,43,195,121,245,244,84,207,140,212,166,227,
    252,93,183,54,124,88,78,157,239,164,242,126,128,193,173,236,
    164,101,239,251,205,210,127,228,2,252,93,45,17,71,78,92,
    255,26,247,1,77,49,107,173,41,140,146,197,131,177,231,133,
    235,152,0,19,65,157,198,171,103,38,120,66,229,212,42,21,
    225,246,105,16,242,106,237,182,42,198,189,138,71,255,83,113,
    62,128,7,222,133,77,4,56,209,94,194,183,212,125,255,31,
    9,81,27,212,207,15,49,21,38,229,114,242,75,162,93,18,
    183,146,126,95,82,206,239,162,249,129,211,111,59,166,206,112,
    249,164,126,57,249,42,210,4,233,148,202,211,45,233,175,140,
    193,239,161,177,231,227,237,214,149,208,47,34,102,87,4,193,
    177,56,1,120,25,245,59,194,45,95,5,134,103,248,41,236,
    196,231,163,126,18,7,98,71,28,68,239,211,63,92,155,171,
    164,
};

EmbeddedPython embedded_m5_objects_I2C(
    "m5/objects/I2C.py",
    "/home/eca/gem5/src/dev/i2c/I2C.py",
    "m5.objects.I2C",
    data_m5_objects_I2C,
    465,
    899);

} // anonymous namespace
