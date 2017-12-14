#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Bridge[] = {
    120,156,157,82,75,143,211,48,16,30,247,221,110,23,202,30,
    57,133,91,88,137,134,3,123,67,8,246,204,99,213,46,72,
    244,18,185,241,52,73,21,39,193,118,97,203,181,252,111,152,
    177,91,209,3,39,226,100,50,223,120,236,111,94,25,28,159,
    46,125,111,35,0,251,138,20,69,175,128,10,224,158,181,14,
    84,2,180,128,149,0,161,186,128,2,54,2,84,15,126,1,
    28,0,190,174,58,160,250,176,140,7,116,176,252,77,79,44,
    72,115,44,174,131,58,38,241,1,245,167,245,22,51,231,216,
    239,214,148,42,199,236,156,252,150,201,127,144,130,192,76,68,
    204,23,19,43,49,246,56,136,3,233,125,192,1,80,12,172,
    15,1,71,176,29,115,36,196,127,232,192,106,114,102,25,120,
    203,133,183,76,65,13,65,141,188,229,18,240,17,108,31,3,
    206,32,39,150,177,55,62,129,197,50,158,16,247,162,67,194,
    94,146,208,168,147,181,143,114,94,20,150,247,150,149,252,142,
    81,219,24,103,47,56,33,105,29,26,143,203,25,159,162,248,
    225,190,192,168,222,233,53,109,52,155,200,224,183,29,90,103,
    35,215,68,235,221,102,131,198,62,251,135,147,109,155,218,226,
    153,151,227,122,188,172,173,125,122,244,174,164,195,58,219,179,
    187,43,74,27,133,192,236,115,218,126,167,20,221,96,35,35,
    235,60,220,209,74,130,174,48,205,46,47,232,143,71,239,248,
    138,91,49,34,145,166,181,212,152,166,110,226,129,110,212,174,
    98,216,99,135,125,139,222,158,61,60,164,5,74,69,209,140,
    79,201,223,81,174,174,207,185,50,242,110,161,10,126,131,251,
    170,61,244,62,119,210,72,237,249,62,215,182,204,107,84,30,
    80,77,82,91,254,68,127,43,231,30,208,144,208,251,144,165,
    63,173,176,146,123,199,117,254,66,51,211,152,112,219,248,152,
    240,130,147,13,168,170,104,178,26,179,247,244,161,8,49,143,
    212,95,225,27,147,20,141,198,4,51,153,228,168,111,18,107,
    178,132,59,28,230,112,222,238,125,227,95,176,55,151,105,32,
    120,77,105,93,249,53,21,31,227,238,105,146,245,205,188,229,
    104,236,66,156,38,230,127,24,125,53,94,135,226,191,185,230,
    83,92,255,137,152,117,254,0,166,17,209,130,
};

EmbeddedPython embedded_m5_objects_Bridge(
    "m5/objects/Bridge.py",
    "/home/eca/gem5/src/mem/Bridge.py",
    "m5.objects.Bridge",
    data_m5_objects_Bridge,
    508,
    916);

} // anonymous namespace
