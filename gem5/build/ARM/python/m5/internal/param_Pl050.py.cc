#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Pl050[] = {
    120,156,181,88,235,83,28,199,17,239,217,221,59,184,3,4,
    8,161,39,18,39,57,178,206,138,13,122,70,169,88,86,34,
    203,78,74,174,18,38,139,19,201,216,149,205,178,59,192,30,
    251,184,218,29,64,231,130,15,49,42,39,149,84,229,75,42,
    95,242,61,31,242,223,248,63,114,186,123,31,55,28,71,202,
    21,159,209,221,168,111,166,167,183,31,191,233,238,89,15,138,
    191,26,126,127,213,2,200,190,49,0,124,252,8,8,1,34,
    1,235,2,132,20,224,159,131,157,26,164,15,192,175,193,27,
    128,117,3,164,1,71,72,152,240,133,1,241,36,239,169,67,
    104,242,140,128,94,19,164,5,235,53,120,25,207,130,37,235,
    176,211,132,244,143,32,132,136,5,188,242,199,192,31,135,55,
    40,29,137,6,11,28,7,154,108,242,100,3,252,9,158,108,
    130,63,201,196,4,244,102,64,78,194,250,20,177,173,159,65,
    177,183,81,236,52,139,253,150,196,250,184,50,15,254,25,98,
    71,189,62,39,78,139,56,249,121,211,44,101,166,212,114,22,
    214,207,150,244,156,70,159,211,232,121,141,62,175,209,23,52,
    250,162,70,95,210,232,203,26,125,69,163,23,52,250,170,70,
    95,211,232,69,141,110,105,244,117,141,190,161,209,111,105,244,
    79,52,250,166,70,191,173,209,183,52,186,173,209,239,104,244,
    109,141,254,169,70,191,203,52,70,226,44,116,222,131,206,18,
    116,150,97,19,193,49,91,121,253,14,72,19,58,119,97,253,
    46,72,252,220,129,35,196,143,127,86,219,113,143,119,204,85,
    59,238,243,142,7,176,254,0,36,126,238,231,59,234,176,214,
    62,143,152,12,190,195,191,182,64,74,77,226,176,39,211,44,
    72,98,39,136,55,147,192,160,245,58,13,132,96,143,134,177,
    2,202,207,8,202,255,1,198,177,111,20,80,62,4,20,44,
    200,150,208,128,67,38,14,13,232,181,225,64,64,199,2,223,
    132,3,124,76,141,20,216,18,112,100,192,151,38,49,28,226,
    104,33,224,174,129,165,114,28,119,24,112,185,164,49,56,172,
    193,65,13,214,94,29,24,52,177,211,128,244,223,240,213,2,
    11,29,103,161,6,28,224,104,193,145,5,135,117,120,137,76,
    56,213,105,144,249,226,213,1,90,138,51,107,109,11,181,93,
    209,204,37,83,252,32,141,221,72,178,233,78,215,77,221,200,
    89,13,239,60,188,211,110,150,28,73,182,212,117,213,182,205,
    91,76,242,69,212,85,44,42,137,165,154,64,98,51,136,125,
    39,74,252,221,80,170,113,146,227,108,6,161,116,28,94,124,
    30,117,147,84,125,156,166,73,106,147,59,121,50,76,220,106,
    7,57,211,11,147,76,182,233,105,252,24,155,196,43,226,222,
    236,178,68,82,128,213,164,205,190,204,188,52,232,42,140,82,
    46,145,184,73,90,155,226,195,67,246,11,28,150,183,147,72,
    46,75,207,93,222,146,209,195,229,141,221,32,244,151,159,218,
    47,150,187,61,181,157,196,203,56,23,196,74,162,253,225,178,
    102,249,18,46,159,37,25,251,193,150,19,176,246,206,182,12,
    187,50,157,162,217,203,36,95,204,136,73,81,23,166,104,139,
    41,164,106,248,53,197,130,49,33,86,2,210,223,35,155,8,
    54,150,14,20,138,158,128,29,3,210,5,130,65,7,63,130,
    226,134,96,88,163,53,131,215,126,75,134,231,179,29,147,130,
    155,79,30,48,116,16,67,200,249,152,162,25,3,199,191,6,
    157,58,228,184,64,56,229,64,73,123,52,34,59,137,49,80,
    184,5,217,63,1,29,137,136,56,128,2,45,71,38,136,120,
    6,84,147,146,24,206,158,199,7,126,205,128,91,107,147,250,
    43,28,124,181,29,100,201,126,204,46,38,154,113,178,134,158,
    89,237,125,186,209,145,158,202,22,113,226,243,100,183,229,185,
    113,156,168,150,235,251,45,87,169,52,216,216,85,50,107,169,
    164,117,51,107,83,212,236,217,18,63,149,188,94,183,196,11,
    197,22,241,146,255,240,3,79,225,143,57,254,193,81,200,164,
    194,216,111,39,126,134,243,36,98,75,42,155,148,84,228,228,
    132,21,97,104,56,196,74,143,71,190,51,248,251,105,169,9,
    227,175,93,47,209,146,201,112,83,53,25,120,110,150,57,172,
    9,205,51,198,72,240,158,27,238,74,150,158,161,60,84,136,
    200,92,135,209,161,236,34,105,92,26,200,90,199,73,236,247,
    80,137,192,187,69,242,47,50,214,38,25,109,243,136,180,49,
    28,235,248,127,93,156,55,60,171,192,87,189,196,24,37,51,
    5,28,97,81,4,25,241,118,132,137,163,109,240,201,103,197,
    249,124,221,32,138,54,219,11,52,92,165,225,26,13,139,165,
    109,35,49,112,106,208,192,71,36,212,96,171,88,127,114,181,
    89,234,239,31,59,35,151,250,103,4,179,216,26,97,221,160,
    19,209,199,186,69,25,47,125,66,35,178,242,41,50,33,251,
    140,242,43,157,9,22,70,240,71,32,19,213,135,55,123,195,
    158,33,43,199,75,100,218,4,55,29,115,91,26,230,108,10,
    4,3,206,190,84,166,48,135,56,114,168,217,87,72,84,109,
    136,59,91,52,92,31,169,79,251,160,217,58,1,154,247,73,
    254,76,1,154,41,6,75,19,191,51,134,103,22,142,174,42,
    215,220,0,88,8,41,214,16,164,188,77,148,121,210,180,31,
    3,36,133,65,191,214,64,66,58,24,186,222,43,72,244,46,
    144,186,58,60,46,96,173,125,25,95,192,242,105,112,249,188,
    195,229,147,75,48,55,103,121,242,52,57,127,230,68,141,236,
    222,52,225,124,81,22,179,6,142,221,52,121,221,107,37,155,
    45,197,134,81,174,123,124,51,91,186,153,189,143,89,172,245,
    132,243,71,158,199,242,76,149,202,46,101,26,218,250,241,107,
    79,114,73,226,95,142,147,39,22,135,147,140,83,148,58,68,
    202,60,121,205,40,221,201,41,54,83,41,101,214,209,57,180,
    89,57,148,244,251,132,36,54,217,155,166,184,128,168,104,10,
    126,172,147,167,77,238,105,120,21,191,31,146,135,201,52,9,
    212,149,219,107,185,82,172,47,105,110,191,123,44,242,163,208,
    214,94,198,237,191,43,35,94,239,71,156,190,102,137,212,63,
    3,183,116,2,190,1,138,41,134,174,64,106,5,108,10,226,
    28,177,255,1,24,210,67,42,45,231,128,53,170,174,204,129,
    169,33,123,196,172,121,225,253,4,254,162,157,135,178,60,154,
    69,211,166,151,71,171,202,31,12,134,239,85,2,173,227,137,
    134,34,176,237,102,196,150,103,143,254,17,235,231,225,170,227,
    194,236,57,18,100,140,231,178,28,122,236,151,125,92,80,129,
    185,34,230,12,45,218,119,105,184,87,5,90,148,115,63,84,
    131,69,56,189,228,57,121,190,253,130,30,99,177,98,211,99,
    92,140,121,119,5,212,90,9,212,123,21,80,37,215,132,55,
    220,139,211,104,80,208,142,12,129,23,69,108,110,232,94,102,
    129,172,193,122,157,32,205,253,166,40,16,47,202,188,66,89,
    232,88,193,97,155,87,114,111,84,113,203,67,66,195,235,209,
    157,87,138,202,227,208,141,54,124,247,201,215,36,143,132,122,
    229,25,48,74,13,103,116,13,9,191,226,52,37,249,231,195,
    82,211,189,209,157,213,159,225,246,74,67,70,166,159,120,124,
    64,63,219,150,173,72,70,27,120,121,218,14,186,173,205,208,
    221,98,31,155,133,5,159,150,22,40,14,210,96,49,206,110,
    211,152,180,188,36,198,116,184,235,169,36,109,249,18,239,21,
    210,111,189,215,226,92,218,10,178,150,187,129,171,174,167,114,
    60,30,63,55,220,191,185,233,86,198,173,218,206,62,145,163,
    141,145,131,119,194,0,59,211,55,80,213,167,252,202,82,165,
    70,238,57,115,120,99,41,193,27,131,234,229,105,130,10,179,
    189,68,195,59,48,242,12,250,0,183,255,137,228,144,225,117,
    113,197,104,24,220,161,48,195,42,241,102,39,15,207,254,247,
    57,60,249,251,149,226,8,213,137,83,142,209,149,147,198,6,
    37,208,245,102,57,57,193,227,36,79,78,149,175,112,206,240,
    228,52,191,22,169,243,204,44,157,192,177,31,122,2,25,220,
    163,133,245,223,70,122,240,236,71,63,158,130,246,207,161,168,
    138,167,29,58,161,107,63,149,31,186,142,40,155,100,93,117,
    190,62,159,61,142,21,199,75,165,171,100,238,232,133,81,218,
    193,39,51,151,254,247,254,25,58,217,227,61,173,84,62,226,
    114,223,59,199,254,207,219,127,246,191,120,25,95,198,102,207,
    226,102,239,49,53,123,7,108,159,99,228,253,94,31,61,181,
    202,204,105,28,98,185,239,104,166,230,189,28,105,229,118,187,
    50,246,237,219,160,183,103,188,60,186,40,82,18,248,7,104,
    85,215,20,231,176,31,59,121,18,40,147,105,38,112,32,106,
    21,246,71,26,18,134,214,191,74,104,181,9,10,253,116,102,
    63,166,129,19,88,149,187,236,95,86,14,189,56,128,155,32,
    195,62,119,55,147,212,199,159,190,136,117,159,179,105,57,193,
    119,46,157,115,47,246,88,194,176,121,218,76,25,31,105,118,
    39,99,215,151,161,84,82,143,171,34,157,139,123,156,47,177,
    102,36,61,108,197,185,235,197,223,161,227,140,56,3,127,128,
    219,255,10,69,170,192,12,44,234,152,131,231,197,188,209,168,
    55,4,151,168,129,55,137,249,163,185,68,115,127,215,203,108,
    62,218,211,149,115,249,173,87,89,67,40,14,124,175,88,113,
    163,252,85,6,223,224,237,183,160,184,161,217,183,170,32,209,
    5,149,155,234,252,34,130,136,231,242,201,213,210,190,79,243,
    244,6,43,122,184,84,26,179,148,27,243,251,216,123,30,119,
    119,21,191,118,139,30,170,43,67,185,214,130,40,127,239,163,
    102,7,214,253,212,69,122,126,96,54,147,105,224,134,193,87,
    146,59,191,147,242,158,70,27,238,243,88,125,36,247,2,79,
    170,75,67,121,62,116,51,249,155,192,59,69,239,213,208,85,
    155,73,26,169,171,67,151,81,120,250,12,111,101,105,18,50,
    38,135,152,212,203,148,140,78,216,43,227,221,200,121,33,163,
    36,237,189,72,124,169,22,6,214,159,250,126,106,187,241,150,
    116,246,36,245,43,234,250,32,67,209,172,228,50,74,174,214,
    112,55,28,227,61,197,247,184,88,248,126,184,47,159,133,137,
    183,35,253,130,103,184,59,152,231,163,36,162,88,13,122,155,
    45,94,221,79,215,176,49,63,105,111,225,237,100,95,166,228,
    143,80,221,24,96,232,47,177,128,211,220,50,40,39,127,218,
    41,104,219,221,40,162,51,220,98,44,128,105,228,134,133,61,
    131,26,87,88,45,85,185,246,191,132,228,70,13,215,99,53,
    72,10,132,158,142,226,62,207,240,16,35,138,3,175,207,196,
    41,176,224,224,84,55,236,60,80,237,62,54,195,189,94,191,
    96,115,134,75,229,86,128,62,74,89,202,49,238,162,200,125,
    48,44,89,235,59,71,155,13,243,251,76,254,198,227,9,245,
    161,89,140,3,189,194,108,76,55,48,51,82,221,51,69,19,
    43,159,101,78,206,52,172,201,137,134,213,24,51,249,93,213,
    20,222,66,155,86,99,98,82,252,63,255,22,49,219,54,141,
    197,217,134,248,47,15,100,37,68,
};

EmbeddedPython embedded_m5_internal_param_Pl050(
    "m5/internal/param_Pl050.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_Pl050.py",
    "m5.internal.param_Pl050",
    data_m5_internal_param_Pl050,
    2489,
    7285);

} // anonymous namespace
