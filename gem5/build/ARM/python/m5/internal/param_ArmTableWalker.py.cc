#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ArmTableWalker[] = {
    120,156,189,88,221,119,211,200,21,191,35,201,78,236,36,36,
    33,95,124,4,98,216,2,134,101,147,150,93,74,207,89,74,
    155,210,237,57,187,167,4,42,211,3,235,221,83,85,145,38,
    142,28,91,114,165,9,193,156,228,101,195,217,246,165,111,237,
    31,208,135,62,244,191,233,127,212,222,123,71,146,149,196,230,
    208,22,151,216,195,245,104,230,206,253,248,221,143,145,7,233,
    191,18,126,127,94,3,72,110,26,0,62,126,4,116,0,186,
    2,154,2,132,20,224,47,194,94,9,226,207,192,47,193,91,
    128,166,1,210,128,99,36,76,248,198,128,112,154,247,148,161,
    99,242,140,128,126,21,164,5,205,18,188,8,231,193,146,101,
    216,171,66,252,123,16,66,132,2,94,250,19,224,79,194,91,
    228,142,68,133,25,78,2,77,86,121,178,2,254,20,79,86,
    193,159,102,98,10,250,115,32,167,161,57,67,203,154,231,144,
    237,29,100,59,203,108,255,73,108,125,124,178,4,254,57,90,
    142,114,125,77,43,45,90,201,231,205,50,151,185,76,202,121,
    104,158,207,232,133,2,189,88,160,151,10,244,114,129,94,41,
    208,23,10,244,197,2,125,169,64,95,46,208,171,5,250,74,
    129,190,90,160,215,10,116,173,64,95,43,208,215,11,244,71,
    5,250,7,76,163,165,206,67,251,6,180,111,66,251,22,236,
    160,243,230,115,171,212,65,154,208,190,13,205,219,32,241,83,
    135,99,244,175,127,190,176,227,14,239,88,200,119,124,204,59,
    238,66,243,46,72,252,124,172,119,148,161,81,95,70,204,4,
    255,194,127,117,129,148,154,198,225,149,140,147,32,10,157,32,
    220,137,2,131,158,151,105,32,132,121,52,76,164,80,123,76,
    80,251,7,48,206,124,35,133,218,17,32,99,65,186,116,12,
    56,98,226,200,128,126,29,14,5,180,45,240,77,56,196,99,
    74,36,64,75,192,177,1,223,154,180,224,8,71,11,1,113,
    21,44,165,113,214,102,64,104,78,19,112,84,130,195,18,52,
    94,30,26,52,177,87,129,248,239,240,102,149,153,78,50,83,
    3,14,113,180,224,216,130,163,50,188,192,69,56,213,174,144,
    250,226,229,33,106,138,51,141,186,133,210,110,21,212,37,85,
    252,32,14,221,174,84,75,72,59,61,55,118,187,206,102,220,
    125,238,110,119,228,11,183,179,39,227,122,53,91,26,37,235,
    61,87,237,218,188,215,36,163,116,123,138,121,70,161,84,83,
    72,236,4,161,239,116,35,127,191,35,213,36,49,116,118,130,
    142,116,28,126,248,101,183,23,197,234,139,56,142,98,155,236,
    202,147,157,200,205,119,144,85,189,78,148,200,58,157,198,199,
    216,196,94,209,234,157,30,115,36,1,88,94,218,236,203,196,
    139,131,158,66,119,105,142,180,154,184,213,201,81,60,36,143,
    113,216,216,141,186,114,67,122,238,70,75,118,239,111,108,239,
    7,29,127,99,211,126,178,209,235,171,221,40,220,192,185,32,
    84,18,13,209,217,24,102,130,117,92,119,158,152,29,4,45,
    39,96,53,156,93,217,233,201,120,134,102,47,209,65,98,78,
    76,139,178,48,69,93,204,32,85,194,175,41,86,141,41,177,
    21,144,34,30,41,71,64,178,138,208,33,127,10,216,51,32,
    94,37,96,180,241,35,200,147,8,143,6,61,51,248,217,111,
    200,2,122,182,109,146,187,245,228,33,131,9,81,133,43,31,
    146,127,67,96,68,148,160,93,6,141,20,4,152,134,78,220,
    167,17,151,19,27,3,153,91,144,252,21,208,162,136,145,67,
    72,241,115,108,130,8,231,64,85,41,237,224,236,50,30,248,
    29,67,176,81,39,241,183,24,5,106,55,72,162,131,144,109,
    77,52,7,77,3,45,243,172,255,116,187,45,61,149,172,225,
    196,215,209,126,205,115,195,48,82,53,215,247,107,174,82,113,
    176,189,175,100,82,83,81,237,70,82,39,247,217,243,25,144,
    114,126,253,94,6,28,114,50,2,71,255,240,3,79,225,143,
    5,254,193,94,72,164,66,16,236,70,126,130,243,196,162,37,
    149,77,66,42,50,114,196,130,48,70,28,90,74,199,227,186,
    115,248,123,51,147,132,129,88,47,103,176,73,100,103,71,85,
    25,129,110,146,56,44,9,205,51,216,136,241,43,183,179,47,
    153,123,130,252,80,32,34,181,12,99,128,219,5,18,61,211,
    148,197,15,163,208,239,163,52,129,119,139,14,186,192,160,155,
    102,216,45,33,228,38,112,44,227,255,101,177,108,120,86,10,
    180,114,6,54,202,115,10,216,213,34,245,54,2,239,24,115,
    74,221,224,164,192,26,112,196,93,39,138,54,219,171,52,92,
    161,225,42,13,107,153,146,31,86,211,153,211,154,62,32,238,
    6,171,199,138,144,241,205,76,17,255,68,212,92,28,68,13,
    102,186,6,161,223,160,24,25,160,223,162,172,24,63,162,17,
    151,114,92,153,144,60,167,28,76,81,194,204,40,32,16,218,
    68,13,0,207,102,177,231,72,221,201,12,171,54,1,176,136,
    194,86,1,133,54,121,132,33,104,95,204,178,155,67,43,52,
    248,236,203,196,170,52,196,174,53,26,174,141,199,184,3,24,
    181,206,192,232,115,58,104,46,133,209,12,195,167,138,223,57,
    195,51,83,139,231,101,110,225,20,124,8,59,214,16,236,220,
    36,202,60,171,227,88,97,147,106,246,171,2,108,72,24,163,
    168,192,22,18,253,21,146,187,8,152,21,172,208,47,194,21,
    44,186,6,23,221,31,114,209,229,194,205,45,151,78,176,38,
    231,88,77,148,200,0,59,38,44,167,197,52,169,224,216,139,
    163,215,253,90,180,83,83,172,33,229,195,135,55,146,245,27,
    201,231,152,233,106,143,56,199,232,92,167,179,89,44,123,148,
    141,104,235,23,175,61,201,245,139,127,57,142,78,62,14,39,
    34,39,173,139,136,29,42,206,108,108,182,43,167,225,68,197,
    148,125,199,96,217,106,110,89,18,244,43,98,93,101,179,154,
    98,5,113,82,21,124,190,163,115,44,183,68,252,20,191,191,
    32,83,147,142,18,168,233,182,27,90,58,22,156,84,176,239,
    158,192,194,7,21,219,222,64,62,191,205,48,80,30,96,128,
    190,102,6,226,63,2,183,134,2,190,7,242,50,58,51,5,
    113,142,121,114,235,2,45,255,29,48,218,135,212,103,206,19,
    13,170,201,188,2,211,71,242,128,151,234,114,253,21,252,169,
    16,42,89,81,53,211,230,175,88,84,173,60,199,48,60,222,
    171,112,90,39,147,17,185,98,215,77,104,153,206,48,131,232,
    27,36,237,188,97,195,12,251,97,177,50,169,153,58,116,254,
    183,3,164,80,89,186,44,22,140,130,255,127,68,195,189,220,
    245,34,155,251,96,162,172,193,232,138,233,232,44,253,13,157,
    103,177,132,179,19,138,178,52,178,249,178,177,233,60,126,250,
    235,167,91,13,167,192,49,199,117,41,195,245,189,28,215,146,
    171,203,91,238,252,105,52,200,181,199,134,192,107,35,54,78,
    116,75,179,64,150,160,89,166,8,224,166,86,164,1,34,178,
    124,68,217,235,68,233,98,131,108,105,83,229,222,213,142,163,
    225,245,24,226,156,124,247,176,227,118,183,125,247,209,27,98,
    76,220,189,44,100,140,76,212,185,162,168,4,119,49,74,90,
    254,121,63,19,249,213,24,98,252,199,200,39,23,149,17,237,
    71,30,7,246,243,93,89,235,202,238,54,94,222,118,131,94,
    109,167,227,182,216,234,102,170,202,211,76,21,197,110,59,93,
    232,147,59,52,70,53,47,10,49,177,238,123,42,138,107,190,
    196,235,140,244,107,159,212,56,43,215,130,164,230,110,227,83,
    215,83,26,190,39,227,141,187,69,55,110,37,220,24,238,29,
    16,57,38,175,57,120,57,13,176,33,62,132,188,228,233,43,
    83,158,100,185,213,213,209,128,213,9,47,42,170,175,243,12,
    21,125,123,157,134,219,48,190,92,252,25,242,233,19,67,50,
    69,89,92,54,42,134,90,212,225,86,88,249,140,118,39,103,
    35,237,111,239,19,105,250,213,76,26,111,101,90,41,39,232,
    54,76,99,133,114,114,179,154,77,78,241,56,205,147,51,217,
    228,57,30,103,121,114,46,155,156,231,241,60,79,46,100,239,
    137,22,121,114,9,154,203,244,130,130,102,86,40,176,39,254,
    215,192,230,80,25,83,144,28,127,208,120,182,31,252,31,36,
    181,127,2,105,145,30,21,203,162,168,198,140,142,229,182,200,
    250,250,162,14,252,50,224,242,8,192,57,94,44,93,37,181,
    15,86,199,162,25,167,0,125,204,247,131,24,61,219,150,110,
    230,74,28,115,63,210,95,100,215,232,59,12,187,70,188,8,
    47,97,127,106,113,127,250,144,250,211,67,214,216,49,116,139,
    58,64,88,41,87,156,154,254,80,30,56,195,148,215,125,40,
    137,231,246,122,50,244,237,59,80,108,45,249,241,24,60,77,
    105,231,207,80,232,15,76,177,136,189,228,217,248,161,36,90,
    80,138,125,84,202,35,102,60,222,98,28,254,37,195,97,157,
    239,113,121,38,181,31,210,192,185,51,79,155,246,207,114,91,
    95,31,5,178,32,113,18,229,182,228,61,186,159,188,207,50,
    236,90,248,18,144,207,168,79,70,109,10,247,187,78,242,135,
    125,55,217,117,48,181,59,94,223,195,91,2,29,243,159,237,
    160,19,41,43,15,123,168,86,71,177,74,250,9,159,245,206,
    5,196,154,27,206,126,162,62,29,181,144,223,163,241,128,101,
    55,196,203,4,189,118,245,162,253,80,241,1,255,205,62,58,
    151,94,199,141,94,194,80,228,220,224,75,84,83,14,141,18,
    69,254,78,239,248,190,196,154,31,245,241,82,198,215,30,252,
    221,113,156,113,21,206,159,34,159,239,136,33,249,5,11,167,
    40,99,233,92,18,252,103,84,202,21,193,253,198,169,215,210,
    90,14,242,189,77,183,53,155,179,233,108,14,81,126,109,154,
    53,1,132,102,134,217,150,219,213,175,192,248,133,143,253,17,
    164,215,119,251,86,14,117,106,144,249,90,165,47,167,152,82,
    184,17,226,190,199,254,52,203,52,221,251,235,153,90,235,90,
    173,6,58,93,118,249,173,109,247,62,155,186,184,70,18,220,
    158,200,110,20,247,159,68,190,6,90,241,249,166,239,199,182,
    27,182,164,243,74,82,31,166,174,157,94,144,54,97,154,71,
    182,170,54,84,148,147,107,207,200,162,23,225,67,253,230,146,
    239,16,103,159,63,238,68,222,158,244,211,53,87,70,175,249,
    101,212,117,113,126,248,41,141,32,59,101,254,212,115,63,166,
    93,75,167,102,19,25,7,110,39,120,35,249,162,114,198,130,
    207,14,226,6,94,115,206,218,79,159,246,44,58,144,49,217,
    183,195,185,167,184,96,240,136,25,140,50,243,105,62,250,180,
    17,186,237,111,167,78,31,110,65,172,232,113,215,237,164,246,
    57,45,113,110,153,76,148,171,239,98,162,149,34,80,103,207,
    21,97,253,180,43,9,178,249,47,110,72,213,77,120,199,133,
    143,131,61,150,173,0,213,136,153,99,190,59,173,156,20,155,
    108,165,225,89,175,176,125,76,217,65,223,216,244,75,161,71,
    244,122,145,223,81,208,11,224,202,108,5,51,5,85,85,83,
    84,177,174,90,230,244,92,197,154,158,170,88,149,9,147,223,
    235,205,224,109,188,106,85,166,166,197,251,252,173,97,166,169,
    26,107,11,21,241,111,32,138,172,134,
};

EmbeddedPython embedded_m5_internal_param_ArmTableWalker(
    "m5/internal/param_ArmTableWalker.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_ArmTableWalker.py",
    "m5.internal.param_ArmTableWalker",
    data_m5_internal_param_ArmTableWalker,
    2506,
    7518);

} // anonymous namespace
