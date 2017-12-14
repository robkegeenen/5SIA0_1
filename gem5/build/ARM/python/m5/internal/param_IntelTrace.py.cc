#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_IntelTrace[] = {
    120,156,181,88,235,114,219,198,21,62,11,128,144,72,81,150,
    100,221,108,75,142,216,166,110,88,79,43,182,105,92,119,38,
    170,27,55,147,206,36,211,200,41,232,142,29,38,83,20,2,
    150,36,40,18,224,0,43,203,244,80,63,90,121,218,190,64,
    31,161,63,250,54,125,163,246,156,179,0,8,93,60,147,153,
    80,20,185,90,44,118,207,158,203,119,46,187,62,100,159,10,
    254,62,105,0,164,137,0,8,240,43,96,8,48,18,208,17,
    32,164,128,96,3,142,43,144,124,4,65,5,222,2,116,12,
    144,6,156,99,199,132,111,12,136,234,188,198,134,161,201,35,
    2,38,53,144,22,116,42,240,34,90,3,75,218,112,92,131,
    228,47,32,132,136,4,188,12,22,32,88,132,183,72,29,59,
    85,38,184,8,52,88,227,193,42,4,75,60,88,131,160,206,
    157,37,152,172,130,172,67,103,153,166,117,110,33,217,135,72,
    118,133,201,254,151,200,6,248,102,19,130,91,52,29,249,250,
    154,102,90,52,147,247,91,97,42,171,57,151,107,208,185,157,
    247,215,75,253,141,82,127,147,251,184,235,109,24,108,193,96,
    27,6,119,160,139,138,88,43,118,184,11,210,132,193,61,232,
    220,3,137,223,187,112,142,186,10,110,151,86,236,240,138,245,
    98,197,46,175,184,15,157,251,32,241,187,171,87,216,208,110,
    110,161,254,195,255,225,167,137,250,7,85,199,230,149,76,210,
    48,142,220,48,234,198,161,65,239,109,106,200,90,62,53,11,
    153,217,62,37,179,253,7,216,102,129,145,153,237,12,144,176,
    32,89,134,6,156,113,231,204,128,73,19,166,2,6,22,4,
    38,76,113,155,10,49,208,19,112,110,192,183,38,77,56,195,
    214,66,229,190,7,150,210,54,27,176,114,53,165,5,56,171,
    192,180,2,237,151,83,131,6,142,171,144,252,27,222,236,50,
    209,69,38,106,192,20,91,11,206,45,56,179,225,5,78,194,
    161,65,149,196,23,47,167,40,41,142,180,155,22,114,123,88,
    18,151,68,9,194,36,242,70,82,173,97,223,29,123,137,55,
    114,63,143,148,28,62,79,60,95,54,107,249,180,56,221,31,
    123,170,239,240,58,147,20,50,26,43,166,23,71,82,45,97,
    167,27,70,129,59,138,131,147,161,84,139,68,204,237,134,67,
    233,186,252,242,243,209,56,78,212,103,73,18,39,14,233,148,
    7,135,177,87,172,32,141,250,195,56,149,77,218,141,183,113,
    136,188,162,217,221,49,83,36,6,152,87,90,28,200,212,79,
    194,177,66,83,105,138,52,155,168,53,201,72,220,164,191,197,
    166,213,143,71,178,37,125,175,213,147,163,71,173,163,147,112,
    24,180,158,58,95,182,198,19,213,143,163,22,142,133,40,47,
    42,97,216,186,44,254,62,206,185,77,132,78,195,158,27,178,
    8,110,95,14,199,50,89,166,209,123,180,137,88,21,117,97,
    11,83,52,197,50,246,42,248,51,197,174,177,36,14,67,18,
    194,39,193,8,64,86,25,50,100,71,1,199,6,36,187,4,
    136,1,126,5,89,16,97,209,166,119,6,191,251,35,73,175,
    71,7,38,153,89,15,78,25,68,136,38,156,121,64,118,141,
    128,145,80,129,129,13,26,33,8,44,13,153,100,66,45,78,
    39,50,6,18,183,32,253,23,160,54,17,27,83,200,112,115,
    110,130,136,86,65,213,200,117,113,116,11,55,252,27,67,175,
    221,36,246,15,25,1,170,31,166,241,105,196,122,166,62,59,
    75,27,53,243,213,228,217,209,64,250,42,221,195,129,175,227,
    147,134,239,69,81,172,26,94,16,52,60,165,146,240,232,68,
    201,180,161,226,198,131,180,73,166,115,214,114,16,21,244,38,
    227,28,52,100,96,4,141,126,8,66,95,225,195,58,63,176,
    21,82,169,16,0,253,56,72,113,156,72,244,164,114,136,73,
    69,74,142,153,17,198,135,75,83,105,123,156,119,11,159,159,
    230,156,48,8,155,118,14,153,84,14,187,170,198,232,243,210,
    212,101,78,104,156,129,70,132,95,121,195,19,201,212,83,164,
    135,12,81,87,243,48,103,168,221,33,182,115,41,153,245,40,
    142,130,9,114,18,250,31,208,38,119,24,112,117,134,220,38,
    194,109,1,91,27,255,219,98,203,240,173,12,100,118,14,52,
    138,109,10,216,204,34,179,52,130,238,28,227,72,211,224,64,
    192,220,179,167,253,144,122,180,216,217,165,230,62,53,239,81,
    179,151,11,56,63,41,151,47,75,249,152,40,27,44,26,11,
    65,74,55,115,33,130,11,222,114,119,230,45,24,217,218,132,
    122,131,124,99,134,122,139,162,96,242,132,90,156,202,254,100,
    66,250,156,98,46,121,7,19,35,71,64,72,83,111,6,116,
    86,137,179,74,162,46,230,24,117,8,120,101,244,245,74,232,
    115,200,26,12,61,231,110,30,209,92,154,161,65,231,236,16,
    169,202,53,58,109,80,243,131,249,43,118,6,159,222,21,248,
    124,76,155,172,102,240,89,102,216,212,240,183,106,248,102,166,
    237,34,165,173,95,130,13,97,198,186,6,51,63,166,158,121,
    85,190,27,131,75,38,213,239,75,112,33,70,140,50,243,135,
    216,153,108,19,207,101,160,108,99,38,126,17,109,99,114,53,
    56,185,254,156,147,43,39,104,46,83,116,64,53,57,166,234,
    78,133,132,239,154,176,149,37,205,180,138,237,56,137,95,79,
    26,113,183,161,88,58,138,127,7,15,210,253,7,233,199,24,
    217,26,79,56,166,232,216,166,163,87,34,199,20,125,104,233,
    103,175,125,201,185,138,159,92,87,7,27,151,3,143,155,229,
    64,196,204,38,169,206,200,117,202,97,55,85,9,69,219,57,
    107,181,86,104,149,152,252,130,200,214,88,165,166,216,70,124,
    212,4,239,237,234,120,202,101,15,191,197,223,239,72,205,36,
    159,4,42,82,157,182,230,140,153,38,246,157,159,94,192,192,
    220,88,118,90,72,227,79,185,237,237,153,237,233,103,230,192,
    253,7,112,233,39,224,239,64,214,69,35,102,192,45,112,78,
    230,92,167,233,127,6,70,248,53,121,152,227,66,155,114,47,
    207,192,112,145,62,230,169,58,45,127,1,255,44,185,71,158,
    60,205,172,184,43,39,79,171,136,41,12,139,239,148,32,173,
    139,193,135,204,208,247,82,154,166,35,202,204,227,102,1,186,
    40,202,48,162,206,15,35,139,154,160,75,123,127,59,67,8,
    165,159,29,177,110,148,236,254,11,106,62,44,76,46,242,177,
    185,176,177,7,239,206,138,174,142,198,223,208,94,22,115,183,
    178,160,182,241,63,175,118,63,125,246,135,103,135,237,18,189,
    2,201,149,28,201,31,22,72,150,156,67,222,114,61,79,173,
    65,6,61,55,4,30,172,176,44,162,115,140,5,178,2,29,
    155,48,207,229,170,200,92,66,228,209,135,98,213,133,4,197,
    170,56,212,74,42,108,170,205,69,205,235,57,123,53,89,236,
    96,232,141,142,2,239,201,49,17,37,202,126,238,36,70,206,
    230,106,153,77,2,184,120,23,167,252,248,40,103,247,213,156,
    61,250,87,72,163,96,147,241,27,196,62,187,241,243,190,108,
    140,228,232,8,143,98,253,112,220,232,14,189,30,107,219,204,
    196,120,150,139,161,216,92,151,211,120,250,144,218,184,225,199,
    17,134,207,19,95,197,73,35,144,120,64,145,65,227,103,13,
    142,189,141,48,109,120,71,248,214,243,149,6,236,69,239,226,
    26,208,75,122,41,151,123,199,167,212,189,1,107,185,120,204,
    12,177,196,29,65,145,212,244,1,168,8,165,92,188,106,252,
    99,254,193,163,135,154,232,136,66,41,221,217,167,230,39,112,
    51,17,247,35,96,144,64,74,42,176,197,142,81,53,20,109,
    61,155,245,21,173,74,175,122,213,151,223,197,171,244,69,69,
    230,91,118,126,195,177,0,146,79,39,116,9,97,103,151,16,
    232,112,11,223,215,225,24,198,55,0,96,53,87,63,115,30,
    223,48,151,206,175,33,75,149,239,242,49,81,22,97,89,175,
    29,136,188,154,46,243,207,199,238,237,107,0,225,250,137,244,
    148,212,122,223,157,187,68,236,146,122,139,211,153,223,92,45,
    6,159,22,204,159,115,53,48,217,96,115,232,19,3,155,67,
    188,136,238,97,85,104,113,85,120,64,85,225,148,37,117,13,
    93,24,206,16,85,41,4,222,192,38,146,167,238,101,161,117,
    229,71,172,121,227,177,140,2,231,33,148,139,57,126,61,103,
    203,82,8,120,3,165,204,108,138,13,172,222,174,250,9,5,
    179,146,48,108,151,74,225,25,243,183,16,99,238,175,57,230,
    154,84,41,207,34,154,115,64,13,199,176,34,124,57,180,169,
    14,105,5,170,2,57,148,74,94,209,51,135,160,236,60,22,
    72,140,224,241,4,11,105,46,87,241,121,232,186,55,17,10,
    127,147,201,194,69,63,134,66,97,27,85,179,106,87,5,103,
    140,75,215,132,122,111,42,207,116,81,54,73,29,118,189,149,
    66,60,190,205,202,163,57,169,131,143,5,135,222,72,223,78,
    240,121,220,121,31,178,83,150,243,65,161,43,58,105,114,37,
    172,207,17,136,67,206,102,156,188,156,95,210,56,25,115,244,
    104,63,151,102,63,151,38,85,44,76,194,23,106,163,71,106,
    231,218,121,237,112,164,47,115,248,62,176,252,62,72,60,236,
    111,94,26,77,101,18,122,195,240,141,190,189,201,135,217,68,
    87,54,190,166,46,203,223,113,170,81,63,186,58,33,183,1,
    155,59,145,189,48,197,29,178,36,148,47,206,220,143,76,164,
    238,95,23,141,202,107,111,0,28,186,236,210,103,184,39,116,
    11,144,126,130,13,221,209,84,87,170,8,20,114,75,19,143,
    84,203,194,50,235,171,85,171,190,84,181,170,11,38,31,193,
    151,177,144,174,89,213,165,186,208,127,123,8,169,154,177,135,
    235,254,15,74,64,16,240,
};

EmbeddedPython embedded_m5_internal_param_IntelTrace(
    "m5/internal/param_IntelTrace.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_IntelTrace.py",
    "m5.internal.param_IntelTrace",
    data_m5_internal_param_IntelTrace,
    2167,
    6179);

} // anonymous namespace
