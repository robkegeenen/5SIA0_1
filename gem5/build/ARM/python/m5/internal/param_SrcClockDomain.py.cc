#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SrcClockDomain[] = {
    120,156,189,88,109,115,219,88,21,62,87,146,157,216,113,26,
    231,189,109,210,198,187,76,169,233,64,2,203,150,50,179,161,
    80,202,50,195,206,108,118,145,23,218,245,238,32,20,233,218,
    145,35,75,30,233,38,169,59,201,7,72,7,246,15,192,119,
    62,240,129,127,195,63,130,115,206,181,100,37,113,102,51,67,
    76,99,223,94,31,93,157,123,94,158,243,114,175,7,163,127,
    37,252,254,162,1,144,254,93,0,248,248,17,16,2,244,5,
    180,5,8,41,192,95,129,195,18,36,31,130,95,130,119,0,
    109,3,164,1,231,56,49,225,43,3,162,26,191,83,134,208,
    100,138,128,97,21,164,5,237,18,188,138,22,193,146,101,56,
    172,66,242,71,16,66,68,2,94,251,51,224,207,194,59,228,
    142,147,10,51,156,5,34,86,153,88,1,127,142,137,85,240,
    107,60,153,131,97,29,100,13,218,243,180,172,125,7,217,62,
    65,182,11,204,246,223,196,214,199,39,171,224,223,161,229,40,
    215,151,180,210,162,149,188,223,2,115,169,103,82,46,66,123,
    41,155,47,23,230,43,133,249,106,97,190,86,152,175,23,230,
    119,121,142,146,45,65,239,30,244,238,67,111,3,58,104,172,
    197,92,138,77,144,38,244,30,64,251,1,72,252,108,194,57,
    218,211,95,42,188,241,144,223,88,206,223,216,226,55,26,208,
    110,128,196,207,150,126,163,12,173,230,26,250,40,248,15,254,
    107,162,143,64,213,112,56,150,73,26,196,145,19,68,157,56,
    48,232,121,153,6,242,168,71,195,204,200,181,47,201,181,255,
    2,246,171,111,140,92,123,6,200,88,144,46,161,1,103,60,
    57,51,96,216,132,83,1,61,11,124,19,78,113,155,18,9,
    208,21,112,110,192,215,38,45,56,195,209,66,7,60,4,75,
    105,191,246,216,1,154,211,12,156,149,224,180,4,173,215,167,
    6,17,14,43,144,252,19,222,110,50,211,89,102,106,192,41,
    142,22,156,91,112,86,134,87,184,8,73,189,10,169,47,94,
    159,162,166,72,105,53,45,148,118,175,160,46,169,226,7,73,
    228,246,165,90,197,185,51,112,19,183,239,180,18,239,101,24,
    123,135,191,138,251,110,16,53,171,217,210,56,221,30,184,234,
    192,230,119,77,50,74,127,160,152,103,28,73,53,135,147,78,
    16,249,78,63,246,143,66,169,102,137,161,211,9,66,233,56,
    252,240,55,253,65,156,168,143,147,36,78,108,178,43,19,195,
    216,205,223,32,171,122,97,156,202,38,237,198,219,216,196,94,
    209,234,206,128,57,146,0,44,47,189,236,203,212,75,130,129,
    66,119,105,142,180,154,184,53,201,81,60,164,47,113,216,57,
    136,251,114,71,122,238,78,87,246,159,238,236,31,5,161,191,
    243,194,254,116,103,48,84,7,113,180,131,180,32,82,18,13,
    17,238,76,50,193,54,174,91,34,102,39,65,215,9,88,13,
    231,64,134,3,153,204,19,245,62,109,36,234,162,38,202,194,
    20,77,49,143,179,18,126,77,177,105,204,137,189,128,20,241,
    72,57,2,146,85,132,14,249,83,192,161,1,201,38,1,163,
    135,31,65,158,68,120,180,232,153,193,207,126,75,22,208,212,
    158,73,238,214,196,83,6,19,162,10,87,238,146,127,35,96,
    68,148,160,87,6,141,20,4,152,134,78,50,164,17,151,19,
    27,3,153,91,144,254,13,208,162,136,145,83,24,225,231,220,
    4,17,213,65,85,41,204,145,186,134,27,254,153,33,216,106,
    146,248,123,140,2,117,16,164,241,73,196,182,166,57,7,77,
    11,45,243,249,240,179,253,158,244,84,186,133,132,47,227,163,
    134,231,70,81,172,26,174,239,55,92,165,146,96,255,72,201,
    180,161,226,198,163,180,73,238,179,23,51,32,229,252,134,131,
    12,56,228,100,4,142,254,225,7,158,194,31,203,252,131,189,
    144,74,133,32,56,136,253,20,233,196,162,43,149,77,66,42,
    50,114,204,130,48,70,28,90,74,219,227,186,59,248,251,69,
    38,9,3,177,89,206,96,147,202,176,163,170,140,64,55,77,
    29,150,132,232,12,54,98,124,236,134,71,146,185,167,200,15,
    5,162,169,150,97,10,112,187,75,162,103,154,178,248,81,28,
    249,67,148,38,240,30,211,70,119,25,116,53,134,221,42,66,
    110,6,199,50,254,95,22,107,134,103,141,128,86,206,192,70,
    121,78,1,187,90,140,188,141,192,59,199,156,210,52,56,41,
    176,6,28,113,239,211,140,94,182,55,105,120,64,195,67,26,
    182,50,37,111,87,211,249,203,154,62,35,238,6,171,199,138,
    144,241,205,76,17,255,66,212,220,27,71,13,102,186,22,161,
    223,160,24,25,163,223,162,172,152,60,167,17,151,114,92,153,
    144,126,65,57,152,162,132,153,81,64,32,180,105,54,6,60,
    155,197,174,147,186,179,25,86,109,2,96,17,133,221,2,10,
    109,242,8,67,208,190,151,101,55,135,86,104,240,217,27,196,
    170,52,193,174,13,26,222,155,142,113,199,48,234,94,129,209,
    71,180,81,125,4,163,121,134,79,21,191,117,195,51,71,22,
    207,203,220,242,37,248,16,118,172,9,216,249,46,205,204,171,
    58,78,21,54,35,205,126,93,128,13,9,99,20,21,216,195,
    201,112,157,228,46,2,102,29,43,244,171,104,29,139,174,193,
    69,247,135,92,116,185,112,115,139,163,19,172,201,57,86,79,
    74,100,128,142,9,107,163,98,154,86,112,28,36,241,155,97,
    35,238,52,20,107,72,249,112,247,81,186,253,40,253,8,51,
    93,227,57,231,24,157,235,116,54,75,228,128,178,17,189,250,
    241,27,79,114,253,226,95,142,163,147,143,195,137,200,25,213,
    69,196,14,21,103,54,54,219,149,211,112,170,18,202,190,83,
    176,108,53,183,44,9,250,9,177,174,178,89,77,177,142,56,
    169,10,222,223,209,57,150,91,34,126,138,223,95,146,169,73,
    71,9,212,228,218,45,45,29,11,78,42,216,223,191,128,133,
    91,21,219,222,65,62,191,203,48,80,30,99,128,190,102,6,
    226,191,2,183,134,2,254,2,228,101,116,230,8,196,57,230,
    201,173,203,180,252,15,192,104,159,80,159,57,79,180,168,38,
    243,10,76,31,233,51,94,170,203,245,39,240,77,33,84,178,
    162,106,142,154,191,98,81,181,242,28,195,240,184,81,225,180,
    46,38,35,114,197,129,155,210,50,157,97,198,209,55,78,218,
    121,195,134,25,246,118,177,50,171,153,58,180,255,215,99,164,
    80,89,218,16,203,70,193,255,63,162,225,131,220,245,34,163,
    221,154,40,91,112,125,197,116,116,150,254,138,246,179,88,194,
    133,25,238,6,46,178,201,193,92,202,192,252,65,14,102,201,
    37,229,29,183,251,52,26,228,207,115,67,224,217,12,187,37,
    58,10,89,32,75,208,46,19,236,185,147,21,163,168,16,89,
    18,162,148,117,161,94,177,21,246,180,125,114,151,106,111,209,
    240,102,10,193,77,14,219,13,221,254,190,239,62,143,136,49,
    113,247,178,56,49,50,81,235,69,81,9,227,226,58,105,249,
    231,211,76,228,227,41,4,246,79,144,79,46,42,195,216,143,
    61,142,230,47,14,100,163,47,251,251,120,98,59,8,6,141,
    78,232,118,217,234,230,72,149,207,50,85,20,187,237,114,117,
    79,159,208,24,55,188,56,194,108,122,228,169,56,105,248,18,
    207,48,210,111,252,160,193,169,184,17,164,13,119,31,159,186,
    158,210,152,189,24,100,220,34,186,73,55,229,110,240,240,132,
    166,83,242,154,131,39,210,0,187,224,1,228,117,78,159,147,
    242,204,202,136,214,33,128,37,9,79,39,106,168,147,11,85,
    122,123,155,134,239,193,244,18,240,135,200,167,79,12,201,20,
    101,177,97,84,12,181,114,37,198,62,167,183,211,171,145,246,
    143,155,68,154,190,255,24,197,91,153,86,202,25,58,2,211,
    88,161,68,220,174,102,196,57,30,107,76,156,207,136,119,120,
    92,96,98,61,35,46,242,184,196,196,229,236,50,102,133,137,
    171,208,94,163,91,9,162,172,83,96,207,252,175,129,205,161,
    50,165,32,57,185,213,120,182,159,253,31,36,181,127,10,163,
    202,124,93,44,139,162,26,243,58,150,123,34,107,230,139,58,
    240,13,192,198,53,128,115,188,68,186,74,106,31,108,78,69,
    51,78,1,122,155,183,227,24,189,218,139,190,200,149,56,231,
    38,100,184,194,174,209,7,23,118,141,120,21,221,199,166,212,
    226,166,116,151,154,210,83,214,216,49,116,95,58,70,88,41,
    87,156,58,253,72,158,56,147,148,215,205,39,137,231,14,6,
    50,242,237,39,80,236,39,249,241,20,60,77,105,231,79,80,
    104,10,76,177,130,13,228,213,248,161,36,90,80,138,125,84,
    202,35,102,58,222,98,28,126,147,225,176,201,135,183,60,147,
    218,187,52,112,238,204,211,166,253,243,220,214,15,175,5,25,
    81,232,64,242,109,75,176,69,201,174,187,188,67,245,254,117,
    139,125,254,225,4,62,243,188,193,50,226,75,39,137,156,194,
    253,222,196,151,184,154,96,145,232,56,161,60,150,33,239,112,
    227,197,180,207,2,46,190,68,87,143,175,99,112,28,135,202,
    237,202,76,84,218,236,166,107,105,47,170,108,23,201,140,46,
    14,119,95,134,82,201,137,192,87,228,194,209,89,221,151,88,
    198,227,33,30,174,248,248,130,191,67,199,153,86,45,252,25,
    201,75,12,169,0,98,45,20,101,172,134,171,130,255,140,74,
    185,34,184,133,184,116,189,172,229,160,155,0,221,172,15,83,
    155,115,228,66,14,60,190,1,205,74,59,97,148,157,189,231,
    246,245,109,22,223,221,216,223,129,209,73,220,126,156,3,152,
    110,36,248,132,164,207,153,152,40,184,189,225,110,198,254,113,
    150,63,250,79,183,51,205,182,89,33,231,88,82,87,196,23,
    176,253,167,220,98,23,215,104,237,127,175,253,162,149,87,247,
    47,173,25,61,205,56,109,76,100,209,10,250,250,238,80,45,
    94,122,238,39,196,116,245,18,53,149,73,224,134,193,91,169,
    30,76,228,87,240,6,219,44,123,204,236,175,46,161,171,154,
    194,111,238,100,38,84,18,198,81,34,187,65,138,220,152,213,
    213,76,75,142,87,239,93,135,236,34,131,41,65,79,119,248,
    250,230,224,57,41,150,210,197,8,221,18,86,22,42,8,67,
    202,194,38,30,226,231,133,101,214,234,21,171,54,87,177,42,
    51,38,95,254,204,227,145,173,106,85,230,106,162,248,183,133,
    112,173,26,91,203,21,241,95,46,184,237,158,
};

EmbeddedPython embedded_m5_internal_param_SrcClockDomain(
    "m5/internal/param_SrcClockDomain.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_SrcClockDomain.py",
    "m5.internal.param_SrcClockDomain",
    data_m5_internal_param_SrcClockDomain,
    2316,
    6875);

} // anonymous namespace
