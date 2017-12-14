#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_L1Cache_Controller[] = {
    120,156,189,89,221,115,20,199,17,239,217,251,16,119,146,144,
    132,190,16,8,116,128,5,7,6,137,207,144,42,19,18,76,
    236,84,92,65,150,87,164,192,178,43,155,213,238,72,90,177,
    183,123,217,157,67,62,151,244,16,139,114,82,113,85,222,242,
    148,183,84,229,33,255,77,254,163,164,187,103,119,111,239,116,
    18,194,225,130,116,67,95,79,111,79,127,252,166,167,103,229,
    64,242,175,132,159,95,212,0,226,239,13,0,23,127,5,248,
    0,13,1,235,2,132,20,224,78,193,171,18,68,247,193,45,
    193,27,128,117,3,164,1,7,72,20,224,43,3,130,17,126,
    166,12,126,129,57,2,218,85,144,69,88,47,193,139,96,2,
    138,178,12,175,170,16,253,30,132,16,129,128,151,238,16,184,
    167,224,13,106,71,162,194,10,79,1,49,171,204,172,128,59,
    204,204,42,184,35,76,12,67,123,28,228,8,172,143,146,216,
    250,105,84,123,3,213,142,177,218,127,147,90,23,103,166,193,
    61,77,226,104,215,151,36,89,36,73,94,111,140,181,140,167,
    86,78,192,250,153,148,158,204,209,83,57,122,58,71,207,228,
    232,217,28,125,54,71,207,229,232,115,57,250,124,142,158,207,
    209,23,114,244,197,28,189,144,163,107,57,250,82,142,190,156,
    163,175,228,232,15,114,244,98,142,190,154,163,175,229,232,122,
    142,190,158,163,111,228,232,15,115,244,77,166,49,19,103,96,
    231,22,236,44,193,206,50,108,34,56,38,178,168,223,6,89,
    128,157,59,176,126,7,36,254,222,134,3,196,143,123,38,247,
    196,93,126,98,50,123,226,30,63,113,31,214,239,131,196,223,
    123,250,137,50,172,213,103,16,147,222,127,240,95,93,32,165,
    70,112,120,45,163,216,11,3,203,11,54,67,207,160,249,50,
    13,132,96,135,134,161,4,202,79,9,202,255,2,198,177,107,
    36,80,222,7,84,44,200,23,223,128,125,38,246,13,104,215,
    97,79,192,78,17,220,2,236,225,50,37,50,96,75,192,129,
    1,95,23,72,96,31,199,34,2,238,34,20,149,198,241,14,
    3,78,107,26,130,253,18,236,149,96,237,229,158,65,140,87,
    21,136,254,9,223,206,179,210,83,172,212,128,61,28,139,112,
    80,132,253,50,188,64,33,100,237,84,200,125,241,114,15,61,
    69,206,90,189,136,214,174,228,220,37,87,92,47,10,236,134,
    84,115,72,91,77,59,178,27,214,111,238,60,181,157,109,105,
    61,13,3,21,133,190,47,163,122,53,21,15,227,165,166,173,
    182,77,126,190,64,129,105,52,21,235,13,3,169,134,145,216,
    244,2,215,106,132,110,203,151,234,20,41,181,54,61,95,90,
    22,79,254,186,209,12,35,245,73,20,133,145,73,177,101,166,
    31,218,217,19,20,89,199,15,99,89,167,213,120,25,147,212,
    43,146,222,108,178,70,50,128,109,166,135,93,25,59,145,215,
    84,152,50,173,145,164,73,91,157,146,197,67,252,43,28,150,
    183,195,134,92,150,142,189,188,37,27,15,150,55,90,158,239,
    46,63,49,159,45,55,219,106,59,12,150,145,231,5,74,98,
    48,252,229,163,194,176,132,178,103,72,225,174,183,101,121,236,
    138,181,45,253,166,140,70,137,123,142,22,19,227,98,68,148,
    69,65,212,197,40,82,37,252,20,196,188,49,44,86,60,114,
    198,33,7,9,80,197,60,132,40,175,2,94,25,16,205,19,
    64,118,240,87,80,70,17,38,107,52,103,240,220,23,20,5,
    205,221,41,80,218,53,115,143,65,133,232,66,201,71,148,231,
    0,24,25,37,216,41,131,70,12,2,77,67,40,106,211,136,
    226,164,198,64,229,69,136,255,6,24,85,196,202,30,36,56,
    58,40,128,8,198,65,85,169,188,33,119,6,23,252,142,161,
    184,86,39,243,87,24,9,106,219,139,195,221,128,227,77,52,
    111,158,53,140,204,106,251,243,141,29,233,168,120,1,25,95,
    134,173,154,99,7,65,168,106,182,235,214,108,165,34,111,163,
    165,100,92,83,97,109,49,174,83,10,205,137,20,76,153,190,
    118,51,5,15,37,26,193,163,191,184,158,163,240,203,36,127,
    225,44,196,82,33,16,182,67,55,70,62,169,216,146,202,36,
    35,21,5,57,100,67,24,39,22,137,210,242,40,119,26,191,
    63,73,45,97,48,214,203,41,116,98,233,111,170,42,163,208,
    142,99,139,45,33,62,3,142,20,191,182,253,150,100,237,49,
    234,67,131,136,212,54,12,8,114,103,201,252,212,91,118,33,
    8,3,183,141,22,121,206,53,90,236,44,3,111,132,161,55,
    141,176,27,194,177,140,255,151,197,140,225,20,19,176,149,83,
    192,81,205,83,192,233,22,73,198,17,124,7,88,95,234,6,
    23,8,246,130,119,222,101,162,232,97,115,158,134,11,52,92,
    164,97,33,117,244,253,123,59,218,235,237,67,90,193,96,23,
    217,25,74,66,33,117,198,237,218,61,115,157,221,131,149,111,
    141,118,129,65,123,165,179,11,138,84,37,163,199,52,162,40,
    239,175,2,196,207,169,38,211,110,97,101,180,49,16,226,68,
    117,128,207,161,49,199,201,229,83,41,102,77,2,98,30,141,
    91,57,52,154,148,21,134,162,57,151,86,58,139,36,52,8,
    205,243,164,170,212,39,182,53,26,46,13,46,192,29,56,109,
    29,130,211,71,180,216,120,2,167,81,134,81,21,63,227,134,
    83,72,162,158,29,125,147,61,48,34,12,21,251,96,232,42,
    81,133,195,126,14,28,62,137,119,159,230,224,67,6,25,121,
    39,86,144,104,207,146,237,121,224,204,226,201,253,34,152,197,
    195,216,224,195,248,54,31,198,124,160,115,171,167,11,110,129,
    107,174,38,74,20,132,205,2,204,36,135,108,92,193,177,25,
    133,223,180,107,225,102,77,177,151,84,31,31,45,198,75,139,
    241,71,88,249,106,143,185,230,232,218,167,171,91,36,155,84,
    157,232,209,79,190,113,36,159,105,252,205,178,116,49,178,184,
    48,89,201,89,137,24,154,166,16,26,105,108,185,44,199,42,
    162,106,60,160,232,86,179,232,146,177,159,145,250,42,135,182,
    32,102,17,47,85,193,54,88,186,238,114,187,196,179,248,249,
    152,194,77,126,74,160,134,223,92,211,22,178,241,228,134,121,
    179,11,19,239,221,116,115,25,117,253,54,197,66,185,131,5,
    250,20,82,64,255,9,184,117,20,240,61,80,182,49,169,9,
    160,51,252,83,122,39,73,252,119,192,200,239,115,110,115,221,
    88,163,179,154,37,176,156,196,15,89,84,31,227,159,193,159,
    115,219,38,61,108,11,73,115,152,63,108,139,89,205,97,152,
    156,232,64,45,118,23,39,74,199,182,29,147,152,174,56,157,
    157,216,41,228,89,51,135,21,247,253,99,230,148,86,108,145,
    13,95,119,16,67,199,213,121,49,105,228,112,112,135,134,187,
    25,4,68,202,123,175,230,44,192,209,167,169,165,171,247,87,
    180,102,145,173,28,27,226,142,239,176,170,12,220,165,20,220,
    119,51,112,75,62,110,222,240,213,128,70,131,114,123,96,8,
    188,183,98,71,69,215,196,34,200,18,172,151,105,27,112,199,
    43,146,93,34,210,194,68,101,172,235,44,227,104,172,232,56,
    101,233,213,153,163,225,155,1,109,120,74,222,35,223,110,108,
    184,246,227,239,72,57,173,224,164,251,198,72,205,29,207,155,
    75,152,23,71,89,204,95,31,164,102,191,30,208,102,255,9,
    234,202,204,101,104,187,161,195,59,252,249,182,172,53,100,99,
    3,111,121,219,94,179,182,233,219,91,28,253,66,226,206,231,
    169,59,138,211,215,219,1,196,55,104,12,107,78,24,96,165,
    109,57,42,140,106,174,196,59,143,116,107,183,106,92,166,107,
    94,92,179,55,112,214,118,148,198,112,247,198,227,118,210,142,
    182,98,238,28,95,237,18,57,192,236,89,120,147,245,176,107,
    126,3,217,57,168,239,86,89,213,229,126,88,111,9,60,178,
    240,54,163,218,186,232,80,55,96,46,209,112,29,6,91,156,
    239,163,174,63,146,82,10,73,89,156,55,42,6,247,41,135,
    165,87,73,75,124,120,247,45,136,19,236,62,253,190,40,217,
    131,101,146,148,67,116,133,166,177,66,133,122,189,154,50,135,
    121,28,97,230,104,202,60,205,227,24,51,199,83,230,4,143,
    103,152,57,153,50,167,120,156,102,230,76,202,156,229,241,44,
    51,231,82,230,57,30,207,51,115,62,101,94,224,241,34,51,
    23,82,102,141,199,75,204,188,156,50,175,240,248,1,51,23,
    211,87,103,87,153,121,13,214,235,244,78,133,56,215,169,212,
    12,253,175,165,134,55,238,0,183,236,15,239,181,194,152,15,
    255,79,214,154,63,133,164,127,56,170,186,136,188,43,163,186,
    186,236,136,244,10,146,247,131,223,97,44,28,3,125,203,137,
    164,173,164,206,199,252,192,60,228,226,164,151,250,107,167,114,
    28,238,160,159,100,206,28,112,203,212,158,226,52,233,107,23,
    167,73,188,8,206,97,43,93,228,86,250,17,181,210,123,236,
    185,101,232,110,186,131,184,82,22,0,242,43,144,187,125,76,
    211,65,208,109,51,153,104,55,155,50,112,205,27,144,239,132,
    121,122,64,153,167,162,248,119,200,181,49,5,49,133,173,239,
    225,125,69,101,62,231,28,231,171,148,237,164,193,101,142,177,
    249,143,20,155,117,138,76,167,214,155,143,104,224,234,158,21,
    118,243,231,89,220,235,199,2,143,216,207,100,35,140,218,116,
    185,58,185,48,54,90,124,253,205,241,212,189,183,62,140,87,
    140,184,137,199,172,180,124,4,97,224,232,69,127,204,115,180,
    254,76,186,254,161,105,245,225,113,42,55,195,8,79,104,247,
    121,168,231,201,132,119,145,167,165,233,120,237,102,171,27,199,
    169,240,226,184,213,237,244,59,136,211,130,84,96,186,184,199,
    155,220,176,3,215,198,70,166,253,69,75,182,78,224,98,143,
    124,234,98,55,91,221,58,78,69,36,255,208,146,177,250,52,
    10,27,157,184,190,219,19,180,44,225,184,119,66,45,29,175,
    70,39,191,123,229,119,124,132,150,158,224,165,123,102,212,205,
    147,40,202,99,233,157,30,160,117,199,114,235,166,104,58,54,
    91,49,150,71,75,190,246,28,122,157,16,191,61,187,61,242,
    105,118,187,217,234,234,241,42,48,37,129,35,35,94,237,132,
    162,180,80,133,23,74,56,92,105,249,40,116,165,47,149,60,
    242,48,96,24,36,111,224,92,132,66,20,182,45,75,191,136,
    192,239,190,101,13,178,115,253,25,234,250,11,41,197,146,79,
    157,171,40,99,239,58,45,14,253,24,149,114,69,240,37,160,
    231,143,74,218,46,190,17,241,21,188,29,155,196,49,199,178,
    162,204,127,243,72,27,115,170,223,28,167,21,187,161,223,93,
    243,91,90,243,10,36,239,218,204,107,89,113,167,247,142,252,
    222,67,191,69,194,3,149,47,40,124,31,49,169,144,42,162,
    26,15,150,82,79,151,180,167,102,107,163,173,145,101,240,188,
    186,210,95,76,54,125,219,145,13,25,168,213,208,247,176,204,
    244,87,183,230,53,244,95,4,120,211,228,231,221,200,70,122,
    186,135,27,203,200,179,125,239,91,201,109,64,127,243,214,218,
    177,146,13,117,241,168,5,155,126,122,208,212,250,138,60,73,
    46,104,137,80,127,195,113,50,49,124,161,239,252,83,63,116,
    94,73,55,145,185,112,180,204,47,195,6,57,58,215,35,33,
    131,86,195,90,221,141,214,20,150,233,35,156,93,13,119,101,
    244,44,68,28,171,203,61,2,157,41,86,96,189,150,116,29,
    85,151,222,162,71,175,118,68,170,90,27,73,100,251,123,140,
    253,109,212,176,253,196,159,254,50,207,100,28,219,91,242,227,
    214,230,38,34,182,191,12,167,48,221,232,234,220,145,50,171,
    232,15,95,4,251,152,170,237,236,245,131,99,170,179,74,222,
    30,138,234,19,215,141,76,59,216,58,50,92,221,200,72,165,
    122,213,100,152,78,5,250,35,49,137,151,206,95,127,36,242,
    102,203,74,10,111,246,84,66,77,209,206,239,39,69,239,164,
    82,67,59,108,190,70,31,113,121,224,242,24,201,45,15,163,
    22,177,226,110,149,73,95,77,229,76,45,30,91,177,115,122,
    6,88,88,245,155,39,253,166,251,49,53,143,113,128,3,253,
    133,171,50,86,193,34,75,125,119,65,84,177,243,46,22,70,
    198,43,197,145,225,74,177,50,84,224,63,88,140,138,73,163,
    90,172,12,143,136,31,243,179,128,133,186,106,44,204,85,196,
    127,1,200,222,99,18,
};

EmbeddedPython embedded_m5_internal_param_L1Cache_Controller(
    "m5/internal/param_L1Cache_Controller.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_L1Cache_Controller.py",
    "m5.internal.param_L1Cache_Controller",
    data_m5_internal_param_L1Cache_Controller,
    2758,
    8891);

} // anonymous namespace
