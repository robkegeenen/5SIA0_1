#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects[] = {
    120,156,69,79,77,75,195,64,16,125,155,166,31,70,139,5,
    65,79,66,14,10,161,135,70,132,222,164,244,160,215,8,86,
    169,20,100,137,201,106,55,205,38,117,119,69,235,181,63,92,
    103,155,130,179,187,195,188,55,179,111,102,50,236,173,77,111,
    26,2,230,135,130,156,46,67,9,40,134,5,3,115,216,67,
    233,225,113,211,135,104,161,240,177,240,49,175,206,224,139,54,
    86,1,244,20,140,49,9,71,87,12,207,223,215,16,62,138,
    14,182,192,237,203,5,22,93,136,46,138,30,242,22,182,12,
    58,65,238,59,230,52,111,195,127,250,72,64,119,78,241,44,
    234,80,123,249,75,22,49,138,172,131,235,84,167,202,52,216,
    185,161,57,36,175,198,163,250,181,16,153,53,35,51,32,252,
    166,107,21,94,154,80,170,117,173,109,56,76,162,3,247,97,
    95,42,43,43,116,149,150,15,110,87,123,212,144,51,169,238,
    119,18,54,32,130,243,178,78,115,161,57,183,93,151,175,243,
    207,82,24,235,84,146,84,137,59,173,73,183,231,198,35,169,
    149,216,152,221,112,77,217,78,192,216,84,91,243,37,237,50,
    114,93,254,157,185,34,23,47,107,37,98,145,165,241,187,80,
    227,216,232,44,94,111,236,178,174,98,66,251,77,98,206,101,
    37,45,231,35,74,185,86,55,141,252,228,220,169,184,45,7,
    44,240,90,172,79,39,240,78,216,49,251,3,132,206,96,229,
};

EmbeddedPython embedded_m5_objects(
    "m5/objects/__init__.py",
    "/home/eca/gem5/src/python/m5/objects/__init__.py",
    "m5.objects",
    data_m5_objects,
    320,
    448);

} // anonymous namespace
