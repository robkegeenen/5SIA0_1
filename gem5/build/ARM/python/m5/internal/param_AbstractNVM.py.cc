#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_AbstractNVM[] = {
    120,156,181,88,125,111,219,198,25,127,142,164,100,75,150,99,
    57,142,237,36,246,98,109,67,90,45,232,236,173,107,150,1,
    245,140,102,107,7,172,64,221,142,234,154,212,45,198,210,226,
    217,166,44,145,2,73,39,81,97,255,51,7,219,190,192,62,
    194,254,216,183,217,55,218,158,223,115,36,77,219,9,80,96,
    178,35,94,142,199,187,231,158,151,223,243,114,215,167,252,175,
    198,207,71,29,162,244,64,17,5,252,83,52,36,26,41,218,
    83,164,180,162,224,14,29,215,40,249,128,130,26,189,38,218,
    179,72,91,116,206,29,155,190,177,40,106,201,154,58,13,109,
    25,81,52,105,146,118,104,175,70,207,162,69,114,116,157,142,
    155,148,124,71,74,169,72,209,243,96,134,130,89,122,205,212,
    185,211,16,130,179,132,193,166,12,54,40,152,147,193,38,5,
    45,233,204,209,164,77,186,69,123,243,152,182,119,139,201,62,
    98,178,11,66,246,63,32,27,240,151,101,10,110,97,58,243,
    245,53,102,58,152,41,251,45,8,149,118,193,229,34,237,221,
    46,250,75,149,254,29,233,243,78,183,105,176,76,131,21,26,
    172,18,43,36,88,44,169,222,37,109,211,224,30,237,221,35,
    205,191,187,116,206,250,9,110,87,86,220,151,21,75,229,138,
    53,89,177,78,123,235,164,249,183,102,86,212,169,215,93,97,
    157,135,255,229,191,46,235,156,178,22,55,47,116,146,134,113,
    228,133,209,65,28,90,248,94,71,3,11,245,209,204,228,166,
    250,61,76,245,111,18,59,5,86,110,170,51,98,194,10,178,
    12,45,58,147,206,153,69,147,46,157,42,26,56,20,216,116,
    202,219,212,192,192,161,162,115,139,190,181,49,225,140,91,135,
    21,250,128,156,204,216,105,32,10,53,148,102,232,172,70,167,
    53,234,61,63,181,48,112,220,160,228,95,244,253,186,16,157,
    21,162,22,157,114,235,208,185,67,103,117,122,198,147,120,104,
    208,128,248,234,249,41,75,202,35,189,174,195,220,238,86,196,
    133,40,65,152,68,254,72,103,183,185,239,141,253,196,31,121,
    79,247,211,44,241,251,217,238,87,159,117,155,197,188,56,221,
    28,251,217,145,43,11,109,104,100,52,206,132,96,28,233,108,
    142,59,7,97,20,120,163,56,56,25,234,108,22,212,188,131,
    112,168,61,79,62,254,113,52,142,147,236,147,36,137,19,23,
    74,149,193,97,236,151,43,160,210,254,48,78,117,23,187,201,
    54,46,200,103,152,125,48,22,138,96,64,152,197,226,64,167,
    253,36,28,103,108,43,67,17,179,65,173,11,43,73,147,126,
    196,205,214,81,60,210,91,186,239,111,29,234,209,227,173,253,
    147,112,24,108,61,117,63,219,26,79,178,163,56,218,226,177,
    48,202,52,107,97,184,117,77,254,77,158,4,205,164,47,195,
    67,47,20,25,188,35,61,28,235,100,30,163,247,177,139,106,
    171,150,170,43,91,117,213,60,247,106,252,216,106,221,154,83,
    187,33,164,232,67,50,64,200,169,130,6,150,84,116,108,81,
    178,14,72,12,248,167,96,67,6,70,15,223,44,249,246,39,
    136,111,70,7,54,12,109,6,79,5,70,140,39,158,185,13,
    203,70,36,88,168,209,160,78,6,35,12,45,3,154,100,130,
    150,167,131,140,197,196,29,74,255,73,172,78,70,199,41,229,
    200,57,183,73,69,109,202,154,112,88,30,93,225,13,255,42,
    224,235,117,193,254,174,64,32,59,10,211,248,101,36,138,70,
    95,220,165,199,154,249,98,242,249,254,64,247,179,116,131,7,
    190,142,79,58,125,63,138,226,172,227,7,65,199,207,178,36,
    220,63,201,116,218,201,226,206,195,180,11,219,185,139,5,138,
    74,122,147,113,129,26,88,152,81,99,94,130,176,159,241,203,
    146,188,136,21,82,157,49,2,142,226,32,229,113,144,56,212,
    153,11,38,51,40,57,22,70,4,32,30,166,98,123,158,119,
    139,223,159,22,156,8,10,187,245,2,51,169,30,30,100,77,
    129,159,159,166,158,112,130,113,65,26,8,191,240,135,39,90,
    168,167,76,143,25,66,215,240,48,109,172,221,5,223,133,152,
    194,123,20,71,193,132,89,9,251,239,98,151,187,130,184,150,
    96,110,153,241,54,195,109,157,255,175,171,21,171,239,228,40,
    171,23,72,67,120,203,72,236,172,114,83,51,234,206,57,148,
    116,45,137,5,194,190,248,218,79,208,195,98,119,29,205,143,
    208,60,64,179,81,72,56,69,49,231,175,138,249,4,164,45,
    145,77,164,128,218,237,66,138,224,146,191,220,187,240,23,142,
    110,61,224,222,130,119,92,224,222,65,36,76,118,208,242,84,
    241,40,155,210,47,17,119,225,31,66,12,174,192,160,70,239,
    2,234,162,19,183,13,89,103,11,148,186,128,94,21,127,135,
    21,252,185,48,135,128,207,189,87,4,53,15,51,12,236,220,
    53,144,170,189,65,169,29,52,63,190,1,205,94,0,232,240,
    26,128,62,196,46,237,28,64,243,2,156,38,63,109,171,111,
    231,234,46,243,218,210,21,224,0,53,206,27,80,243,14,122,
    246,117,1,111,14,48,185,88,127,168,0,6,156,88,85,238,
    119,185,51,89,5,211,85,168,172,114,62,126,22,173,114,138,
    181,36,197,254,66,82,172,164,105,41,80,76,80,181,37,174,
    154,78,13,210,31,216,180,146,167,206,180,193,237,56,137,95,
    77,58,241,65,39,19,241,16,3,183,31,166,155,15,211,15,
    57,186,117,118,36,174,152,248,102,34,88,162,199,136,64,88,
    250,201,171,190,150,132,37,111,158,103,2,142,39,193,199,203,
    19,33,163,102,25,186,179,10,165,74,232,101,101,32,226,78,
    91,173,205,82,173,224,242,83,208,109,138,78,109,181,202,8,
    105,42,217,220,51,65,85,170,31,249,202,207,239,160,103,8,
    168,9,245,169,219,51,172,9,215,224,223,125,239,18,10,166,
    199,179,187,197,68,254,92,88,191,126,97,125,60,118,129,221,
    191,147,148,128,138,254,70,176,47,155,49,199,110,9,117,24,
    116,9,211,255,66,2,242,55,100,99,137,13,61,100,96,153,
    193,33,35,125,34,83,77,114,254,148,254,81,241,144,34,133,
    218,121,145,87,77,161,78,25,87,4,24,63,40,77,58,151,
    3,16,236,112,228,167,152,102,162,202,133,211,93,68,233,178,
    54,227,168,58,69,148,204,26,138,30,54,255,246,2,35,72,
    66,107,106,201,170,88,254,151,104,222,47,141,174,138,177,233,
    240,177,65,111,79,142,158,137,201,223,96,51,71,216,91,152,
    145,112,92,161,81,2,184,86,0,248,253,18,192,90,178,199,
    107,169,230,209,90,48,227,185,165,248,40,197,37,17,78,46,
    14,233,26,237,213,1,117,169,85,85,238,9,170,136,58,136,
    81,151,82,147,200,191,107,52,83,90,210,24,9,205,171,105,
    123,51,236,180,61,244,71,251,129,191,51,0,85,144,238,23,
    190,97,21,124,182,171,124,2,215,234,109,172,202,235,227,130,
    223,23,211,246,228,95,147,112,97,248,20,220,6,113,95,220,
    247,203,35,221,25,233,209,62,31,197,142,194,113,231,96,232,
    31,138,190,237,92,142,207,11,57,50,49,216,213,20,158,62,
    66,27,119,250,113,196,27,158,244,179,56,233,4,154,207,39,
    58,232,252,188,35,81,183,19,166,29,63,103,199,224,244,178,
    87,73,5,232,39,135,169,20,123,199,47,209,189,9,123,121,
    124,206,12,185,194,29,82,153,207,204,1,168,12,162,82,187,
    26,216,115,234,225,147,71,54,49,161,4,233,220,221,68,243,
    51,186,161,88,251,1,153,147,111,10,37,212,213,154,213,176,
    178,197,203,78,245,5,214,165,215,93,235,227,31,226,90,230,
    126,34,119,176,58,233,25,156,103,113,247,80,203,239,30,216,
    217,234,255,175,179,9,130,111,2,187,233,84,125,204,125,114,
    211,108,186,191,161,60,61,190,205,191,46,85,81,79,141,127,
    25,253,114,18,157,220,17,145,76,177,45,34,169,103,209,125,
    46,167,28,41,167,182,81,78,157,74,201,229,89,166,162,186,
    48,139,212,192,114,74,7,174,35,253,210,187,6,33,83,51,
    193,218,254,120,172,163,192,125,68,213,50,72,62,79,91,61,
    112,161,23,84,201,104,182,186,195,117,207,117,184,33,26,84,
    196,17,88,213,74,128,173,223,144,229,206,10,203,153,67,115,
    25,18,220,109,52,237,75,254,111,194,129,168,24,103,128,64,
    15,117,166,175,107,57,195,170,252,36,19,104,254,24,79,184,
    0,149,42,143,223,135,158,119,35,113,228,183,76,36,41,244,
    204,113,68,213,173,70,189,161,36,220,94,185,99,51,91,227,
    32,97,42,153,73,234,10,118,23,74,241,228,38,168,136,132,
    208,132,84,211,187,124,90,55,215,75,56,201,186,63,165,252,
    116,226,190,91,170,9,71,52,41,31,77,249,205,40,148,84,
    32,145,223,253,21,198,209,27,61,222,44,132,217,52,194,244,
    194,145,185,223,144,187,168,209,99,9,129,213,105,65,226,115,
    127,249,202,104,170,147,208,31,134,223,155,123,141,98,56,131,
    32,87,233,130,159,242,77,162,174,24,177,162,69,177,88,162,
    15,195,148,201,8,141,114,126,238,62,208,113,246,128,222,16,
    156,47,173,189,9,251,154,202,195,156,95,118,0,213,116,135,
    27,92,81,52,22,26,108,107,248,149,205,167,137,121,229,216,
    173,118,195,105,205,53,156,198,140,45,231,207,121,174,32,155,
    78,99,174,165,240,111,131,81,209,180,54,90,13,245,63,109,
    86,205,251,
};

EmbeddedPython embedded_m5_internal_param_AbstractNVM(
    "m5/internal/param_AbstractNVM.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_AbstractNVM.py",
    "m5.internal.param_AbstractNVM",
    data_m5_internal_param_AbstractNVM,
    2099,
    5911);

} // anonymous namespace
