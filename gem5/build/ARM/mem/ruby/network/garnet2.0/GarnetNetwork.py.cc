#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_GarnetNetwork[] = {
    120,156,181,85,91,143,219,84,16,30,231,126,219,75,119,171,
    21,20,65,207,3,21,161,116,227,178,208,151,21,170,96,187,
    42,170,84,150,202,109,5,205,139,229,216,199,177,211,99,159,
    200,231,36,221,240,90,158,248,65,252,1,126,24,204,28,219,
    73,54,65,101,31,150,56,153,120,62,31,31,207,124,243,205,
    216,135,226,83,197,223,247,12,64,253,129,39,1,126,45,16,
    0,175,138,51,43,63,171,128,168,64,82,133,97,21,44,242,
    171,32,106,144,212,96,88,203,253,26,136,58,36,117,24,214,
    209,175,3,175,66,104,65,208,128,223,1,222,3,188,25,54,
    32,104,2,175,27,180,181,68,155,16,180,129,215,12,218,89,
    162,45,8,186,240,178,223,195,112,226,191,241,211,183,240,76,
    147,185,159,159,118,209,56,179,209,226,130,235,119,50,123,187,
    2,207,60,21,251,142,156,105,158,229,224,14,154,39,66,250,
    111,121,240,243,104,194,125,109,144,31,189,44,229,186,184,219,
    95,231,225,140,120,248,19,79,56,192,208,34,54,134,21,162,
    1,211,198,48,39,117,34,2,115,127,95,1,204,136,144,38,
    165,142,9,19,210,42,17,147,44,33,237,53,164,101,144,78,
    137,180,41,99,66,186,107,59,119,13,210,51,200,14,240,93,
    8,122,6,217,51,200,62,240,91,16,236,24,228,160,220,7,
    215,236,25,228,16,156,151,253,125,98,166,134,70,125,133,38,
    225,137,157,33,79,118,154,167,106,143,77,226,39,131,135,246,
    21,10,6,81,20,19,3,234,24,77,58,75,70,60,99,50,
    100,153,124,167,88,28,178,147,115,214,79,184,138,108,45,179,
    153,178,7,131,47,153,150,83,41,228,120,17,211,3,213,231,
    116,91,190,21,139,83,36,63,244,124,206,66,17,107,166,226,
    223,56,98,108,180,208,92,197,181,114,245,60,206,244,204,19,
    204,143,188,52,229,66,177,41,62,178,4,139,173,20,214,2,
    70,179,48,228,89,126,61,240,180,199,54,238,140,169,204,91,
    43,125,157,137,205,149,234,11,92,244,240,148,253,194,227,113,
    164,143,71,158,226,1,123,229,141,4,127,192,190,62,101,191,
    190,121,192,78,78,217,147,153,210,50,81,119,72,2,41,93,
    44,163,97,161,55,19,154,37,50,192,173,14,215,18,94,195,
    227,23,127,21,193,20,23,143,5,159,115,193,2,238,5,36,
    66,166,163,12,121,148,34,232,223,38,117,182,208,184,110,234,
    37,220,117,117,199,56,184,207,76,144,75,84,233,197,148,27,
    220,191,188,116,35,220,132,103,186,142,238,11,47,243,18,77,
    122,125,150,106,179,11,22,205,165,114,233,6,58,175,17,253,
    230,68,83,255,164,177,75,101,112,169,12,6,152,251,202,69,
    134,220,57,70,168,15,87,180,25,144,8,118,231,254,22,78,
    116,18,126,11,241,12,187,43,78,199,174,39,198,50,139,117,
    148,152,72,207,164,20,38,180,167,158,80,92,31,44,233,115,
    13,61,174,161,199,164,242,148,252,159,140,75,55,94,188,126,
    254,220,180,238,250,186,143,209,207,165,234,150,212,185,43,234,
    72,169,43,163,30,163,177,35,153,112,155,251,158,61,230,201,
    35,91,101,190,125,109,237,79,23,166,97,238,209,94,84,246,
    134,69,199,193,242,104,227,145,255,235,163,205,217,241,172,20,
    251,246,16,137,254,117,136,96,147,227,196,196,57,56,105,152,
    57,130,96,179,112,121,11,38,109,154,38,197,224,88,130,157,
    114,190,116,215,192,30,205,148,124,88,96,219,55,169,237,137,
    53,77,253,184,25,156,26,124,120,22,108,174,199,113,160,238,
    147,184,206,169,115,51,46,60,29,203,20,123,158,73,29,97,
    119,109,181,186,186,126,79,223,185,50,97,54,175,94,175,119,
    104,132,59,36,54,135,212,238,80,242,186,93,116,137,47,60,
    165,28,106,9,135,32,135,52,175,43,244,38,9,76,111,96,
    235,240,84,59,187,4,175,98,113,101,232,22,177,184,101,44,
    102,75,2,9,81,206,71,87,84,119,99,210,163,162,125,75,
    123,221,94,74,175,81,217,179,122,40,183,252,103,186,54,191,
    45,127,177,109,75,237,252,63,165,198,155,48,105,149,47,174,
    214,26,184,20,92,135,100,100,56,165,18,24,170,242,199,153,
    210,126,32,163,124,21,73,230,134,52,208,239,110,151,215,249,
    132,204,213,170,58,159,146,161,66,58,159,145,185,251,255,20,
    136,232,248,129,246,218,93,21,168,40,205,69,191,93,74,47,
    121,52,152,210,80,86,102,26,147,151,201,203,133,110,174,186,
    209,161,23,149,67,74,116,168,112,102,230,152,234,155,39,220,
    124,224,38,144,239,242,215,201,227,187,101,2,29,171,99,237,
    211,81,57,218,59,218,249,7,71,203,113,0,
};

EmbeddedPython embedded_m5_objects_GarnetNetwork(
    "m5/objects/GarnetNetwork.py",
    "/home/eca/gem5/src/mem/ruby/network/garnet2.0/GarnetNetwork.py",
    "m5.objects.GarnetNetwork",
    data_m5_objects_GarnetNetwork,
    1052,
    2563);

} // anonymous namespace
