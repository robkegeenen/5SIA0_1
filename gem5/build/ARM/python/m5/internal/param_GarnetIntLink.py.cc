#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GarnetIntLink[] = {
    120,156,181,88,109,115,219,198,17,222,3,64,74,164,40,235,
    93,178,45,217,162,157,200,166,61,173,212,166,113,221,153,184,
    110,237,52,237,36,211,40,46,152,142,29,38,83,20,2,78,
    18,40,18,224,0,39,203,204,72,211,78,229,105,243,173,159,
    250,19,242,161,255,166,255,168,221,221,3,64,72,34,91,207,
    148,148,201,243,242,176,183,183,47,207,238,222,193,131,244,175,
    132,223,95,214,1,18,195,0,240,241,35,160,3,208,21,208,
    18,32,164,0,127,25,142,74,16,127,8,126,9,222,2,180,
    12,144,6,156,35,97,194,215,6,132,53,94,83,134,142,201,
    51,2,250,85,144,22,180,74,240,50,92,0,75,150,225,168,
    10,241,31,65,8,17,10,120,229,79,129,63,13,111,81,58,
    18,21,22,56,13,52,89,229,201,10,248,51,60,89,5,191,
    198,196,12,244,231,65,214,160,53,75,108,173,107,40,246,33,
    138,157,99,177,255,34,177,62,62,89,1,255,26,177,163,94,
    95,17,167,69,156,188,223,28,75,153,207,180,92,128,214,98,
    70,47,21,232,229,2,189,82,160,87,11,244,90,129,190,94,
    160,111,20,232,155,5,122,189,64,111,20,232,91,5,250,118,
    129,222,44,208,245,2,125,135,105,244,194,34,180,239,66,251,
    61,104,191,15,251,24,152,133,220,226,45,144,38,180,239,65,
    235,30,72,252,108,193,57,198,206,95,44,172,184,207,43,150,
    242,21,13,94,241,0,90,15,64,226,167,161,87,148,161,217,
    88,69,60,4,255,198,191,134,64,74,213,112,120,45,227,36,
    136,66,39,8,247,163,192,160,231,101,26,8,61,30,13,83,
    41,140,62,38,24,253,19,24,67,190,145,194,232,12,80,176,
    32,91,58,6,156,49,113,102,64,191,1,167,2,218,22,248,
    38,156,226,54,37,82,224,64,192,185,1,223,152,196,112,134,
    163,133,193,190,13,150,210,24,106,115,176,181,164,41,56,43,
    193,105,9,154,175,78,13,154,56,170,64,252,61,124,187,193,
    66,167,89,168,1,167,56,90,112,110,193,89,25,94,34,19,
    78,181,43,100,190,120,117,138,150,226,76,179,97,161,182,187,
    5,115,201,20,63,136,67,183,43,213,50,210,78,207,141,221,
    174,243,27,55,14,165,250,52,84,191,13,194,163,70,53,227,
    140,146,237,158,171,14,109,94,106,146,79,186,61,197,34,35,
    100,159,65,98,63,8,125,167,27,249,199,29,169,166,73,158,
    179,31,116,164,227,240,195,79,187,189,40,86,159,196,113,20,
    219,228,86,158,236,68,110,190,130,156,234,117,162,68,54,104,
    55,222,198,38,241,138,184,247,123,44,145,20,96,117,105,177,
    47,19,47,14,122,10,163,165,37,18,55,73,107,80,156,120,
    72,158,227,176,115,24,117,229,142,244,220,157,3,217,125,180,
    179,119,28,116,252,157,103,246,231,59,189,190,58,140,194,29,
    156,11,66,37,209,15,157,157,33,30,216,70,182,69,146,117,
    18,28,56,1,91,225,28,202,78,79,198,179,52,123,147,246,
    17,243,162,38,202,194,20,13,49,139,84,9,191,166,216,48,
    102,196,110,64,118,120,100,27,193,200,42,2,135,162,41,224,
    200,128,120,131,96,209,198,143,160,56,34,56,154,244,204,224,
    103,191,35,7,232,217,182,73,193,214,147,167,12,37,196,20,
    114,62,161,232,134,192,120,40,65,187,12,26,39,8,47,13,
    156,184,79,35,178,147,24,3,133,91,144,252,3,208,161,136,
    144,83,72,209,115,110,130,8,231,65,85,169,160,224,236,42,
    110,248,23,6,96,179,65,234,239,50,8,212,97,144,68,39,
    33,187,154,104,78,153,38,122,230,69,255,139,189,182,244,84,
    178,137,19,95,69,199,117,207,13,195,72,213,93,223,175,187,
    74,197,193,222,177,146,73,93,69,245,173,164,65,209,179,23,
    50,28,229,242,250,189,12,55,20,99,196,141,254,225,7,158,
    194,31,75,252,131,163,144,72,133,24,56,140,252,4,231,73,
    196,129,84,54,41,169,200,201,17,43,194,16,113,136,149,182,
    71,190,107,248,251,89,166,9,227,176,81,206,80,147,200,206,
    190,170,50,0,221,36,113,88,19,154,103,172,145,224,215,110,
    231,88,178,244,4,229,161,66,68,106,29,198,143,182,235,164,
    121,102,40,107,31,70,161,223,71,101,2,239,62,237,115,157,
    49,87,99,212,173,32,226,166,112,44,227,255,101,177,106,120,
    86,138,179,114,134,53,42,114,10,56,210,34,13,54,226,238,
    28,11,74,195,224,138,192,6,112,190,221,37,138,22,219,27,
    52,220,162,225,54,13,155,153,141,99,53,116,246,178,161,143,
    73,184,193,214,177,29,228,122,51,179,195,191,144,51,55,6,
    57,131,85,174,73,216,55,40,67,6,216,183,168,34,198,79,
    105,68,86,206,42,19,146,47,169,254,82,142,176,48,74,7,
    4,54,81,3,184,179,87,236,121,178,118,58,67,170,77,240,
    43,98,240,160,128,65,155,2,194,0,180,111,100,165,205,33,
    14,13,61,123,157,68,149,134,184,181,78,195,157,137,248,118,
    0,162,131,43,32,250,136,246,153,79,65,52,203,224,169,226,
    119,222,240,204,212,225,121,135,91,186,4,30,66,142,53,4,
    57,247,136,50,175,154,56,73,208,164,134,253,186,0,26,210,
    197,40,234,191,139,68,127,141,212,46,194,101,13,123,243,203,
    112,13,219,173,193,237,246,71,220,110,185,101,243,65,74,23,
    87,147,235,171,38,74,100,255,190,9,171,105,27,77,42,56,
    246,226,232,77,191,30,237,215,21,27,72,181,240,201,86,178,
    189,149,124,132,85,174,254,148,235,139,174,115,186,146,197,178,
    71,149,136,150,126,242,198,147,220,186,248,151,227,232,194,227,
    112,17,114,210,150,136,200,89,33,239,25,153,91,185,4,39,
    42,166,202,59,126,199,86,115,199,146,158,159,145,228,42,123,
    213,20,107,136,146,170,224,237,29,93,94,249,44,196,79,241,
    251,156,60,77,38,74,160,147,180,221,212,202,177,222,100,129,
    253,131,11,72,24,167,214,246,14,138,249,125,134,128,242,0,
    1,244,53,51,4,255,13,248,72,40,224,175,64,49,198,80,
    166,8,206,1,79,65,93,34,246,63,0,67,125,72,103,230,
    26,209,164,110,204,28,88,58,146,199,204,170,27,245,103,240,
    93,33,79,178,118,106,166,135,190,98,59,181,242,250,194,224,
    120,167,150,105,93,44,68,20,137,67,55,33,54,93,93,6,
    169,55,168,215,249,73,13,171,235,88,145,50,173,101,58,180,
    253,55,3,156,80,67,90,23,75,70,33,250,63,166,225,131,
    60,240,34,155,27,151,38,155,48,186,85,58,186,62,127,77,
    219,89,172,224,220,20,87,143,11,82,114,32,151,50,32,127,
    144,3,89,114,47,121,203,103,124,26,13,10,230,185,33,240,
    242,135,135,36,186,107,89,32,75,208,42,19,228,249,252,42,
    210,140,16,89,253,161,253,46,52,42,246,193,174,246,78,30,
    79,29,42,26,222,140,63,175,41,90,79,58,110,119,207,119,
    159,158,144,92,18,238,101,57,98,100,154,206,23,53,37,124,
    139,81,202,242,207,71,153,198,175,199,159,211,63,69,49,185,
    166,140,96,63,242,56,145,191,60,148,245,174,236,238,225,37,
    237,48,232,213,247,59,238,1,251,220,76,45,249,34,179,68,
    113,208,46,55,245,228,33,141,81,221,139,66,44,163,199,158,
    138,226,186,47,241,222,34,253,250,15,235,92,131,235,65,82,
    119,247,240,169,235,41,141,215,139,249,197,231,66,55,62,72,
    248,8,120,116,66,228,100,98,230,224,29,52,192,147,111,31,
    242,254,166,175,70,121,73,229,51,173,134,63,182,34,188,145,
    168,190,46,43,212,224,237,109,26,30,192,196,42,239,135,20,
    124,146,71,142,40,139,117,163,98,240,1,233,2,227,11,90,
    155,92,77,178,147,119,73,50,253,110,37,77,181,50,113,202,
    41,186,242,210,88,161,2,220,170,102,147,51,60,214,120,114,
    54,123,125,115,141,39,231,248,149,72,153,103,22,40,83,167,
    254,223,76,101,240,79,6,246,127,30,107,130,218,143,39,175,
    168,253,51,72,187,236,168,228,20,69,43,102,117,114,182,69,
    118,40,47,154,192,215,248,155,195,49,228,120,177,116,149,212,
    1,216,152,132,93,156,209,122,151,243,65,206,93,61,83,62,
    203,77,56,231,227,68,127,153,227,162,175,31,28,23,241,50,
    188,137,135,75,139,15,151,79,232,112,121,202,246,58,134,62,
    95,14,208,85,202,205,94,195,33,148,39,206,16,211,245,25,
    146,180,115,123,61,25,250,246,67,40,30,11,249,241,248,163,
    76,69,228,59,40,116,119,83,44,227,57,240,106,230,80,69,
    44,152,196,1,42,229,185,50,145,80,49,4,255,158,65,176,
    65,239,103,6,101,209,126,66,3,23,194,188,6,218,191,200,
    29,253,222,104,124,249,88,111,59,56,67,87,139,119,226,195,
    83,7,223,246,10,115,234,253,17,235,112,226,36,138,143,6,
    27,188,19,35,237,80,99,104,12,38,57,52,156,39,190,236,
    72,37,135,97,70,145,253,233,93,213,151,216,207,162,62,94,
    47,248,4,143,191,59,142,51,161,174,240,115,20,243,39,72,
    203,21,118,5,81,198,190,176,34,86,140,74,185,34,184,141,
    94,122,171,170,85,32,68,235,179,106,63,177,185,172,204,229,
    1,227,55,127,89,127,163,216,242,157,105,215,237,234,215,56,
    252,214,194,166,104,241,45,212,190,159,7,158,46,227,124,65,
    208,151,44,204,46,110,241,220,209,237,159,208,60,129,179,251,
    104,59,51,106,91,27,245,49,71,147,44,226,151,143,221,71,
    234,214,80,190,93,29,19,102,220,28,46,169,19,121,71,210,
    215,239,198,70,72,97,158,95,69,93,23,231,215,135,114,52,
    131,110,42,97,225,210,115,63,166,85,43,151,102,19,25,7,
    110,39,248,86,170,27,151,158,200,240,184,235,188,56,137,155,
    120,88,150,35,172,127,17,157,200,248,243,8,65,162,238,94,
    98,24,60,98,1,206,107,73,71,40,117,231,127,200,209,187,
    141,176,237,120,175,217,79,148,236,142,240,32,54,149,184,235,
    118,82,255,220,30,202,243,220,77,2,47,197,224,8,39,51,
    139,29,225,141,42,30,161,8,115,176,4,194,91,246,144,95,
    253,14,217,133,82,178,56,193,167,161,171,173,139,243,47,150,
    7,65,66,27,47,94,90,148,86,119,74,25,85,31,81,12,
    138,2,38,147,178,250,130,160,95,57,60,165,98,150,188,194,
    129,222,45,86,230,42,152,190,84,248,77,188,254,207,10,203,
    172,205,87,172,218,76,197,170,76,153,252,210,104,22,175,123,
    85,171,50,83,19,255,253,223,38,38,127,213,216,92,168,136,
    255,0,184,49,24,220,
};

EmbeddedPython embedded_m5_internal_param_GarnetIntLink(
    "m5/internal/param_GarnetIntLink.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_GarnetIntLink.py",
    "m5.internal.param_GarnetIntLink",
    data_m5_internal_param_GarnetIntLink,
    2374,
    7052);

} // anonymous namespace
