#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_MessageBuffer[] = {
    120,156,181,88,253,114,27,73,17,239,217,93,201,150,108,199,
    223,118,18,155,179,128,10,39,82,96,195,145,16,170,46,4,
    18,234,168,226,170,206,119,172,143,74,206,119,197,178,214,142,
    236,149,165,93,213,238,56,137,82,54,127,224,240,241,2,60,
    2,127,240,2,60,7,111,4,253,235,209,174,228,175,35,117,
    216,150,52,158,237,157,233,233,143,95,247,244,76,139,134,127,
    21,254,253,178,65,148,183,21,81,196,95,69,93,162,158,162,
    93,69,74,43,138,150,232,176,66,217,3,138,42,244,150,104,
    215,33,237,208,41,119,92,250,210,161,100,90,230,84,169,235,
    10,69,209,160,78,218,163,221,10,61,79,230,201,211,85,58,
    172,83,246,7,82,74,37,138,94,68,19,20,77,210,91,230,
    206,157,154,48,156,36,16,235,66,172,81,52,37,196,58,69,
    211,210,153,162,193,28,233,105,218,157,193,176,221,91,204,246,
    62,179,157,21,182,255,6,219,136,223,44,83,116,11,195,89,
    174,47,48,210,195,72,89,111,86,184,204,21,82,206,211,238,
    66,209,95,28,235,47,73,159,87,90,160,206,50,117,86,168,
    179,74,108,144,104,190,228,122,155,180,75,157,59,180,123,135,
    52,127,111,211,41,219,39,90,24,155,113,87,102,44,150,51,
    214,100,198,58,237,174,147,230,239,154,157,81,165,157,230,10,
    219,60,254,15,255,53,217,230,100,166,185,121,169,179,60,78,
    147,32,78,218,105,236,224,125,21,13,60,212,66,51,49,116,
    213,175,224,170,127,146,248,41,114,134,174,58,33,102,172,160,
    75,215,161,19,233,156,56,52,104,210,177,162,142,71,145,75,
    199,188,76,5,2,236,43,58,117,232,43,23,3,78,184,245,
    216,160,239,145,103,172,159,58,98,80,203,105,130,78,42,116,
    92,161,157,23,199,14,8,135,53,202,254,65,111,214,133,233,
    164,48,117,232,152,91,143,78,61,58,169,210,115,30,196,164,
    78,13,234,171,23,199,172,41,83,118,154,30,75,187,61,166,
    46,84,137,226,44,9,123,218,44,113,63,232,135,89,216,11,
    62,209,121,30,238,235,103,71,237,182,206,154,245,98,100,154,
    111,246,67,115,224,203,84,23,54,233,245,141,176,76,19,109,
    166,184,211,142,147,40,232,165,209,81,87,155,73,240,11,218,
    113,87,7,129,188,252,77,175,159,102,230,163,44,75,51,31,
    102,21,98,55,13,203,25,48,106,171,155,230,186,137,213,100,
    25,31,236,13,70,183,251,194,17,2,136,184,152,28,233,188,
    149,197,125,195,222,178,28,49,26,220,154,240,147,52,249,51,
    110,182,14,210,158,222,210,173,112,107,95,247,30,110,237,29,
    197,221,104,235,169,255,201,86,127,96,14,210,100,139,105,113,
    98,52,219,161,187,117,137,5,54,121,216,2,120,189,138,247,
    131,88,180,8,14,116,183,175,179,25,80,239,98,29,53,167,
    166,85,85,185,170,169,102,184,87,225,159,171,214,157,41,181,
    29,67,143,22,116,3,140,188,113,224,192,155,138,14,29,202,
    214,1,139,14,127,21,252,200,224,216,193,59,71,222,253,22,
    6,176,212,142,11,103,91,226,177,64,137,49,197,35,31,195,
    187,9,9,30,42,212,169,146,197,9,195,203,2,39,27,160,
    229,225,96,227,48,115,143,242,191,19,27,148,17,114,76,67,
    244,156,186,164,146,57,50,117,4,45,83,87,120,193,63,9,
    0,119,154,16,127,91,64,96,14,226,60,125,149,136,169,209,
    151,144,217,97,203,124,54,248,116,175,163,91,38,223,96,194,
    23,233,81,163,21,38,73,106,26,97,20,53,66,99,178,120,
    239,200,232,188,97,210,198,189,188,9,239,249,243,5,142,74,
    126,131,126,129,27,248,152,113,99,31,162,184,101,248,97,81,
    30,196,11,185,54,140,129,131,52,202,153,14,22,251,218,248,
    16,210,192,200,169,8,34,16,9,48,20,203,243,184,91,252,
    252,180,144,68,112,216,172,22,168,201,117,183,109,234,2,192,
    48,207,3,145,4,116,193,26,24,191,12,187,71,90,184,231,
    204,143,5,66,215,202,112,253,104,187,13,201,11,69,69,250,
    36,77,162,1,11,19,183,222,199,58,183,5,115,211,130,186,
    101,70,220,4,183,85,254,95,85,43,78,203,27,226,172,90,
    96,13,73,206,144,120,90,13,157,205,184,59,229,132,210,116,
    36,35,136,2,18,111,223,65,15,147,253,117,52,223,66,243,
    30,154,141,66,199,107,85,116,230,188,162,143,192,220,17,237,
    68,15,152,222,45,244,136,206,196,204,157,81,204,112,150,219,
    1,246,29,68,200,8,251,30,50,98,246,4,45,15,149,168,
    114,41,255,28,249,23,49,34,204,16,14,12,108,244,70,112,
    23,171,248,115,208,118,178,64,170,15,248,141,99,112,127,12,
    131,62,28,34,0,244,239,20,169,45,192,8,11,61,127,13,
    172,42,151,152,181,129,230,219,55,98,219,17,136,246,47,128,
    232,67,172,51,55,4,209,140,128,167,206,191,57,167,229,14,
    13,94,238,112,139,231,192,3,228,120,151,32,231,123,232,185,
    23,85,188,73,208,12,21,251,245,24,104,32,139,51,46,255,
    54,119,6,171,16,123,28,46,171,188,55,63,79,86,121,187,
    117,100,187,253,145,108,183,178,101,75,177,98,147,171,43,249,
    213,118,42,208,191,237,210,202,112,27,205,107,220,246,179,244,
    245,160,145,182,27,70,20,68,46,124,124,47,223,188,151,127,
    200,89,174,241,68,242,139,205,115,54,147,101,186,143,76,132,
    169,31,189,110,105,217,186,228,41,8,108,226,9,36,9,5,
    195,45,145,145,179,12,235,57,133,89,37,5,231,38,67,230,
    189,126,195,214,75,195,66,206,143,193,185,46,86,117,213,42,
    163,164,174,100,249,192,166,87,169,133,228,45,255,158,193,210,
    80,81,19,170,85,127,199,10,39,114,67,3,255,7,103,144,
    112,157,82,251,91,204,230,119,5,2,170,35,4,224,231,22,
    8,254,43,73,73,168,232,47,4,31,179,43,135,8,46,1,
    15,167,46,98,248,239,73,160,126,201,206,44,57,98,7,187,
    177,140,224,212,145,63,146,161,118,163,254,152,254,54,22,39,
    197,118,234,14,139,190,241,237,212,43,243,139,128,227,157,182,
    76,239,108,34,130,39,14,194,28,195,108,118,25,133,222,40,
    95,151,149,26,103,215,107,69,202,164,229,25,96,249,175,70,
    56,193,134,180,166,22,157,49,239,255,24,205,7,165,227,85,
    65,187,46,73,54,232,234,173,50,176,249,249,75,44,231,137,
    128,179,19,146,61,206,112,41,129,92,41,128,252,65,9,100,
    45,123,201,91,169,241,209,58,112,230,169,163,248,128,197,69,
    18,206,51,30,233,10,237,86,1,121,169,95,213,48,34,84,
    145,127,176,222,153,141,74,108,176,109,173,83,250,211,186,10,
    205,235,235,143,107,120,235,113,55,236,237,69,225,147,14,248,
    130,121,171,136,17,167,144,116,110,92,82,224,91,93,37,172,
    60,62,44,36,126,121,253,49,253,83,18,57,172,164,130,224,
    40,109,73,32,127,126,160,27,61,221,219,227,67,218,65,220,
    111,180,187,225,190,216,220,29,106,242,105,161,137,17,167,157,
    223,212,243,251,104,211,70,43,77,56,141,30,181,76,154,53,
    34,205,231,22,29,53,126,216,144,28,220,136,243,70,184,199,
    111,195,150,177,120,61,27,95,82,23,134,217,126,46,37,224,
    225,43,116,111,198,103,1,159,65,99,174,124,187,84,238,111,
    246,104,84,166,84,169,105,45,252,121,43,226,19,137,25,216,
    180,130,13,222,223,68,243,125,186,177,204,251,128,236,185,56,
    135,33,170,106,205,169,57,82,32,157,25,248,25,230,230,23,
    131,236,95,239,18,100,246,254,98,24,106,85,140,212,19,56,
    242,162,173,33,1,239,214,11,226,148,180,211,66,156,41,136,
    183,164,157,21,226,92,65,156,151,118,65,136,139,5,113,73,
    218,101,33,174,20,55,44,171,66,188,141,155,134,168,42,148,
    187,8,244,137,255,55,208,37,118,110,38,106,242,107,141,111,
    255,209,205,11,234,255,140,134,155,244,85,177,173,198,181,152,
    177,177,221,81,69,77,63,174,130,220,2,220,189,28,130,65,
    43,211,161,209,214,1,235,55,161,151,36,4,187,202,203,81,
    200,94,44,73,159,150,42,156,74,53,50,88,18,191,216,211,
    139,248,69,61,79,238,114,109,234,73,109,250,24,181,233,177,
    232,27,56,182,60,29,161,171,82,170,189,202,77,162,95,5,
    151,168,110,75,80,72,23,246,251,58,137,252,251,52,94,85,
    202,235,235,247,50,114,208,31,105,172,56,112,213,18,151,145,
    23,35,7,9,117,76,37,113,80,165,140,149,27,113,149,64,
    240,207,5,4,155,200,240,163,172,234,63,70,35,121,180,76,
    161,254,47,74,67,127,247,10,124,237,201,67,144,199,111,52,
    78,38,239,52,142,139,22,57,44,142,209,164,164,185,108,94,
    154,69,58,211,145,240,254,95,99,192,87,238,236,236,179,185,
    119,197,248,44,76,162,180,23,191,9,113,18,17,206,239,54,
    18,252,17,137,103,168,230,193,21,115,229,202,172,23,230,236,
    146,128,119,222,132,143,15,96,210,74,143,18,35,139,126,163,
    137,144,1,224,248,186,65,230,39,95,199,57,239,134,47,245,
    229,18,125,147,121,16,104,173,16,232,242,49,18,20,146,161,
    34,221,213,70,95,22,173,6,200,27,94,50,68,154,11,145,
    116,192,231,66,57,122,241,115,55,8,110,104,59,255,57,252,
    73,195,251,34,222,206,85,149,55,244,101,53,252,56,181,106,
    77,73,21,116,238,82,220,10,130,243,190,61,106,12,114,95,
    210,250,108,25,48,114,113,91,148,39,136,45,57,242,110,135,
    61,123,11,39,151,78,62,162,69,46,17,252,247,203,192,195,
    93,138,156,239,236,25,153,179,155,84,104,82,144,249,240,144,
    152,187,247,112,179,80,109,211,170,182,19,247,236,101,164,92,
    29,247,30,154,249,115,195,162,44,228,254,242,57,106,174,179,
    56,236,34,4,33,113,65,54,80,228,60,95,200,83,62,73,
    33,116,113,219,17,15,102,122,63,6,50,133,75,57,99,152,
    150,97,113,211,184,2,105,227,179,111,198,227,246,96,96,175,
    26,158,32,11,229,79,184,193,157,98,109,182,198,222,71,198,
    118,249,216,63,163,60,119,122,174,230,77,79,213,188,218,132,
    43,151,69,51,124,204,171,123,181,169,105,133,207,6,99,163,
    238,108,44,213,212,127,1,101,166,251,170,
};

EmbeddedPython embedded_m5_internal_param_MessageBuffer(
    "m5/internal/param_MessageBuffer.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_MessageBuffer.py",
    "m5.internal.param_MessageBuffer",
    data_m5_internal_param_MessageBuffer,
    2315,
    6862);

} // anonymous namespace
