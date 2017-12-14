#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RandomRepl[] = {
    120,156,181,88,123,111,219,200,17,159,37,41,217,146,237,88,
    142,95,73,236,196,74,82,231,212,160,181,219,235,165,41,112,
    105,218,220,245,14,184,3,226,75,169,20,201,249,14,101,105,
    114,109,83,230,67,32,215,118,116,176,129,162,14,218,162,255,
    247,35,244,143,126,155,126,130,126,149,118,102,150,164,104,217,
    70,15,168,236,72,155,209,114,119,118,30,191,121,44,61,200,
    255,106,248,253,117,27,32,251,183,0,240,241,35,32,4,136,
    4,108,11,16,82,128,191,0,7,53,72,63,2,191,6,239,
    1,182,13,144,6,156,33,97,194,55,6,196,211,188,167,14,
    161,201,51,2,6,77,144,22,108,215,224,77,60,7,150,172,
    195,65,19,210,63,128,16,34,22,240,214,159,0,127,18,222,
    35,119,36,26,204,112,18,104,178,201,147,13,240,167,120,178,
    9,254,52,19,83,48,104,129,156,134,237,25,90,182,125,3,
    217,62,70,182,179,204,246,95,196,214,199,39,139,224,223,160,
    229,40,215,215,180,210,162,149,124,222,44,115,105,21,82,206,
    193,246,205,130,158,175,208,11,21,122,177,66,47,85,232,229,
    10,125,171,66,223,174,208,119,42,244,74,133,94,173,208,119,
    43,244,61,166,81,195,155,208,91,131,94,27,122,247,97,23,
    141,62,87,106,243,0,164,9,189,135,176,253,16,36,126,30,
    192,25,250,197,191,89,217,241,3,222,49,95,238,88,231,29,
    143,96,251,17,72,252,172,235,29,117,232,118,150,208,215,193,
    127,240,175,131,190,6,53,141,195,145,76,179,32,137,157,32,
    222,77,2,131,158,215,105,32,100,120,52,76,228,16,249,148,
    32,242,79,96,124,248,70,14,145,83,64,198,130,116,9,13,
    56,101,226,212,128,65,7,78,4,244,44,240,77,56,193,99,
    106,36,192,158,128,51,3,190,53,105,193,41,142,22,58,242,
    30,88,74,227,163,199,142,212,156,38,224,180,6,39,53,232,
    190,61,49,104,226,160,1,233,63,224,187,85,102,58,201,76,
    13,56,193,209,130,51,11,78,235,240,6,23,225,84,175,65,
    234,139,183,39,168,41,206,116,59,22,74,187,85,81,151,84,
    241,131,52,118,35,169,230,144,118,250,110,234,70,142,237,198,
    126,18,217,178,31,118,154,197,178,36,219,232,187,106,223,230,
    125,38,25,36,234,43,230,151,196,82,77,33,177,27,196,190,
    19,37,254,97,40,213,36,49,115,118,131,80,58,14,63,252,
    34,234,39,169,250,44,77,147,212,38,155,242,100,152,184,229,
    14,178,168,23,38,153,236,208,105,124,140,77,236,21,173,222,
    237,51,71,18,128,101,165,205,190,204,188,52,232,43,116,149,
    230,72,171,137,91,135,156,196,67,246,43,28,54,247,147,72,
    110,74,207,221,220,147,209,147,205,157,195,32,244,55,95,216,
    47,55,251,3,181,159,196,155,56,23,196,74,162,17,194,205,
    81,245,55,112,205,77,98,116,28,236,57,1,171,224,236,203,
    176,47,211,25,154,189,67,135,136,150,152,22,117,97,138,142,
    152,65,170,134,95,83,172,26,83,98,43,32,37,60,82,140,
    0,100,85,33,67,126,20,112,96,64,186,74,128,232,225,71,
    144,7,17,22,93,122,102,240,179,223,146,246,122,182,103,146,
    155,245,228,9,131,8,209,132,43,159,145,95,99,96,36,212,
    160,87,7,141,16,4,150,134,76,58,160,17,151,19,27,3,
    153,91,144,253,29,208,154,136,141,19,200,113,115,102,130,136,
    91,160,154,148,38,112,118,9,15,252,19,67,175,219,33,241,
    183,24,1,106,63,200,146,227,152,237,76,52,7,75,23,45,
    243,106,240,213,78,79,122,42,91,195,137,175,147,195,182,231,
    198,113,162,218,174,239,183,93,165,210,96,231,80,201,172,173,
    146,246,122,214,33,215,217,115,5,136,74,126,131,126,1,26,
    114,48,130,70,255,240,3,79,225,143,121,254,193,94,200,164,
    66,0,236,39,126,134,243,196,98,79,42,155,132,84,100,228,
    132,5,97,124,56,180,148,142,199,117,55,240,247,139,66,18,
    6,97,167,94,64,38,147,225,174,106,50,250,220,44,115,88,
    18,154,103,160,17,227,35,55,60,148,204,61,67,126,40,16,
    145,90,134,49,67,237,22,137,93,104,201,162,199,73,236,15,
    80,146,192,251,128,14,185,197,128,155,102,200,45,34,220,38,
    112,172,227,255,117,177,100,120,86,14,178,122,1,52,202,109,
    10,216,205,34,247,52,130,238,12,243,72,199,224,68,192,210,
    115,164,61,32,138,54,219,171,52,220,165,225,30,13,107,133,
    130,227,211,114,102,84,203,167,196,217,96,213,88,9,50,186,
    89,40,225,159,139,150,219,195,104,193,204,214,37,212,27,20,
    27,67,212,91,148,5,211,231,52,226,82,142,39,19,178,215,
    148,115,41,58,152,25,5,2,66,154,168,33,208,217,36,118,
    139,84,157,44,48,106,19,240,170,232,219,171,160,207,38,111,
    48,244,236,219,69,70,115,104,133,6,157,189,66,172,106,151,
    216,180,77,195,253,241,27,118,8,159,189,11,240,249,152,14,
    105,229,240,153,97,216,52,241,219,50,60,51,183,118,89,210,
    230,71,96,67,152,177,46,193,204,35,162,204,139,250,93,27,
    92,114,173,62,175,192,133,4,49,170,194,111,33,49,88,38,
    153,171,64,89,198,74,252,38,94,198,226,106,112,113,253,9,
    23,87,46,208,220,18,233,132,106,114,78,213,68,141,148,223,
    53,97,41,47,154,89,3,199,126,154,188,27,180,147,221,182,
    98,237,40,255,61,91,207,54,214,179,143,49,179,181,159,115,
    78,209,185,77,103,175,84,246,41,251,208,214,207,222,121,146,
    107,21,255,114,28,157,108,28,78,60,78,94,3,17,51,139,
    100,58,163,176,41,167,221,76,165,148,109,199,108,213,102,105,
    85,18,242,75,98,219,100,147,154,98,25,241,209,20,124,182,
    163,243,41,183,61,252,20,191,159,144,153,73,63,9,212,16,
    219,93,45,25,11,77,226,219,63,58,135,129,177,137,108,111,
    34,143,223,21,190,175,15,125,79,95,179,0,238,95,128,91,
    63,1,127,6,242,46,58,49,7,110,137,115,114,231,60,45,
    255,61,48,194,47,169,195,156,23,186,84,123,121,5,166,139,
    236,41,47,213,101,249,75,248,107,37,60,138,226,105,230,205,
    93,181,120,90,101,78,97,88,124,175,2,105,157,79,62,228,
    134,125,55,163,101,58,163,12,35,110,152,160,203,166,12,51,
    234,248,48,50,169,25,58,116,246,183,67,132,80,249,89,17,
    243,70,197,239,63,165,225,195,210,229,162,152,27,139,24,107,
    112,117,85,116,116,54,254,134,206,178,88,186,217,9,198,246,
    144,69,9,222,90,1,222,15,75,240,74,46,27,239,185,133,
    167,209,32,31,158,25,2,239,109,216,9,209,53,201,2,89,
    131,237,58,193,156,59,84,145,71,129,40,18,14,165,167,115,
    53,137,181,223,210,118,41,221,168,61,68,195,187,49,7,50,
    57,233,89,232,70,59,190,251,156,210,82,70,156,189,34,46,
    140,66,204,86,85,76,194,180,184,74,82,254,249,164,16,247,
    104,204,65,252,115,224,226,162,197,100,200,250,137,199,145,251,
    122,95,182,35,25,237,224,237,107,63,232,183,119,67,119,143,
    173,109,230,106,124,85,168,161,216,93,163,149,59,123,76,99,
    210,246,146,24,51,230,161,167,146,180,237,75,188,147,72,191,
    253,227,54,167,219,118,144,181,221,29,124,234,122,74,99,244,
    124,64,113,219,231,166,123,25,119,120,7,199,68,94,131,183,
    28,188,89,6,216,213,30,65,89,199,244,157,167,204,158,220,
    175,106,200,99,201,193,219,134,26,232,36,66,85,220,222,160,
    225,135,112,61,73,246,163,220,55,25,153,160,46,86,140,134,
    161,90,231,226,233,21,237,202,46,70,213,203,239,19,85,250,
    61,72,30,91,245,226,5,202,4,72,190,144,208,59,142,122,
    254,142,3,3,110,226,255,13,56,134,241,53,0,248,116,172,
    113,102,63,189,102,41,237,95,64,94,29,175,138,49,81,85,
    97,70,199,88,79,20,13,116,85,126,190,105,47,95,2,8,
    199,75,165,171,164,182,251,234,216,53,226,144,212,71,252,113,
    24,55,23,251,191,23,165,240,103,220,0,12,22,216,29,250,
    146,192,238,16,111,226,59,216,8,90,220,8,62,163,70,240,
    132,53,117,12,221,11,14,17,85,43,21,94,192,33,150,199,
    206,168,210,186,217,35,209,220,126,95,198,190,253,24,170,253,
    27,63,30,179,103,41,5,156,65,165,24,155,98,1,27,182,
    139,113,66,201,172,162,12,251,165,86,70,198,248,61,196,152,
    251,91,129,185,14,53,199,195,140,102,63,163,129,19,73,153,
    190,108,58,84,167,180,18,85,190,12,165,146,23,236,204,41,
    40,191,130,249,18,51,120,50,192,222,153,59,84,252,29,58,
    206,117,164,194,95,234,80,214,125,62,166,66,81,55,26,102,
    163,222,16,92,49,70,222,12,234,179,233,146,174,251,176,65,
    102,115,232,205,150,234,241,11,172,34,155,147,57,248,38,176,
    229,70,250,133,4,95,193,237,135,144,95,172,236,15,74,91,
    209,229,146,155,95,125,117,64,28,114,53,227,226,101,255,140,
    230,169,17,140,158,108,20,218,108,104,109,62,113,51,217,149,
    234,69,150,37,30,191,69,139,158,168,59,87,174,124,237,98,
    221,91,187,244,241,167,97,226,29,72,95,191,228,81,119,175,
    94,243,155,36,114,113,126,229,210,21,221,32,202,57,204,141,
    60,247,83,218,181,56,50,155,201,52,112,195,224,59,169,110,
    143,60,145,241,97,228,188,58,78,187,216,13,74,181,122,233,
    105,175,146,99,153,190,76,16,28,234,193,200,130,225,35,102,
    224,28,73,106,22,212,253,255,193,71,159,118,133,110,135,59,
    221,65,166,100,116,133,5,49,239,166,145,27,230,246,33,36,
    20,11,248,245,226,37,254,34,204,85,39,184,48,143,36,94,
    142,135,84,238,5,120,114,202,140,170,59,242,12,69,40,102,
    159,93,72,216,213,221,215,16,63,186,51,213,55,219,231,244,
    110,132,35,130,222,92,53,102,27,24,75,148,185,76,188,104,
    206,8,203,156,110,53,172,233,169,134,213,152,48,249,197,196,
    12,94,47,154,86,99,106,90,92,245,111,13,227,176,105,172,
    33,167,255,2,193,109,131,79,
};

EmbeddedPython embedded_m5_internal_param_RandomRepl(
    "m5/internal/param_RandomRepl.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_RandomRepl.py",
    "m5.internal.param_RandomRepl",
    data_m5_internal_param_RandomRepl,
    2280,
    6583);

} // anonymous namespace
