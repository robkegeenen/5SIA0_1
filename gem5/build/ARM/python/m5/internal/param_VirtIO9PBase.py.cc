#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_VirtIO9PBase[] = {
    120,156,181,88,91,115,219,198,21,62,11,128,148,72,221,40,
    203,242,77,178,5,39,117,76,171,182,212,186,113,221,78,92,
    79,157,75,103,146,25,203,42,152,214,14,147,41,2,17,43,
    9,20,9,176,192,74,50,93,233,165,242,244,242,214,151,252,
    132,62,244,223,244,31,181,231,156,5,64,136,164,18,207,68,
    146,201,245,225,98,247,236,185,124,231,178,104,65,250,87,194,
    239,111,109,128,228,161,1,224,227,71,64,7,160,43,160,41,
    64,72,1,254,101,216,43,65,252,33,248,37,120,11,208,52,
    64,26,112,130,132,9,95,27,16,78,243,158,50,116,76,158,
    17,208,175,130,180,160,89,130,151,225,60,88,178,12,123,85,
    136,191,5,33,68,40,224,149,63,1,254,36,188,69,238,72,
    84,152,225,36,208,100,149,39,43,224,79,241,100,21,252,105,
    38,166,160,95,3,57,13,205,25,90,214,156,69,182,171,200,
    118,142,217,254,151,216,250,248,100,17,252,89,90,142,114,125,
    69,43,45,90,201,231,205,49,151,90,38,229,60,52,47,101,
    244,66,129,190,92,160,23,11,244,149,2,125,181,64,95,43,
    208,215,11,244,141,2,189,84,160,151,11,244,205,2,125,171,
    64,175,20,104,187,64,223,46,208,239,21,232,247,11,244,79,
    10,244,29,166,209,106,151,160,253,1,180,239,66,187,14,219,
    232,200,249,220,66,247,64,154,208,94,133,230,42,72,252,220,
    131,19,244,181,127,169,176,227,167,188,99,33,223,113,159,119,
    60,128,230,3,144,248,185,175,119,148,161,81,191,130,248,9,
    254,135,127,117,129,148,154,198,225,64,198,73,16,133,110,16,
    110,71,129,65,207,203,52,16,218,90,52,76,164,176,251,132,
    96,247,31,96,204,249,70,10,187,99,64,198,130,116,233,24,
    112,204,196,177,1,253,58,28,9,104,91,224,155,112,132,199,
    148,72,128,29,1,39,6,124,99,210,130,99,28,45,4,199,
    45,176,148,198,92,155,193,161,57,77,192,113,9,142,74,208,
    120,117,100,208,196,94,5,226,127,195,155,101,102,58,201,76,
    13,56,194,209,130,19,11,142,203,240,18,23,225,84,187,66,
    234,139,87,71,168,41,206,52,234,22,74,187,81,80,151,84,
    241,131,56,244,186,82,45,32,237,246,188,216,235,186,127,12,
    98,245,249,139,95,111,126,236,37,178,94,205,22,70,201,90,
    207,83,187,14,239,52,201,36,221,158,98,142,81,40,213,20,
    18,219,65,232,187,221,200,223,239,72,53,73,236,220,237,160,
    35,93,151,31,126,222,237,69,177,250,44,142,163,216,33,171,
    242,100,39,242,242,29,100,211,86,39,194,35,233,52,62,198,
    33,246,138,86,111,247,152,35,9,192,210,210,102,95,38,173,
    56,232,41,116,150,230,72,171,137,91,157,220,196,67,242,12,
    135,245,221,168,43,215,101,203,91,223,145,221,71,235,91,251,
    65,199,95,127,230,60,95,239,245,213,110,20,174,227,92,16,
    42,137,102,232,172,143,26,96,13,87,93,34,86,135,193,142,
    27,176,18,238,174,236,244,100,60,67,179,55,232,24,81,19,
    211,162,44,76,81,23,51,72,149,240,107,138,101,99,74,108,
    4,164,70,139,84,35,16,89,69,216,144,47,5,236,25,16,
    47,19,40,218,248,17,228,69,132,70,131,158,25,252,236,247,
    164,191,158,109,155,228,106,61,121,196,64,66,68,225,202,39,
    228,219,16,24,13,37,104,151,65,163,4,193,165,97,19,247,
    105,196,229,196,198,64,230,22,36,223,1,218,19,241,113,4,
    41,118,78,76,16,97,13,84,149,210,15,206,94,193,3,255,
    202,240,107,212,73,252,13,198,128,218,13,146,232,48,100,75,
    19,205,1,211,64,203,108,246,95,108,181,101,75,37,43,56,
    241,85,180,111,183,188,48,140,148,237,249,190,237,41,21,7,
    91,251,74,38,182,138,236,59,73,157,156,231,204,103,48,202,
    249,245,123,25,108,200,197,8,27,253,195,15,90,10,127,48,
    62,93,246,66,34,21,66,96,55,242,19,156,39,22,59,82,
    57,36,164,34,35,71,44,8,35,196,165,165,116,60,174,155,
    197,223,207,50,73,24,134,245,114,6,154,68,118,182,85,149,
    241,231,37,137,203,146,208,60,67,141,24,31,120,157,125,201,
    220,19,228,135,2,17,169,101,56,119,176,93,35,193,51,61,
    89,248,48,10,253,62,202,18,180,238,210,49,215,24,114,211,
    12,186,69,4,220,4,142,101,252,191,44,174,24,45,43,133,
    89,57,131,26,101,56,5,236,104,145,250,26,97,119,130,217,
    164,110,112,58,96,249,57,218,222,35,138,54,59,203,52,220,
    164,225,22,13,43,153,138,231,169,231,204,176,158,143,137,183,
    193,202,177,26,100,120,51,83,195,63,21,49,215,7,17,131,
    25,174,65,200,55,40,62,6,200,183,40,27,198,79,105,196,
    165,28,83,38,36,95,82,238,165,8,97,102,20,12,8,107,
    162,6,96,103,163,56,53,82,118,50,195,169,67,224,43,34,
    112,167,128,64,135,252,193,240,115,174,103,121,205,165,21,26,
    120,206,18,177,42,141,177,170,77,195,237,139,48,237,0,66,
    59,35,16,250,136,142,169,165,16,154,97,232,84,241,91,51,
    90,102,106,239,188,184,45,12,65,135,112,99,141,193,205,7,
    68,153,163,26,94,32,100,82,189,126,87,128,12,137,98,20,
    197,223,64,162,127,149,164,46,130,229,42,86,229,151,225,85,
    44,180,6,23,218,159,113,161,229,98,205,45,151,78,172,38,
    231,86,77,148,72,253,109,19,174,164,5,52,169,224,216,139,
    163,215,125,59,218,182,21,235,71,121,240,201,157,100,237,78,
    242,17,102,56,251,41,231,22,157,227,116,22,139,101,143,178,
    16,109,253,236,117,75,114,213,226,95,174,171,147,142,203,9,
    200,77,171,33,226,102,145,140,103,100,86,229,244,155,168,152,
    178,238,185,219,181,154,219,149,196,252,130,24,87,217,168,166,
    184,138,24,169,10,62,221,213,153,149,155,32,126,138,223,143,
    201,208,164,161,4,106,185,157,134,150,141,197,38,5,156,251,
    167,112,112,142,66,59,235,200,229,15,153,255,203,3,255,211,
    215,204,224,251,119,224,86,80,192,223,128,60,140,142,76,225,
    155,163,157,92,186,64,203,255,4,140,243,49,53,153,243,67,
    131,234,48,175,192,180,145,60,230,165,186,68,127,1,255,40,
    4,73,86,72,205,180,217,43,22,82,43,207,45,12,141,119,
    42,150,214,233,36,68,142,216,245,18,90,166,51,203,32,238,
    6,169,58,111,209,48,179,158,39,78,38,53,75,151,78,255,
    102,128,18,42,69,75,98,193,40,248,254,231,52,60,204,221,
    46,178,185,115,18,100,5,206,174,145,174,206,204,95,211,105,
    22,203,55,55,193,125,74,145,73,14,226,82,6,226,135,57,
    136,37,23,145,183,220,216,211,104,144,39,79,12,129,55,68,
    236,141,232,66,102,129,44,65,179,76,112,231,174,85,164,209,
    32,178,212,67,137,234,84,133,98,11,108,104,219,228,206,212,
    126,162,225,245,185,135,52,185,234,73,199,235,110,249,222,211,
    191,16,91,226,221,202,226,195,200,4,173,21,5,37,108,139,
    179,100,229,159,143,50,129,15,206,61,156,127,137,92,114,65,
    25,188,126,212,226,24,254,114,87,218,93,217,221,194,123,217,
    110,208,179,183,59,222,14,91,220,76,21,121,145,41,162,216,
    101,195,181,60,89,165,49,178,91,81,136,249,115,191,165,162,
    216,246,37,222,85,164,111,63,176,57,249,218,65,98,123,91,
    248,212,107,41,141,213,211,161,197,205,160,23,239,36,220,247,
    237,29,18,121,33,30,115,241,214,25,96,183,123,12,121,93,
    211,183,161,60,151,114,31,171,161,143,37,8,111,33,170,175,
    19,10,213,117,103,141,134,123,112,81,41,247,67,228,242,134,
    216,145,25,202,98,201,168,24,124,55,42,174,219,164,157,201,
    104,124,133,239,18,95,250,221,11,46,144,101,104,79,240,56,
    73,249,182,89,201,38,171,60,78,241,228,116,22,143,51,60,
    57,11,205,185,236,61,79,141,98,179,252,99,99,147,241,126,
    33,72,127,123,174,33,233,60,190,112,57,157,95,65,90,82,
    207,10,199,83,189,215,51,29,142,218,194,88,120,251,151,89,
    39,221,164,179,78,226,101,120,3,155,48,139,155,176,39,212,
    132,29,113,163,230,26,186,15,27,56,134,123,103,190,224,211,
    93,38,148,135,238,40,222,116,171,69,14,247,122,61,25,250,
    206,42,20,187,39,126,124,238,6,162,144,251,39,20,202,160,
    41,46,99,187,52,10,57,74,31,5,133,24,90,165,28,100,
    203,23,229,188,127,101,206,171,207,159,202,33,206,19,26,106,
    167,18,134,54,176,61,54,152,221,63,239,203,125,217,8,222,
    72,234,187,127,120,17,214,100,110,109,243,25,117,99,252,22,
    229,113,39,255,125,143,137,23,229,97,164,217,222,138,238,88,
    190,236,72,37,199,192,64,145,82,233,29,205,151,152,208,163,
    62,54,214,220,188,226,239,142,235,94,76,94,252,13,240,139,
    70,72,102,117,94,196,251,212,162,88,52,42,229,138,224,34,
    50,244,26,81,159,79,166,215,77,90,63,113,56,196,230,114,
    63,240,187,174,44,189,147,183,216,158,27,94,87,191,185,224,
    155,186,243,62,164,119,47,231,110,238,74,178,14,119,198,250,
    110,129,193,194,5,142,235,153,243,11,154,167,173,221,71,107,
    153,70,107,69,141,62,149,7,65,75,146,86,252,210,173,251,
    136,111,146,163,171,27,253,68,201,174,90,26,122,40,195,253,
    174,251,92,118,163,184,255,60,242,165,90,30,122,254,204,247,
    99,199,11,119,164,123,32,169,12,171,219,195,11,210,26,172,
    121,100,171,236,177,50,156,94,59,34,139,94,132,15,245,123,
    41,238,24,71,159,127,210,137,90,123,210,79,215,220,60,123,
    205,167,81,215,195,249,241,167,52,130,236,148,249,161,231,126,
    76,187,22,135,102,19,25,7,94,135,226,226,250,56,11,110,
    30,198,13,108,106,71,237,167,79,219,140,14,101,76,246,237,
    140,248,114,240,136,25,156,101,230,97,62,250,180,51,116,219,
    223,74,189,61,222,130,88,13,226,174,215,73,237,51,44,113,
    110,153,76,148,91,223,199,68,43,69,216,207,158,115,198,63,
    3,161,181,60,105,12,38,185,67,97,171,22,67,148,243,65,
    44,119,2,212,35,102,150,195,251,210,34,66,113,204,122,142,
    73,70,69,30,23,146,69,116,203,174,175,255,79,233,37,82,
    242,45,14,244,146,175,50,87,17,101,131,202,139,137,119,241,
    25,97,153,211,181,138,53,61,85,177,42,19,38,191,191,153,
    193,219,87,213,170,76,77,139,119,251,183,130,153,169,106,172,
    204,86,196,255,1,36,180,255,88,
};

EmbeddedPython embedded_m5_internal_param_VirtIO9PBase(
    "m5/internal/param_VirtIO9PBase.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_VirtIO9PBase.py",
    "m5.internal.param_VirtIO9PBase",
    data_m5_internal_param_VirtIO9PBase,
    2377,
    6986);

} // anonymous namespace
