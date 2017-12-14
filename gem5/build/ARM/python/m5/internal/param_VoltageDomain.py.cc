#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_VoltageDomain[] = {
    120,156,181,88,235,114,219,198,21,62,11,128,148,72,73,22,
    101,221,108,73,142,208,118,156,48,158,86,108,211,184,238,76,
    84,55,78,155,206,52,51,85,82,48,137,29,37,83,20,2,
    86,36,40,18,224,0,43,201,76,169,63,145,167,237,11,244,
    17,250,163,111,211,55,106,207,57,11,128,208,109,154,153,146,
    50,177,94,44,118,207,158,203,119,46,187,62,100,127,21,124,
    62,180,1,210,68,0,4,248,19,208,7,24,8,56,20,32,
    164,128,96,13,78,42,144,188,15,65,5,222,0,28,26,32,
    13,184,196,142,9,95,27,16,45,242,154,42,244,77,30,17,
    48,170,131,180,224,176,2,47,163,21,176,100,21,78,234,144,
    252,25,132,16,145,128,87,193,28,4,243,240,6,169,99,167,
    198,4,231,129,6,235,60,88,131,96,129,7,235,16,44,114,
    103,1,70,13,144,139,112,184,68,211,14,239,33,217,39,72,
    118,153,201,254,155,200,6,248,101,29,130,123,52,29,249,250,
    138,102,90,52,147,247,91,102,42,141,156,203,21,56,188,159,
    247,87,75,253,181,82,127,157,251,184,235,125,232,109,64,111,
    19,122,15,224,24,21,177,82,236,240,16,164,9,189,45,56,
    220,2,137,191,135,112,137,186,10,238,151,86,108,243,138,213,
    98,197,14,175,120,4,135,143,64,226,111,71,175,168,66,187,
    185,129,250,15,255,131,127,77,212,63,168,69,108,206,100,146,
    134,113,228,134,209,113,28,26,244,189,74,13,89,203,167,102,
    46,51,219,111,200,108,255,2,182,89,96,100,102,187,0,36,
    44,72,150,190,1,23,220,185,48,96,212,132,177,128,158,5,
    129,9,99,220,166,66,12,116,4,92,26,240,141,73,19,46,
    176,181,80,185,111,129,165,180,205,122,172,92,77,105,14,46,
    42,48,174,64,251,213,216,160,129,147,26,36,255,132,111,119,
    152,232,60,19,53,96,140,173,5,151,22,92,84,225,37,78,
    194,161,94,141,196,23,175,198,40,41,142,180,155,22,114,123,
    80,18,151,68,9,194,36,242,6,82,173,97,223,29,122,137,
    55,112,191,140,251,202,235,200,223,198,3,47,140,154,245,124,
    102,156,238,13,61,213,117,120,169,73,58,25,12,21,147,140,
    35,169,22,176,115,28,70,129,59,136,131,211,190,84,243,68,
    207,61,14,251,210,117,249,227,239,7,195,56,81,31,39,73,
    156,56,164,86,30,236,199,94,177,130,148,234,247,227,84,54,
    105,55,222,198,33,242,138,102,31,15,153,34,49,192,236,210,
    226,64,166,126,18,14,21,90,75,83,164,217,68,173,73,118,
    226,38,253,8,155,86,55,30,200,150,244,189,86,71,14,158,
    182,142,78,195,126,208,122,225,252,161,53,28,169,110,28,181,
    112,44,140,148,68,61,244,91,183,104,96,15,167,221,39,90,
    231,97,199,13,89,10,183,43,251,67,153,44,209,232,22,237,
    35,26,98,81,84,133,41,154,98,9,123,21,124,76,177,99,
    44,136,131,144,228,240,73,54,130,145,85,6,14,89,83,192,
    137,1,201,14,193,162,135,63,65,118,68,112,180,233,155,193,
    223,254,72,10,208,163,61,147,140,173,7,199,12,37,196,20,
    206,220,39,235,70,192,120,168,64,175,10,26,39,8,47,13,
    156,100,68,45,78,39,50,6,18,183,32,253,7,160,66,17,
    33,99,200,208,115,105,130,136,26,160,234,228,192,56,186,129,
    27,126,199,0,108,55,137,253,3,6,129,234,134,105,124,30,
    177,170,169,207,46,211,70,205,124,54,250,244,168,39,125,149,
    238,226,192,87,241,169,237,123,81,20,43,219,11,2,219,83,
    42,9,143,78,149,76,109,21,219,143,211,38,89,207,89,201,
    113,84,208,27,13,115,220,144,141,17,55,250,37,8,125,133,
    47,171,252,194,86,72,165,66,12,116,227,32,197,113,34,209,
    145,202,33,38,21,41,57,102,70,24,34,46,77,165,237,113,
    222,61,124,127,145,115,194,56,108,86,115,212,164,178,127,172,
    234,12,64,47,77,93,230,132,198,25,107,68,248,204,235,159,
    74,166,158,34,61,100,136,186,154,135,233,163,237,1,113,158,
    11,202,220,71,113,20,140,144,153,208,127,135,246,121,192,152,
    91,100,212,173,35,226,230,176,173,226,255,85,177,97,248,86,
    134,179,106,142,53,10,114,10,216,210,34,51,54,226,238,18,
    3,74,211,224,136,192,2,176,191,253,144,122,180,216,217,161,
    230,17,53,111,81,179,155,203,56,85,65,151,174,11,250,140,
    136,27,44,29,203,65,170,55,115,57,130,43,62,243,112,226,
    51,24,229,218,132,125,131,60,100,130,125,139,34,98,242,156,
    90,156,202,94,101,66,250,57,197,95,242,17,38,70,238,128,
    192,166,222,4,238,172,21,167,65,210,206,231,72,117,8,126,
    101,12,118,74,24,116,200,32,12,64,231,97,30,218,92,154,
    161,161,231,108,19,169,202,45,106,181,169,249,193,76,116,59,
    1,81,231,6,136,62,160,125,26,25,136,150,24,60,117,124,
    26,134,111,102,10,47,50,220,234,53,240,16,114,172,91,144,
    243,54,245,204,155,34,206,18,52,153,96,191,43,129,134,120,
    49,202,252,31,96,103,180,73,108,151,225,178,137,185,249,101,
    180,137,233,214,224,116,251,83,78,183,156,178,185,112,209,193,
    213,228,248,170,59,21,146,255,216,132,141,44,141,166,53,108,
    135,73,252,122,100,199,199,182,98,1,41,22,238,63,78,247,
    30,167,31,96,148,179,159,115,124,209,113,78,71,178,68,14,
    41,18,209,210,143,95,251,146,83,23,191,185,174,14,60,46,
    7,33,55,75,137,136,156,117,210,158,145,171,149,67,112,170,
    18,138,188,211,87,108,189,80,44,241,249,9,81,174,179,86,
    77,177,137,40,169,11,222,222,213,225,149,107,33,254,138,207,
    71,164,105,18,81,2,85,174,78,91,51,199,124,147,4,206,
    143,175,32,97,154,92,59,45,36,243,69,142,128,234,4,1,
    244,152,57,130,255,6,92,18,10,248,43,144,141,209,148,25,
    130,11,192,147,81,87,105,250,159,128,161,126,75,102,230,24,
    209,166,108,204,51,48,116,164,207,120,170,78,212,159,192,223,
    75,126,146,167,83,51,43,250,202,233,212,42,226,11,131,227,
    123,165,76,235,106,32,34,75,116,189,148,166,233,232,50,113,
    189,73,188,46,42,53,140,174,83,69,202,188,166,233,210,246,
    223,76,112,66,9,105,91,172,26,37,235,255,140,154,247,10,
    195,139,124,108,90,156,236,194,221,169,210,213,241,249,107,218,
    206,98,6,151,231,56,122,92,161,82,0,185,146,3,249,189,
    2,200,146,115,201,27,174,241,169,53,200,152,151,134,192,195,
    22,22,73,116,182,177,64,86,224,176,74,144,231,250,85,100,
    30,33,242,248,67,251,93,73,84,172,131,3,173,157,194,158,
    218,84,212,188,158,190,95,147,181,246,251,222,224,40,240,158,
    159,16,93,34,238,231,62,98,228,156,54,202,156,18,190,197,
    93,204,242,235,211,156,227,179,233,251,244,47,144,76,193,41,
    35,56,136,125,118,228,207,187,210,30,200,193,17,30,210,186,
    225,208,62,238,123,29,214,185,153,73,242,105,46,137,98,163,
    93,79,234,233,19,106,99,219,143,35,12,163,167,190,138,19,
    59,144,120,110,145,129,253,19,155,99,176,29,166,182,119,132,
    95,61,95,105,188,94,245,47,174,11,189,164,147,114,9,120,
    114,78,221,217,216,204,197,51,104,136,149,239,0,138,252,166,
    143,70,69,72,229,154,86,195,31,83,17,158,72,212,72,135,
    21,74,240,206,30,53,239,194,204,34,239,251,192,104,129,148,
    20,81,21,219,70,205,224,2,233,202,196,207,104,109,122,211,
    201,142,190,143,147,233,187,140,204,213,170,52,83,206,209,145,
    151,218,26,5,96,186,170,168,100,87,21,52,168,175,42,170,
    60,114,143,156,114,238,255,117,74,198,249,108,16,174,166,234,
    139,206,179,217,51,234,252,18,178,132,122,151,31,138,178,20,
    75,122,109,79,228,245,119,89,4,62,177,111,221,14,23,215,
    79,164,167,164,54,192,206,44,228,98,231,213,187,156,79,220,
    235,102,249,248,162,16,225,146,43,135,209,26,219,69,159,52,
    216,46,226,101,180,133,117,164,197,117,228,62,213,145,99,150,
    215,53,116,41,57,65,87,165,16,123,19,155,72,158,187,183,
    136,174,203,69,226,206,27,14,101,20,56,79,160,92,1,242,
    231,233,91,153,226,197,95,160,148,200,77,177,134,37,223,77,
    207,161,224,87,18,137,13,84,41,124,101,38,166,98,8,126,
    151,67,176,185,12,229,8,232,236,83,195,49,175,8,119,206,
    175,11,69,239,222,129,175,51,61,70,39,136,255,57,7,11,
    11,46,183,178,119,214,21,3,55,144,125,169,228,109,70,84,
    196,80,118,78,12,36,230,146,120,132,165,61,87,207,248,222,
    119,221,25,69,228,95,101,90,74,41,47,96,68,22,85,140,
    201,235,70,173,90,19,156,192,174,221,103,106,6,168,94,212,
    85,226,40,117,216,203,151,11,253,241,157,91,158,89,72,213,
    124,90,57,240,6,250,2,133,239,11,156,31,65,118,254,115,
    222,41,236,64,199,96,46,205,245,241,6,193,206,201,149,115,
    169,243,243,92,131,131,167,123,185,72,123,153,48,238,153,164,
    172,204,151,126,131,167,106,251,218,44,45,120,59,28,232,219,
    38,181,114,237,123,144,160,42,212,250,181,209,84,38,161,215,
    15,191,213,215,75,249,176,34,57,175,19,36,118,139,55,78,
    113,55,131,20,27,54,145,157,48,69,66,76,165,88,145,57,
    49,25,66,217,119,0,171,188,122,54,64,208,37,159,62,68,
    62,167,203,136,244,67,108,232,182,168,182,92,67,80,144,127,
    155,120,160,91,18,150,185,216,168,89,139,11,53,171,54,103,
    242,53,192,18,22,240,117,171,182,176,40,244,191,93,4,79,
    221,216,109,212,196,127,1,140,231,69,74,
};

EmbeddedPython embedded_m5_internal_param_VoltageDomain(
    "m5/internal/param_VoltageDomain.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_VoltageDomain.py",
    "m5.internal.param_VoltageDomain",
    data_m5_internal_param_VoltageDomain,
    2187,
    6326);

} // anonymous namespace
