#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseGic[] = {
    120,156,181,88,109,115,219,198,17,222,3,64,74,164,36,75,
    182,222,252,34,91,180,19,199,140,227,136,105,26,215,157,137,
    227,169,227,164,157,120,198,138,2,166,99,91,201,20,133,128,
    147,4,10,4,56,192,73,50,51,210,116,166,114,211,78,191,
    245,67,127,66,62,244,223,244,31,181,187,123,0,4,82,84,
    198,51,161,101,242,188,188,91,236,237,203,115,187,123,240,32,
    251,171,224,247,119,13,128,244,169,1,224,227,71,64,8,208,
    21,176,41,64,72,1,254,2,236,85,32,249,4,252,10,188,
    6,216,52,64,26,112,130,132,9,223,25,16,77,243,51,85,
    8,77,158,17,208,175,131,180,96,179,2,207,163,139,96,201,
    42,236,213,33,249,51,8,33,34,1,47,252,9,240,39,225,
    53,74,71,162,198,2,39,129,38,235,60,89,3,127,138,39,
    235,224,79,51,49,5,253,57,144,211,176,57,67,108,155,23,
    80,236,93,20,59,203,98,255,75,98,125,92,89,4,255,2,
    177,163,94,47,137,211,34,78,222,111,150,165,204,229,90,94,
    132,205,75,57,61,95,162,23,74,244,98,137,94,42,209,203,
    37,250,114,137,190,82,162,175,150,232,107,37,122,165,68,95,
    47,209,55,74,244,106,137,110,148,232,155,37,250,86,137,126,
    167,68,191,91,162,111,151,232,247,74,244,29,166,209,155,151,
    160,211,132,206,251,208,185,11,219,24,224,139,133,231,62,0,
    105,66,231,30,108,222,3,137,159,15,224,4,49,224,95,42,
    61,241,33,63,49,95,60,177,198,79,180,96,179,5,18,63,
    107,250,137,42,180,155,75,136,171,224,127,248,215,20,72,169,
    105,28,14,100,146,6,113,228,4,209,118,28,24,180,94,165,
    129,80,232,209,48,145,193,241,9,193,241,63,192,88,244,141,
    12,142,199,128,130,5,217,18,26,112,204,196,177,1,253,38,
    28,9,232,88,224,155,112,132,219,84,72,129,29,1,39,6,
    124,111,18,195,49,142,22,130,230,6,88,74,99,177,195,160,
    209,146,38,224,184,2,71,21,104,191,56,50,104,98,175,6,
    201,79,240,195,10,11,157,100,161,6,28,225,104,193,137,5,
    199,85,120,142,76,56,213,169,145,249,226,197,17,90,138,51,
    237,166,133,218,174,151,204,37,83,252,32,137,220,174,84,23,
    144,118,122,110,226,118,157,207,221,84,254,33,240,154,245,156,
    39,78,215,122,174,218,181,249,33,147,188,209,237,41,22,22,
    71,82,77,33,177,29,68,190,211,141,253,253,80,170,73,146,
    228,108,7,161,116,28,94,252,170,219,139,19,245,101,146,196,
    137,77,14,229,201,48,118,139,39,200,157,94,24,167,178,73,
    187,241,54,54,137,87,196,189,221,99,137,164,0,43,74,15,
    251,50,245,146,160,167,48,78,90,34,113,147,180,38,69,136,
    135,244,33,14,173,221,184,43,91,210,115,91,59,178,123,191,
    181,181,31,132,126,235,177,253,172,213,235,171,221,56,106,225,
    92,16,41,137,30,8,91,3,182,175,33,195,37,146,114,24,
    236,56,1,235,239,236,202,176,39,147,25,154,189,74,59,136,
    57,49,45,170,194,20,77,49,131,84,5,191,166,88,49,166,
    196,122,64,22,120,100,21,65,199,42,131,133,34,40,96,207,
    128,100,133,160,208,193,143,160,216,33,32,218,180,102,240,218,
    55,100,186,158,237,152,20,96,61,121,196,240,65,28,33,231,
    67,138,104,4,140,129,10,116,170,160,177,129,144,210,96,73,
    250,52,34,59,137,49,80,184,5,233,191,1,93,137,168,56,
    130,12,49,39,38,136,104,14,84,157,146,17,206,46,225,134,
    127,101,208,181,155,164,254,58,135,95,237,6,105,124,24,177,
    147,137,230,99,210,70,207,108,244,191,222,234,72,79,165,171,
    56,241,50,222,111,120,110,20,197,170,225,250,126,195,85,42,
    9,182,246,149,76,27,42,110,220,78,155,20,55,251,98,142,
    160,66,94,191,151,35,134,162,139,136,209,63,252,192,83,248,
    99,158,127,112,20,82,169,48,250,187,177,159,226,60,137,216,
    145,202,38,37,21,57,57,102,69,24,28,14,177,210,246,200,
    71,168,126,156,107,194,8,108,86,115,188,164,50,220,86,117,
    134,158,155,166,14,107,66,243,140,50,18,124,224,134,251,146,
    165,167,40,15,21,34,82,235,48,78,156,93,38,157,115,19,
    89,239,40,142,252,62,170,17,120,119,104,135,203,140,182,105,
    198,219,34,98,109,2,199,42,254,95,21,75,134,103,101,8,
    171,230,40,163,148,166,128,99,44,178,48,35,226,78,48,125,
    52,13,62,255,172,58,159,177,91,68,209,195,246,10,13,215,
    105,184,65,195,106,110,221,152,76,156,25,54,241,1,137,53,
    216,46,182,128,220,109,230,22,248,3,231,228,202,233,57,193,
    108,214,38,188,27,116,42,78,241,110,81,230,75,30,209,136,
    172,124,146,76,72,191,165,60,75,231,130,133,209,17,64,48,
    19,117,10,113,246,135,61,71,118,78,230,232,180,9,114,101,
    220,237,148,112,103,83,40,24,116,246,149,60,145,57,196,161,
    225,102,95,35,81,149,17,14,109,208,112,115,204,94,61,5,
    206,206,25,224,124,74,59,204,101,192,153,97,192,212,241,59,
    103,120,102,230,234,162,134,205,15,1,134,208,98,141,64,203,
    123,68,153,103,141,123,59,64,201,76,250,125,9,40,164,133,
    81,214,124,29,137,254,50,41,92,134,200,50,214,221,231,209,
    50,150,82,131,75,233,71,92,74,185,28,115,179,165,147,168,
    201,121,84,19,21,178,124,219,132,165,172,68,166,53,28,123,
    73,252,170,223,136,183,27,138,77,163,156,247,240,118,186,118,
    59,253,20,179,89,227,17,231,17,157,207,116,198,74,100,143,
    50,14,61,250,229,43,79,114,113,226,95,142,163,19,140,195,
    201,198,201,138,30,162,101,145,252,102,228,14,229,84,155,170,
    132,50,236,56,93,90,47,92,74,26,62,37,153,117,246,167,
    41,150,17,25,117,193,27,59,58,129,114,135,195,171,248,253,
    156,124,76,198,73,160,62,219,110,107,181,88,99,210,221,190,
    55,16,253,241,232,107,183,80,192,31,243,168,87,79,163,78,
    95,51,199,235,223,129,91,60,1,63,2,197,21,195,151,225,
    181,128,55,5,114,158,216,255,4,12,236,17,85,151,115,65,
    155,42,45,115,96,138,72,31,48,171,46,194,79,225,31,165,
    83,145,151,74,51,107,226,202,165,210,42,242,8,3,226,141,
    202,161,53,152,112,40,6,187,110,74,108,58,139,156,30,180,
    211,140,92,244,95,152,69,199,132,142,73,45,205,161,141,191,
    63,197,6,21,155,107,98,222,40,69,252,87,52,124,92,4,
    91,228,115,191,92,135,85,56,191,0,58,58,247,126,71,27,
    89,172,218,236,4,59,43,123,190,0,108,37,7,236,199,5,
    96,37,87,136,215,220,161,211,104,80,232,78,12,129,87,64,
    108,119,232,198,101,129,172,192,102,149,160,205,61,168,200,144,
    47,242,12,67,249,104,160,252,176,221,235,218,35,69,244,116,
    96,104,120,53,206,147,75,177,121,24,186,221,45,223,125,116,
    76,18,73,172,151,159,5,35,215,113,174,172,35,225,88,156,
    167,38,255,188,159,235,122,48,206,83,251,27,20,80,232,200,
    24,245,99,143,143,234,183,187,178,209,149,221,45,188,86,237,
    6,189,198,118,232,238,176,159,205,204,134,175,115,27,20,7,
    106,184,60,167,119,105,140,27,94,28,97,114,220,247,84,156,
    52,124,137,247,13,233,55,62,108,112,102,109,4,105,195,221,
    194,85,215,83,26,151,131,39,136,187,58,55,217,73,185,129,
    219,59,36,114,220,113,114,240,190,24,96,199,250,23,40,234,
    149,190,204,20,137,82,223,176,24,230,88,90,240,38,161,250,
    58,101,80,169,182,215,104,120,31,222,66,62,253,68,195,3,
    82,50,190,42,174,25,53,131,203,108,198,178,65,252,233,217,
    99,244,242,77,142,145,126,135,130,12,178,10,157,9,30,39,
    41,143,210,43,18,43,123,69,66,147,83,176,57,157,191,154,
    153,161,211,86,253,165,167,141,97,60,110,0,255,56,214,67,
    102,63,120,155,42,218,191,133,172,22,158,119,192,6,90,165,
    199,250,128,105,191,98,197,236,47,176,57,186,147,102,115,196,
    243,232,42,246,76,22,247,76,15,169,103,58,226,190,202,49,
    116,219,116,26,14,110,112,249,218,77,86,71,242,208,25,192,
    146,110,138,40,194,110,175,39,35,223,190,11,229,62,135,151,
    199,233,22,58,63,255,132,82,233,50,197,2,54,54,103,225,
    69,105,160,100,6,195,168,82,0,106,229,45,68,235,95,121,
    180,154,23,6,114,129,77,210,245,233,47,14,190,246,232,213,
    225,147,233,244,66,87,109,199,73,151,58,226,159,91,198,218,
    169,95,148,100,19,236,23,181,64,54,203,80,42,57,24,36,
    69,155,103,55,28,95,98,238,140,251,216,160,114,39,136,191,
    67,199,25,123,30,250,12,5,252,13,178,78,26,243,16,222,
    70,22,141,90,181,38,56,81,15,189,105,211,27,127,4,121,
    191,211,79,109,6,253,108,225,40,54,53,207,163,164,28,247,
    218,235,120,119,215,47,154,232,110,107,191,3,217,189,197,190,
    83,248,154,46,110,220,100,234,230,28,225,203,69,132,107,134,
    253,235,60,6,221,251,107,185,41,107,218,148,141,204,175,252,
    82,170,123,95,93,31,201,245,85,164,146,39,216,248,39,113,
    200,247,179,179,28,237,126,170,100,87,93,27,90,148,209,126,
    215,121,38,187,113,210,127,22,251,82,173,12,173,63,246,253,
    196,118,163,29,233,28,72,42,130,234,230,48,67,86,1,181,
    140,156,171,49,82,135,65,222,51,186,104,38,92,212,175,119,
    184,65,59,187,254,36,140,189,61,233,103,60,163,221,193,60,
    95,196,93,23,231,71,239,210,14,242,93,46,14,173,251,9,
    61,181,56,52,155,202,36,112,195,224,7,169,174,140,242,224,
    198,97,210,198,30,242,172,255,178,32,198,135,50,33,255,134,
    234,214,16,195,233,18,11,56,207,205,195,114,244,110,231,216,
    182,191,149,69,123,180,7,49,115,39,93,55,204,252,51,172,
    113,225,153,92,149,27,63,39,68,27,53,90,143,141,32,254,
    66,30,4,158,126,211,150,47,42,58,76,195,12,116,38,138,
    95,220,59,112,10,201,206,49,231,139,68,238,4,104,84,194,
    207,23,188,89,238,255,108,116,18,43,63,55,238,204,162,251,
    100,125,171,126,68,111,100,248,5,18,189,44,171,205,214,68,
    213,160,130,96,226,61,119,70,88,230,244,92,205,154,158,170,
    89,181,9,147,223,136,204,224,29,167,110,213,166,166,197,155,
    255,91,197,156,85,55,86,103,106,226,255,205,155,196,90,
};

EmbeddedPython embedded_m5_internal_param_BaseGic(
    "m5/internal/param_BaseGic.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_BaseGic.py",
    "m5.internal.param_BaseGic",
    data_m5_internal_param_BaseGic,
    2367,
    6815);

} // anonymous namespace
