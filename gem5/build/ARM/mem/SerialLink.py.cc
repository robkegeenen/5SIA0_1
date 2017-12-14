#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_SerialLink[] = {
    120,156,157,83,75,111,211,64,16,30,39,77,218,164,41,45,
    225,113,197,72,28,92,132,98,132,90,78,8,81,46,168,82,
    41,85,210,34,209,139,181,241,78,98,183,235,7,222,13,52,
    92,203,191,224,199,194,204,184,161,70,112,194,142,39,51,179,
    243,254,102,99,184,121,218,244,189,241,1,236,30,49,154,126,
    30,24,128,83,230,90,96,60,200,60,56,247,192,211,109,64,
    15,102,30,232,53,248,14,112,13,240,233,188,5,186,3,147,
    160,75,142,233,79,122,2,143,56,199,228,105,205,246,136,188,
    199,236,195,244,2,99,231,250,36,77,176,74,149,57,74,243,
    203,184,89,192,91,46,224,7,49,8,156,141,146,115,112,202,
    76,89,215,184,144,107,226,59,128,93,160,58,152,95,7,220,
    128,139,30,87,67,53,92,183,224,188,223,208,116,69,179,41,
    154,1,232,117,208,27,162,217,2,188,3,23,219,128,59,48,
    167,44,61,81,222,93,57,246,65,111,138,102,40,154,123,162,
    25,136,230,62,140,39,193,22,213,55,110,17,177,67,34,25,
    102,161,149,110,34,67,237,140,146,196,74,131,70,125,65,191,
    44,42,103,55,185,123,101,29,86,34,167,59,236,74,141,194,
    105,130,126,190,200,166,116,80,204,252,10,63,47,208,58,235,
    187,194,159,46,102,51,172,236,227,127,24,217,178,200,45,54,
    172,28,15,238,121,110,237,163,27,107,163,28,230,241,146,205,
    93,146,90,191,81,157,29,145,205,129,214,20,198,250,149,202,
    231,117,160,82,145,232,146,170,88,204,19,250,199,166,75,202,
    8,218,3,34,199,191,171,40,85,165,140,65,67,169,114,138,
    144,230,54,213,216,112,148,65,248,129,186,84,35,49,241,191,
    166,218,37,187,246,144,162,188,155,134,214,159,148,136,154,35,
    161,138,147,63,195,53,162,213,193,252,191,162,89,246,222,13,
    30,240,106,109,16,137,162,92,101,24,69,178,89,81,148,21,
    122,97,88,92,99,131,101,137,162,143,175,174,162,4,149,166,
    129,245,86,248,156,16,28,174,195,253,177,36,102,53,80,114,
    192,251,156,137,40,54,39,84,101,38,249,206,168,194,121,142,
    90,4,130,45,178,233,55,148,168,12,79,45,173,147,116,84,
    3,33,222,26,141,90,58,94,133,143,116,7,138,170,142,214,
    187,129,99,204,80,212,146,49,116,83,138,106,41,233,107,136,
    228,128,118,32,146,113,203,193,217,97,238,94,238,73,197,60,
    158,72,70,18,240,53,186,37,246,9,145,48,41,50,12,49,
    86,225,28,179,253,208,86,113,200,27,123,123,255,70,229,82,
    150,249,5,123,60,36,210,245,248,29,208,59,148,119,224,245,
    218,195,214,113,208,94,221,228,108,127,196,136,101,118,236,173,
    110,194,255,102,150,9,190,170,1,123,253,140,61,25,179,190,
    183,211,249,5,40,96,32,113,
};

EmbeddedPython embedded_m5_objects_SerialLink(
    "m5/objects/SerialLink.py",
    "/home/eca/gem5/src/mem/SerialLink.py",
    "m5.objects.SerialLink",
    data_m5_objects_SerialLink,
    632,
    1176);

} // anonymous namespace
