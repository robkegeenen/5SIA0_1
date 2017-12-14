#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_GarnetSyntheticTraffic[] = {
    120,156,189,85,109,111,27,69,16,158,115,18,55,113,156,151,
    166,105,218,130,144,150,111,86,85,98,138,148,111,168,84,165,
    2,33,104,11,73,133,168,191,156,214,183,115,246,38,183,119,
    214,238,186,216,124,13,127,162,252,19,254,17,255,2,102,230,
    124,142,131,40,5,33,177,182,215,187,207,238,206,204,62,243,
    204,93,6,139,182,70,191,199,10,32,60,162,129,161,111,2,
    5,128,3,24,0,36,60,111,65,145,192,203,197,168,69,163,
    53,64,128,60,1,179,14,63,3,92,2,188,26,172,129,217,
    128,179,94,155,76,216,223,169,245,18,26,197,45,234,158,161,
    123,49,60,199,44,214,16,119,247,227,17,245,95,106,95,98,
    60,155,151,113,140,209,102,47,189,206,115,155,101,171,97,61,
    225,176,118,232,8,249,27,36,28,220,160,197,241,145,59,92,
    135,243,13,142,136,162,185,108,193,160,221,32,235,28,9,35,
    55,26,164,13,230,134,32,155,13,178,9,102,75,144,173,6,
    233,128,217,22,164,179,130,116,5,217,94,65,118,4,233,10,
    178,3,102,23,204,158,32,187,130,236,129,217,7,115,83,144,
    253,149,83,7,130,220,108,144,91,96,14,5,57,16,132,166,
    183,193,28,9,114,8,72,227,59,112,73,119,60,146,213,59,
    128,119,225,252,30,152,187,178,225,61,56,61,235,221,35,106,
    78,91,176,72,89,54,153,246,35,134,136,62,244,71,194,105,
    26,26,82,211,88,179,218,255,107,178,143,199,99,203,41,11,
    135,212,13,139,42,187,80,85,158,7,140,202,150,106,104,99,
    176,156,174,192,217,122,62,117,67,244,180,172,158,146,47,91,
    234,104,171,50,88,146,8,132,109,90,119,232,42,63,87,193,
    254,132,246,55,202,93,120,255,218,161,96,221,180,144,51,42,
    155,103,5,6,81,73,200,89,32,122,166,202,229,198,137,206,
    46,48,6,21,43,21,176,52,199,234,109,237,41,230,122,90,
    80,164,178,247,2,113,34,7,108,57,82,209,22,197,170,71,
    130,67,248,129,92,157,209,72,85,101,49,87,185,175,156,138,
    99,58,92,86,6,223,238,101,165,61,153,43,179,240,137,175,
    145,238,202,39,197,231,159,141,83,60,98,218,16,83,255,192,
    116,115,19,131,19,54,70,54,212,34,109,105,156,79,48,238,
    146,241,105,105,243,202,187,212,235,210,84,46,116,9,90,228,
    80,241,158,209,47,111,184,253,250,89,184,77,43,223,10,135,
    148,67,46,59,38,192,107,18,200,27,90,249,158,68,192,225,
    213,75,244,247,174,240,62,86,228,80,61,84,218,163,122,248,
    81,94,216,248,64,125,194,156,159,200,228,221,183,187,158,166,
    165,95,165,41,69,113,236,17,213,107,138,41,88,46,247,240,
    226,154,102,140,29,145,4,69,20,30,51,27,248,38,127,223,
    116,78,85,64,60,102,214,233,66,77,42,91,70,251,248,235,
    111,32,188,34,195,159,139,238,212,16,137,72,84,56,179,145,
    181,242,111,154,153,34,95,162,208,82,39,20,85,53,242,24,
    66,248,144,57,175,124,172,19,143,170,169,133,57,21,165,19,
    144,132,16,110,177,70,106,232,71,164,48,138,138,165,90,245,
    184,80,226,38,117,105,90,106,135,105,26,59,50,113,149,153,
    22,60,93,231,13,44,4,198,179,217,44,29,163,54,232,227,
    134,164,218,107,23,153,188,175,202,24,187,77,25,167,117,25,
    139,89,170,173,148,149,24,175,202,52,229,50,21,115,84,37,
    105,93,144,113,111,177,119,81,129,169,211,179,184,35,91,202,
    17,197,193,66,39,167,219,87,136,24,229,199,199,89,244,132,
    136,247,107,194,229,0,191,40,42,93,199,65,185,79,89,136,
    203,9,39,94,94,17,203,244,138,181,58,79,162,122,98,119,
    66,79,25,76,11,235,108,148,128,159,105,126,210,49,219,53,
    47,203,24,132,89,25,18,39,72,100,48,41,186,156,11,84,
    167,162,199,239,149,171,46,124,71,93,127,92,57,236,99,166,
    251,35,116,39,253,224,179,254,127,121,160,78,230,242,96,102,
    69,132,7,212,181,147,118,171,157,28,44,62,91,43,31,153,
    183,174,230,221,228,121,143,111,116,10,205,155,211,157,28,79,
    56,189,65,24,227,153,175,102,181,253,255,229,38,226,246,211,
    90,134,143,62,96,55,76,229,126,210,73,58,173,63,0,139,
    246,24,26,
};

EmbeddedPython embedded_m5_objects_GarnetSyntheticTraffic(
    "m5/objects/GarnetSyntheticTraffic.py",
    "/home/eca/gem5/src/cpu/testers/garnet_synthetic_traffic/GarnetSyntheticTraffic.py",
    "m5.objects.GarnetSyntheticTraffic",
    data_m5_objects_GarnetSyntheticTraffic,
    963,
    2110);

} // anonymous namespace
