#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_Clock_vector[] = {
    120,156,189,91,125,136,36,71,21,127,221,243,177,55,115,187,
    183,187,183,123,187,247,177,185,155,124,92,50,137,122,27,53,
    49,106,194,105,140,49,36,146,139,233,141,92,178,137,118,102,
    167,107,119,123,119,182,123,210,221,187,119,19,247,148,184,167,
    241,19,21,63,80,17,17,63,144,128,32,8,130,32,8,130,
    32,8,66,64,16,4,65,80,4,65,240,63,65,16,212,247,
    123,213,61,211,243,113,234,101,186,239,118,230,93,77,119,245,
    123,191,247,234,213,171,170,87,213,77,138,255,149,248,251,206,
    26,81,120,183,65,228,240,199,160,22,209,142,65,171,6,25,
    202,32,103,158,182,75,20,220,67,78,137,174,18,173,154,164,
    76,58,224,66,129,158,53,201,155,148,103,202,212,42,200,21,
    131,58,85,82,69,90,45,209,69,111,150,138,170,76,219,85,
    10,158,39,195,48,60,131,158,118,38,200,57,68,87,153,59,
    23,42,194,240,16,225,98,85,46,86,200,57,44,23,171,228,
    76,74,225,48,117,102,72,77,210,234,20,170,173,30,97,182,
    119,49,219,105,97,251,42,216,58,124,231,24,57,71,80,157,
    113,61,131,154,69,212,20,121,211,194,101,134,28,225,178,206,
    250,204,118,43,206,146,42,208,214,81,90,61,74,138,63,179,
    116,192,42,59,71,147,138,115,221,138,115,82,113,158,86,231,
    73,241,103,78,87,44,211,74,125,129,173,231,254,155,255,213,
    217,122,20,77,50,217,83,65,232,250,158,237,122,235,190,107,
    226,126,25,4,182,110,130,76,196,70,127,8,70,127,133,196,
    226,142,25,27,253,10,49,99,3,54,109,153,116,69,10,87,
    76,234,212,105,223,160,173,34,57,5,218,103,49,37,0,216,
    48,232,192,164,231,10,168,112,133,105,145,77,115,154,138,145,
    182,248,150,152,70,115,154,160,43,37,218,47,209,202,211,251,
    38,46,108,87,40,248,30,189,184,36,76,15,9,83,147,246,
    153,22,233,160,72,87,202,116,145,43,241,165,173,10,212,55,
    158,222,103,77,249,202,74,189,200,104,47,164,212,133,42,142,
    27,120,141,29,21,77,113,217,126,168,229,55,183,237,61,213,
    140,252,160,94,77,170,248,225,185,118,35,218,180,228,153,2,
    140,177,211,142,132,151,239,169,232,48,23,214,93,207,177,119,
    124,103,183,165,162,67,96,100,175,187,45,101,219,114,243,209,
    157,182,31,68,15,7,129,31,88,176,167,92,108,249,141,238,
    19,176,102,179,229,135,170,14,105,34,198,2,251,8,181,215,
    219,194,17,0,4,39,30,118,84,216,12,220,118,196,205,164,
    57,162,54,184,213,209,64,66,194,251,153,44,111,250,59,106,
    89,53,27,203,27,106,231,222,229,181,93,183,229,44,63,104,
    61,190,220,238,68,155,190,183,204,215,92,47,82,108,128,214,
    114,90,245,115,124,255,40,152,92,114,55,108,87,224,219,155,
    170,213,86,1,172,20,158,132,0,99,198,152,52,202,70,193,
    168,27,83,92,42,241,183,96,44,153,135,141,11,46,20,104,
    66,41,56,78,49,237,42,104,63,131,182,77,10,150,224,8,
    91,252,49,208,114,236,14,43,184,103,202,189,39,161,185,190,
    186,85,64,243,234,139,251,226,60,236,69,92,243,1,180,167,
    71,226,1,37,218,42,147,246,12,118,40,237,42,65,7,148,
    171,131,141,201,204,139,20,126,153,216,146,236,19,251,20,251,
    203,65,129,12,111,134,162,42,58,28,95,93,96,129,31,21,
    151,91,169,3,254,5,105,253,104,211,13,253,75,158,216,24,
    101,233,36,43,108,153,247,117,158,88,219,98,123,133,103,248,
    194,51,254,110,173,217,240,60,63,170,53,28,167,214,136,162,
    192,93,219,141,84,88,139,252,218,217,176,142,102,179,102,19,
    7,234,242,235,180,19,135,65,227,178,195,232,31,142,219,140,
    248,199,156,252,144,86,8,85,196,141,191,233,59,33,95,7,
    139,13,21,89,0,25,193,200,190,0,17,223,176,81,21,226,
    185,222,17,254,253,96,130,68,28,176,94,78,220,37,84,173,
    245,168,42,158,215,8,67,91,144,224,186,56,25,24,239,53,
    90,187,74,184,135,204,143,1,161,168,49,100,232,102,199,1,
    57,209,80,96,123,190,231,116,24,133,219,188,3,2,142,139,
    179,77,138,187,29,99,87,155,96,90,230,255,203,198,130,217,
    44,198,14,86,78,156,12,241,44,34,105,98,35,110,101,118,
    184,3,142,29,117,83,58,191,32,151,30,118,11,74,120,216,
    90,2,185,9,228,52,200,153,68,185,108,52,156,26,212,240,
    62,112,53,69,45,81,0,198,46,36,10,56,125,189,228,68,
    175,151,112,36,91,129,183,155,232,19,61,111,47,34,234,5,
    231,65,185,170,244,163,2,133,79,33,198,162,87,8,51,116,
    0,118,101,148,122,14,46,230,176,102,160,230,161,196,55,45,
    56,92,218,235,54,82,94,103,161,37,196,229,172,19,73,20,
    179,81,67,59,155,117,10,172,74,35,236,89,3,185,57,91,
    163,246,220,102,99,200,109,192,59,156,137,221,102,74,220,165,
    202,223,25,179,89,136,45,221,29,190,230,6,220,5,190,82,
    28,225,43,183,163,84,24,214,45,23,55,137,53,122,79,202,
    77,0,194,76,3,191,192,133,206,34,240,166,29,100,145,71,
    220,139,222,34,15,162,166,12,162,119,203,32,42,3,177,76,
    38,116,0,45,72,12,213,133,18,20,95,47,208,66,60,56,
    134,21,166,237,192,191,220,169,249,235,181,72,52,67,188,123,
    224,108,120,238,108,120,63,71,178,218,121,137,33,58,150,233,
    104,21,168,54,162,13,30,125,248,114,83,201,184,36,191,108,
    91,7,23,91,2,141,29,143,119,236,43,199,96,54,51,177,
    167,132,217,48,10,16,93,51,180,104,181,107,81,0,124,12,
    44,171,98,206,130,177,200,126,81,53,68,174,173,99,167,76,
    109,228,46,127,223,5,19,67,55,69,152,70,90,43,26,149,
    0,6,116,235,245,125,109,159,9,92,107,153,159,127,127,210,
    230,229,94,155,227,91,72,156,245,101,146,169,157,65,31,39,
    180,42,55,94,236,172,93,223,70,51,206,161,250,7,73,188,
    122,196,120,43,113,96,5,99,172,212,224,240,16,222,39,85,
    245,240,251,24,125,34,213,37,146,65,178,16,79,222,210,131,
    100,177,27,67,196,29,254,175,129,176,216,31,108,208,4,155,
    141,16,213,116,4,233,245,178,94,48,238,78,188,56,130,102,
    227,27,135,52,51,27,114,159,235,121,6,134,153,83,198,156,
    153,106,239,55,130,188,169,219,212,70,114,109,108,8,103,232,
    218,35,159,173,163,238,179,144,83,20,100,211,19,50,154,235,
    121,199,163,204,178,193,108,186,78,91,74,156,246,79,93,167,
    85,50,68,92,149,233,57,168,137,246,59,48,13,94,229,240,
    108,7,139,138,34,169,18,173,150,73,77,96,22,141,181,75,
    41,89,187,148,227,181,75,111,185,51,41,229,138,148,167,100,
    185,67,88,163,196,203,157,233,100,185,195,11,149,41,41,204,
    198,43,26,94,155,196,107,152,57,172,97,80,152,143,215,48,
    171,188,234,57,42,133,133,120,177,178,186,136,229,26,10,199,
    177,38,66,225,4,57,11,82,56,73,206,162,20,78,161,63,
    34,254,75,15,73,190,18,21,17,67,251,6,76,105,174,11,
    186,33,187,62,167,221,9,228,114,134,209,6,30,245,64,171,
    177,179,230,52,206,111,128,33,184,54,147,14,108,38,16,103,
    210,16,209,249,140,107,161,148,159,247,38,80,247,50,140,52,
    111,225,231,187,16,165,95,57,126,83,194,203,83,155,170,182,
    163,118,214,120,9,184,233,182,107,235,173,198,134,88,185,16,
    171,240,68,162,66,36,126,53,56,157,8,239,2,245,107,77,
    223,227,112,190,11,121,53,71,241,226,72,57,181,55,212,100,
    44,168,185,97,173,177,198,119,27,205,72,119,166,254,94,47,
    115,208,70,176,17,202,116,115,251,18,138,25,183,146,205,75,
    91,151,167,215,46,245,15,176,125,174,4,24,78,207,131,4,
    105,169,27,0,150,40,211,208,143,6,217,233,250,76,130,163,
    235,51,83,218,224,91,70,50,197,75,59,140,172,255,230,135,
    66,131,45,211,247,92,208,34,112,249,61,219,233,229,94,119,
    164,74,59,122,23,180,30,101,134,113,207,13,227,118,189,102,
    144,154,26,224,9,47,67,7,64,187,66,68,144,106,252,204,
    176,59,42,141,221,58,159,169,221,5,58,36,236,142,13,125,
    113,4,116,94,216,54,188,166,74,193,191,55,91,248,232,122,
    137,148,203,99,171,48,194,227,213,11,187,141,86,126,248,209,
    251,69,196,135,70,196,141,235,232,171,35,252,166,233,183,59,
    121,116,85,113,25,48,255,112,230,144,61,117,57,202,13,50,
    152,191,52,30,228,17,46,110,11,104,219,206,5,118,156,196,
    17,1,87,51,135,222,14,212,158,235,239,134,185,65,79,4,
    188,60,118,199,92,24,70,223,112,246,6,66,75,198,145,17,
    139,136,88,200,167,198,86,224,216,40,207,81,47,176,223,228,
    22,90,202,226,60,144,241,217,124,224,123,42,127,248,144,241,
    249,177,225,143,236,183,46,175,36,251,20,200,216,127,226,89,
    161,72,249,98,78,42,132,187,107,55,64,5,145,242,149,60,
    58,177,109,231,220,8,146,140,209,66,190,70,52,148,250,130,
    2,143,140,82,224,51,163,98,232,72,5,6,155,224,109,121,
    40,32,66,190,65,195,35,64,223,210,98,191,183,180,16,0,
    249,13,73,46,223,181,237,111,246,0,213,69,247,110,26,75,
    210,10,58,15,209,14,252,182,10,162,142,206,232,64,188,117,
    14,228,206,190,224,226,168,150,138,148,221,111,221,104,134,186,
    73,99,71,241,242,206,239,216,118,108,17,126,192,182,101,213,
    96,189,3,228,65,144,135,64,30,6,121,4,228,81,144,247,
    130,60,14,242,4,200,147,32,43,32,72,139,89,23,65,158,
    1,65,90,196,122,174,207,88,217,172,108,238,225,231,215,193,
    8,134,41,27,167,204,138,89,54,42,70,197,172,20,38,249,
    175,114,173,63,51,222,56,5,31,189,135,56,156,153,225,229,
    242,255,206,204,232,157,231,56,63,83,78,18,50,19,73,66,
    70,182,154,81,168,72,90,70,231,106,42,73,174,70,231,100,
    38,147,156,204,84,146,147,57,146,228,100,166,147,156,204,76,
    146,147,153,77,114,50,71,147,156,204,92,146,147,153,79,114,
    50,199,146,156,204,66,146,147,89,76,114,50,199,147,156,204,
    9,114,142,39,89,154,19,113,150,198,57,41,133,37,114,78,
    73,225,38,114,150,164,112,154,156,155,164,112,134,156,211,82,
    168,145,115,70,10,55,147,83,147,194,45,228,220,44,133,91,
    201,185,69,10,183,145,115,171,20,206,146,115,155,20,110,39,
    117,7,109,213,105,245,78,114,206,202,149,187,144,26,66,174,
    126,172,212,80,198,195,163,172,238,191,75,89,102,132,172,251,
    114,68,104,189,149,226,100,243,181,178,65,215,57,159,61,54,
    208,55,36,36,33,104,228,22,245,18,1,223,167,255,18,134,
    171,93,187,31,12,228,121,154,148,79,68,150,152,245,202,8,
    76,215,97,204,227,131,198,180,145,54,126,81,5,126,78,11,
    27,189,205,215,149,241,131,241,224,15,249,130,109,175,249,126,
    43,215,69,153,22,240,195,241,128,207,15,3,111,41,47,39,
    220,122,220,20,254,63,74,193,78,111,241,8,236,57,234,159,
    10,233,237,154,97,240,39,134,193,111,168,40,108,185,77,172,
    11,122,185,87,67,250,14,232,86,134,218,76,82,188,81,28,
    11,252,241,64,75,92,255,236,110,132,62,97,79,159,220,38,
    120,90,145,158,164,159,228,212,54,60,97,26,106,27,107,27,
    164,149,135,66,61,113,63,29,187,101,70,132,39,102,207,241,
    120,39,207,134,57,156,232,161,5,253,44,15,53,216,127,111,
    140,26,93,65,63,207,67,141,240,70,169,209,21,244,11,26,
    43,240,206,12,234,208,246,219,185,4,93,152,150,121,255,50,
    5,247,181,45,158,231,6,17,55,218,109,229,57,249,230,95,
    180,140,95,141,103,235,163,131,200,213,78,59,202,39,51,45,
    217,116,112,255,245,120,144,103,7,33,135,238,139,185,108,123,
    233,67,115,204,252,213,177,29,100,24,243,165,70,59,229,30,
    217,206,238,53,112,150,240,155,140,157,99,77,109,184,94,110,
    206,33,220,127,155,113,236,64,55,204,43,118,48,239,223,141,
    7,119,40,112,4,249,153,24,49,67,179,255,125,198,29,48,
    200,203,200,240,99,48,255,67,198,126,220,108,169,70,62,107,
    81,125,176,155,185,255,113,60,200,39,7,33,111,224,232,82,
    139,139,185,45,163,1,170,79,202,159,199,83,97,104,225,199,
    67,173,189,214,104,110,231,183,165,21,11,248,203,0,240,235,
    159,70,13,15,139,65,35,84,249,77,160,100,108,132,136,191,
    14,64,79,206,174,10,244,119,247,160,51,110,253,158,197,188,
    100,52,146,35,194,120,203,227,162,119,146,138,220,117,112,28,
    244,29,56,14,186,47,199,254,108,83,159,8,237,101,62,74,
    148,142,154,158,186,100,167,85,214,89,40,236,124,91,56,227,
    147,90,151,64,119,185,155,97,158,4,207,255,141,40,57,149,
    55,109,20,140,121,99,106,156,205,140,126,215,219,13,55,181,
    239,229,54,37,147,99,180,137,152,191,103,28,176,214,3,223,
    203,103,243,29,78,32,220,255,49,30,228,161,65,33,183,158,
    142,65,1,204,255,153,2,252,154,215,226,195,51,247,48,116,
    55,188,148,183,159,207,193,87,100,250,46,130,254,69,227,134,
    170,225,41,132,146,9,113,110,177,74,230,17,34,195,48,50,
    7,239,122,161,10,162,124,193,107,25,197,20,248,215,22,101,
    134,18,132,108,21,21,236,229,124,234,33,22,50,97,100,59,
    56,55,27,237,70,211,205,105,233,135,193,57,17,80,29,1,
    188,111,163,244,134,158,193,156,50,226,61,144,250,235,40,189,
    71,106,125,0,68,118,69,123,27,162,216,37,144,140,190,165,
    64,112,160,214,194,145,82,11,39,57,45,28,144,180,94,0,
    1,67,11,103,246,172,75,32,29,74,6,210,43,32,31,1,
    121,9,228,0,228,99,32,56,132,99,125,18,228,211,32,56,
    19,98,125,14,228,11,32,178,47,251,37,16,236,243,91,95,
    5,249,58,8,54,157,45,108,244,90,223,2,249,118,95,191,
    138,119,109,251,198,116,27,53,158,239,51,99,54,182,108,240,
    243,223,1,35,188,116,81,54,78,25,101,19,123,168,215,245,
    55,49,184,199,90,49,36,14,15,188,146,170,81,163,165,244,
    11,2,157,208,194,21,107,186,171,189,62,222,20,239,108,163,
    33,101,112,190,208,216,209,111,196,201,123,96,214,173,32,216,
    57,180,238,232,182,50,50,179,242,86,134,126,151,133,167,68,
    114,130,89,14,44,91,111,6,193,126,113,132,159,3,71,13,
    176,13,30,240,218,42,228,11,98,140,225,44,111,186,74,198,
    230,215,71,209,245,187,54,231,145,140,11,177,163,135,247,231,
    42,211,21,110,10,188,168,89,48,170,60,161,42,22,38,103,
    42,197,201,195,149,98,101,162,32,175,73,77,25,115,102,181,
    88,57,188,240,246,138,81,53,23,182,43,198,127,0,156,237,
    219,28,
};

EmbeddedPython embedded_m5_internal_Clock_vector(
    "m5/internal/Clock_vector.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/Clock_vector.py",
    "m5.internal.Clock_vector",
    data_m5_internal_Clock_vector,
    3378,
    15721);

} // anonymous namespace
