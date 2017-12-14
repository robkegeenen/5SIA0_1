#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyTester[] = {
    120,156,181,89,95,115,219,198,17,223,3,72,74,164,36,235,
    191,100,91,178,69,219,145,77,59,142,212,166,113,220,105,92,
    167,110,146,206,36,51,86,92,208,29,59,74,166,40,4,156,
    68,80,36,192,2,71,203,244,72,47,81,38,237,115,103,250,
    208,15,208,135,126,155,126,163,118,119,15,0,33,138,114,52,
    14,101,75,231,197,222,222,222,238,237,239,246,246,206,46,36,
    127,138,248,251,187,42,64,124,219,0,240,240,71,64,11,160,
    45,96,91,128,144,2,188,5,216,47,66,244,17,120,69,248,
    1,96,219,0,105,192,49,18,38,124,107,64,48,201,99,74,
    208,50,153,35,160,87,1,89,128,237,34,188,8,102,161,32,
    75,176,95,129,232,47,32,132,8,4,188,244,198,192,27,135,
    31,80,59,18,101,86,56,14,196,172,48,179,12,222,4,51,
    43,224,77,50,49,1,189,25,144,147,176,61,69,98,219,151,
    80,237,61,84,59,205,106,255,75,106,61,236,89,4,239,18,
    137,163,93,223,144,100,129,36,121,190,105,214,50,147,90,57,
    11,219,115,41,61,159,163,23,114,244,98,142,94,202,209,203,
    57,250,114,142,190,146,163,175,230,232,149,28,189,154,163,175,
    229,232,235,57,122,45,71,87,115,244,141,28,125,51,71,223,
    202,209,239,49,141,43,53,7,205,117,104,222,134,230,29,216,
    197,224,205,102,171,82,3,105,66,243,46,108,223,5,137,63,
    53,56,198,248,122,115,185,17,247,120,196,124,54,226,125,30,
    113,31,182,239,131,196,159,247,245,136,18,212,107,75,136,25,
    255,127,248,167,38,144,82,147,216,188,146,81,236,135,129,237,
    7,187,161,111,80,127,137,26,66,152,75,205,88,2,181,207,
    8,106,255,1,198,153,103,36,80,59,2,84,44,200,151,150,
    1,71,76,28,25,208,171,193,161,128,102,1,60,19,14,113,
    154,34,25,176,39,224,216,128,239,76,18,56,194,182,128,128,
    184,14,5,165,113,214,100,64,104,77,99,112,84,132,195,34,
    212,95,30,26,196,216,47,67,244,111,120,179,202,74,199,89,
    169,1,135,216,22,224,184,0,71,37,120,129,66,200,106,150,
    201,125,241,242,16,61,69,78,189,86,64,107,183,114,238,146,
    43,158,31,5,78,91,170,89,164,237,142,19,57,109,219,234,
    238,244,158,203,88,201,168,86,73,197,194,120,163,227,168,134,
    197,227,76,90,144,118,71,177,190,48,144,106,2,137,93,63,
    240,236,118,232,117,91,82,141,147,50,123,215,111,73,219,230,
    206,47,219,157,48,82,95,68,81,24,89,180,166,204,108,133,
    78,54,130,86,212,109,133,177,172,209,108,60,141,69,234,21,
    73,239,118,88,35,25,192,182,210,96,79,198,110,228,119,20,
    134,74,107,36,105,210,86,163,32,113,19,127,138,205,102,35,
    108,203,77,233,58,155,123,178,253,96,115,167,235,183,188,205,
    39,214,211,205,78,79,53,194,96,19,121,126,128,174,6,78,
    107,115,208,253,13,148,153,35,69,7,254,158,237,179,11,118,
    67,182,58,50,154,34,238,85,154,68,204,136,73,81,18,166,
    168,137,41,164,138,248,107,138,85,99,66,108,249,228,132,75,
    142,17,128,10,121,200,80,28,5,236,27,16,173,18,32,154,
    248,35,40,130,8,139,58,245,25,220,247,71,242,94,115,155,
    38,133,89,51,15,25,68,136,38,148,124,68,113,13,128,145,
    80,132,102,9,52,66,16,88,26,50,81,143,90,20,39,53,
    6,42,47,64,252,79,192,213,68,108,28,66,130,155,99,19,
    68,48,3,170,66,233,6,185,75,56,225,247,12,189,122,141,
    204,223,98,4,168,134,31,135,7,1,175,51,209,188,89,234,
    184,50,207,122,95,239,52,165,171,226,53,100,124,19,118,171,
    174,19,4,161,170,58,158,87,117,148,138,252,157,174,146,113,
    85,133,213,245,184,70,161,179,102,83,16,101,250,122,157,20,
    52,20,96,4,141,254,240,124,87,225,199,60,127,112,20,98,
    169,16,0,141,208,139,145,79,42,246,164,178,200,72,69,139,
    28,178,33,140,15,155,68,105,122,148,187,132,223,79,82,75,
    24,132,181,82,10,153,88,182,118,85,133,209,231,196,177,205,
    150,16,159,129,70,138,95,57,173,174,100,237,49,234,67,131,
    136,212,54,140,24,106,151,201,236,212,75,54,61,8,3,175,
    135,150,248,238,29,154,228,50,3,110,146,33,183,136,112,27,
    195,182,132,255,150,196,146,225,22,18,144,149,82,160,81,110,
    83,192,97,22,73,164,17,116,199,152,71,106,6,39,2,182,
    158,119,218,77,162,104,176,181,74,205,53,106,174,83,179,150,
    58,56,58,47,167,6,189,124,72,154,13,118,141,157,160,69,
    55,83,39,188,19,187,229,74,127,183,96,102,171,19,234,13,
    218,27,125,212,23,40,11,70,143,169,69,81,222,79,38,196,
    207,41,231,210,238,96,101,180,17,16,210,68,245,129,206,75,
    98,205,144,171,227,41,70,45,2,94,30,125,123,57,244,89,
    20,13,134,158,117,37,205,104,54,73,104,208,89,43,164,170,
    56,100,77,171,212,220,24,253,194,246,225,179,119,10,62,159,
    208,36,51,9,124,166,24,54,21,252,157,49,92,51,89,237,
    236,72,155,31,128,13,97,166,48,4,51,183,137,50,79,251,
    119,97,112,73,188,250,67,14,46,100,136,145,55,126,11,137,
    222,50,217,156,7,202,50,158,196,47,130,101,60,92,13,62,
    92,127,193,135,43,31,208,92,90,233,132,106,114,78,213,68,
    145,156,223,53,97,41,57,52,227,50,182,157,40,124,221,171,
    134,187,85,197,222,81,254,123,180,30,111,172,199,159,96,102,
    171,62,230,156,162,115,155,206,94,145,236,80,246,161,161,95,
    188,118,37,159,85,252,101,219,58,217,216,156,120,236,228,12,
    68,204,44,210,210,25,233,154,114,218,141,85,68,217,118,196,
    171,90,201,86,149,140,252,138,212,86,120,73,77,177,140,248,
    168,8,158,219,214,249,148,203,30,238,197,223,223,211,50,147,
    127,18,168,176,182,234,218,50,54,154,204,183,238,159,192,192,
    200,76,182,54,81,199,159,210,216,151,250,177,167,95,51,5,
    238,223,128,75,63,1,63,2,69,23,131,152,0,55,195,57,
    133,115,158,196,255,12,140,240,33,231,48,231,133,58,157,189,
    44,129,233,34,126,200,162,250,88,254,10,254,158,219,30,233,
    225,105,38,197,93,254,240,44,100,57,133,97,113,174,3,178,
    112,50,249,80,24,26,78,76,98,58,163,244,119,92,63,65,
    103,69,25,102,212,209,97,100,92,43,180,105,238,239,250,8,
    161,227,103,69,204,27,185,184,255,146,154,15,179,144,139,148,
    55,18,51,214,224,236,83,209,214,217,248,91,154,171,192,214,
    77,143,49,182,251,42,50,240,22,83,240,126,152,129,87,242,
    177,241,3,151,240,212,26,20,195,99,67,224,253,15,43,33,
    186,110,21,64,22,97,187,68,48,231,10,85,36,187,64,164,
    9,135,210,211,137,51,137,189,223,210,235,146,133,81,71,136,
    154,215,35,222,200,20,164,71,45,167,189,227,57,143,223,144,
    82,210,236,166,251,194,72,205,156,201,155,73,152,22,103,89,
    202,159,15,82,115,95,141,120,19,127,140,58,50,51,25,178,
    94,232,242,206,125,222,144,213,182,108,239,224,237,171,225,119,
    170,187,45,103,143,87,219,76,220,248,58,117,67,113,184,6,
    79,238,248,30,181,97,213,13,3,204,152,93,87,133,81,213,
    147,120,39,145,94,245,131,42,167,219,170,31,87,157,29,236,
    117,92,165,49,122,114,67,113,217,231,68,123,49,87,120,251,
    7,68,94,64,180,108,188,89,250,88,213,30,66,118,142,233,
    59,79,150,61,185,94,213,144,199,35,7,111,27,170,167,147,
    8,157,226,214,6,53,119,225,98,146,236,71,168,163,71,202,
    104,9,74,98,197,40,27,106,230,196,126,122,70,163,226,211,
    187,170,34,206,177,171,244,123,74,178,183,74,36,41,199,232,
    10,75,109,153,18,237,118,37,101,78,112,59,201,204,169,148,
    121,137,219,105,102,206,164,204,89,110,231,152,57,159,50,23,
    184,93,100,230,82,202,92,230,246,50,51,175,164,204,171,220,
    174,48,115,53,101,94,227,246,58,51,215,82,102,149,219,27,
    204,188,153,190,34,221,98,230,123,176,189,78,207,23,196,185,
    77,217,98,236,231,102,11,222,131,23,176,251,142,71,154,36,
    172,135,23,108,165,245,107,72,142,246,179,18,132,200,187,48,
    165,19,68,83,164,213,127,222,126,126,38,88,30,130,102,219,
    141,164,163,164,94,247,213,145,123,196,249,68,79,241,99,127,
    211,159,46,94,159,100,198,31,115,245,210,91,224,112,232,27,
    14,135,67,188,8,174,98,21,91,224,42,246,17,85,177,135,
    236,169,109,232,66,182,143,168,98,230,240,2,54,129,60,176,
    7,157,214,149,42,153,230,116,58,50,240,172,123,144,47,62,
    185,123,196,145,165,252,245,15,200,85,18,166,88,192,106,243,
    244,62,161,76,156,115,134,227,82,204,118,198,232,35,196,152,
    251,87,138,185,26,93,182,251,233,216,122,68,13,103,193,44,
    247,90,159,102,235,91,29,10,168,134,116,247,237,221,86,55,
    110,208,189,229,167,133,176,182,225,27,100,142,167,238,156,57,
    40,182,85,104,187,97,187,211,146,74,242,4,231,149,165,121,
    230,210,121,78,116,13,87,225,73,199,107,133,104,146,106,68,
    50,110,132,45,239,236,233,134,200,166,211,157,238,82,215,134,
    169,8,186,109,219,237,116,99,158,228,237,18,164,154,206,211,
    148,161,86,134,137,199,61,252,104,179,186,183,245,147,50,126,
    226,225,79,181,62,76,244,192,217,151,221,142,189,27,201,191,
    118,101,224,246,88,233,249,36,73,61,1,104,176,67,253,102,
    216,112,126,103,68,151,190,196,82,230,115,71,57,207,248,59,
    12,2,188,139,209,203,180,27,118,3,197,179,255,140,225,113,
    98,252,185,164,213,199,63,53,209,217,54,190,227,80,178,239,
    198,128,125,239,96,219,219,215,239,29,135,14,218,118,166,36,
    103,60,62,114,60,201,219,111,112,50,70,69,242,184,228,33,
    63,10,123,182,173,239,222,248,221,178,237,139,40,242,126,139,
    58,190,39,101,116,131,196,34,79,148,176,204,91,20,3,127,
    141,114,169,44,184,58,30,248,95,16,109,205,7,144,222,57,
    123,177,197,39,245,116,150,18,249,177,62,173,92,41,123,242,
    171,199,150,211,214,143,175,252,220,104,221,130,228,17,201,186,
    147,165,86,122,72,227,139,190,126,38,193,99,139,43,119,46,
    212,173,95,17,159,30,185,218,15,54,82,255,54,180,127,117,
    189,109,13,238,228,141,158,151,145,148,34,158,202,118,24,245,
    158,134,158,84,171,3,253,79,60,47,178,156,96,79,218,175,
    36,93,28,56,182,39,4,146,91,131,214,145,74,85,135,154,
    114,82,246,148,45,90,8,59,245,155,57,223,110,79,247,127,
    70,185,82,122,137,204,181,179,101,62,15,219,14,242,135,207,
    82,247,211,89,102,7,250,189,136,70,45,14,112,99,25,249,
    78,203,127,35,213,149,97,43,248,236,32,170,227,5,252,244,
    250,233,217,158,133,7,50,162,245,109,169,155,3,2,253,46,
    86,112,214,50,15,234,209,179,157,225,91,119,39,9,250,240,
    21,196,106,49,106,59,173,100,125,6,45,206,86,38,53,229,
    250,219,148,104,167,8,212,105,191,34,172,15,134,146,32,155,
    125,241,77,106,160,216,228,109,30,201,61,159,62,88,69,38,
    158,148,100,180,51,135,31,123,249,161,23,144,19,244,59,130,
    126,135,124,76,117,8,63,143,209,255,51,148,167,203,152,31,
    168,84,51,69,5,139,181,130,57,57,83,46,76,78,148,11,
    229,49,147,159,145,167,196,188,81,41,148,39,38,197,121,254,
    174,97,86,169,24,107,151,203,226,255,174,150,124,159,
};

EmbeddedPython embedded_m5_internal_param_RubyTester(
    "m5/internal/param_RubyTester.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_RubyTester.py",
    "m5.internal.param_RubyTester",
    data_m5_internal_param_RubyTester,
    2622,
    8121);

} // anonymous namespace
