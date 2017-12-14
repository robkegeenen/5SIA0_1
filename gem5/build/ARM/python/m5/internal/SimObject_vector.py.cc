#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_SimObject_vector[] = {
    120,156,189,91,107,136,36,87,21,62,85,253,152,237,158,153,
    157,153,157,231,238,206,238,118,30,155,116,162,238,248,200,26,
    53,97,53,198,24,18,201,198,212,68,54,153,68,43,53,93,
    119,102,106,166,187,170,83,85,179,187,29,103,149,56,171,241,
    137,138,15,84,68,68,80,81,4,65,16,4,65,16,4,65,
    16,2,130,32,8,130,34,8,130,224,63,65,80,207,119,170,
    170,187,186,167,86,221,237,174,201,236,156,220,169,190,125,94,
    247,187,231,222,115,238,173,6,197,255,149,248,247,29,53,162,
    224,105,141,200,230,127,26,53,137,90,26,173,105,164,41,141,
    236,57,218,41,145,127,31,217,37,186,78,180,166,147,210,105,
    159,27,5,122,78,39,119,66,190,83,166,102,65,158,104,212,
    169,146,42,210,90,137,46,185,51,84,84,101,218,169,146,255,
    2,105,154,230,106,244,140,61,70,246,17,186,206,220,185,81,
    17,134,71,8,15,171,242,176,66,246,184,60,172,146,61,33,
    141,113,234,76,147,154,160,181,73,116,91,59,202,108,239,101,
    182,83,194,246,85,176,181,249,147,121,178,143,162,59,235,245,
    44,122,22,209,83,228,77,9,151,105,178,133,203,6,219,51,
    211,237,56,67,170,64,219,199,104,237,24,41,254,55,67,251,
    108,114,108,206,44,173,205,37,166,205,167,218,11,210,62,150,
    48,155,237,50,91,20,102,75,180,182,68,138,255,45,70,204,
    202,180,90,95,96,15,59,255,230,255,234,236,97,10,39,152,
    92,86,126,224,120,174,233,184,27,158,163,227,243,50,8,198,
    163,1,50,22,15,204,195,24,152,239,145,140,138,173,199,3,
    115,141,152,177,6,133,154,58,93,147,198,53,157,58,117,218,
    211,104,187,72,118,129,246,88,76,9,10,108,106,180,175,211,
    243,5,116,184,198,180,200,238,59,77,197,48,26,149,109,113,
    95,196,105,140,174,149,104,175,68,171,207,236,233,120,176,83,
    33,255,219,244,210,178,48,61,34,76,117,218,99,90,164,253,
    34,93,43,211,37,238,196,143,182,43,48,95,123,102,143,45,
    229,39,171,245,34,107,123,49,101,46,76,177,29,223,181,90,
    42,156,225,182,185,234,180,158,92,223,86,141,208,188,204,196,
    243,235,213,164,155,23,156,107,91,225,150,33,223,43,192,33,
    173,118,40,252,60,87,133,227,220,216,112,92,219,108,121,246,
    110,83,133,71,192,204,220,112,154,202,52,229,195,199,90,109,
    207,15,31,241,125,207,55,224,83,121,216,244,172,238,55,224,
    209,70,211,11,84,29,210,68,140,1,246,33,122,111,180,133,
    35,20,16,93,241,101,91,5,13,223,105,135,60,84,17,71,
    244,6,183,58,6,73,72,240,118,38,43,91,94,75,173,168,
    134,181,178,169,90,231,87,214,119,157,166,189,242,144,241,196,
    74,187,19,110,121,238,10,63,115,220,80,177,19,154,43,131,
    230,159,227,62,199,192,232,138,179,105,58,98,130,185,165,154,
    109,229,79,226,233,9,8,209,166,181,9,173,172,21,180,186,
    54,201,173,18,255,22,180,101,125,92,187,232,192,136,6,12,
    3,128,138,105,200,96,28,53,218,209,201,95,6,32,182,249,
    159,134,17,100,88,172,226,51,93,62,123,10,214,71,79,183,
    11,24,230,232,225,158,128,136,209,196,61,31,196,184,186,36,
    72,40,209,118,153,34,132,48,176,34,200,248,29,80,238,14,
    54,58,51,47,82,240,37,98,111,50,54,246,40,198,205,126,
    129,52,119,154,194,42,38,39,63,93,96,129,31,17,232,173,
    214,161,254,69,65,64,184,229,4,222,21,87,252,140,182,76,
    150,85,246,204,123,59,145,211,130,51,252,224,89,111,183,214,
    176,92,215,11,107,150,109,215,172,48,244,157,245,221,80,5,
    181,208,171,157,13,234,24,58,99,38,1,81,151,95,167,157,
    128,6,3,204,160,137,254,176,29,30,11,51,156,149,63,100,
    20,2,21,50,0,182,60,59,224,231,96,177,169,66,3,74,
    134,112,178,39,138,8,62,76,116,133,120,238,119,148,255,126,
    40,209,68,64,88,47,39,144,9,84,115,35,172,10,250,172,
    32,48,69,19,60,23,160,129,241,101,171,185,171,132,123,192,
    252,88,33,52,35,29,70,12,181,37,168,157,88,41,170,187,
    158,107,119,88,19,167,113,55,132,44,9,224,38,4,114,243,
    12,183,49,166,101,254,127,89,91,208,27,197,24,100,229,4,
    104,136,109,33,201,48,107,241,72,51,232,246,57,142,212,117,
    9,4,162,189,204,180,219,209,194,151,141,101,144,83,32,167,
    65,206,36,6,142,206,202,201,65,43,239,7,103,93,76,19,
    35,224,244,66,98,132,221,55,91,142,247,102,11,71,182,85,
    160,94,199,220,232,161,190,136,40,232,95,0,229,174,50,159,
    10,188,126,34,230,98,118,8,51,76,4,134,52,90,61,160,
    139,75,140,105,152,122,36,193,168,1,224,165,209,183,153,66,
    159,129,209,16,232,25,199,147,136,102,162,71,4,58,227,36,
    88,149,50,124,90,3,185,109,244,142,237,193,103,243,0,124,
    30,128,144,233,24,62,147,2,155,42,255,78,235,141,66,236,
    237,238,146,54,59,0,27,96,166,152,129,153,187,208,42,28,
    180,47,55,184,196,86,189,59,5,23,40,162,167,149,191,200,
    141,206,34,116,78,3,101,145,87,226,75,238,34,47,174,186,
    44,174,175,151,197,85,22,104,217,136,68,1,181,32,49,53,
    106,148,96,252,70,129,22,226,69,51,168,48,109,251,222,213,
    78,205,219,168,133,98,29,226,223,131,103,131,115,103,131,7,
    56,178,213,46,72,76,137,98,91,20,189,124,213,70,244,193,
    87,31,185,218,80,178,86,201,95,166,25,5,27,83,2,143,
    25,175,129,140,153,121,184,78,79,124,42,97,55,8,125,68,
    219,17,123,181,218,245,42,148,124,28,108,171,226,210,130,182,
    200,248,168,106,34,219,140,226,169,108,123,228,83,254,125,39,
    220,12,251,20,97,27,106,172,70,154,137,210,80,223,120,109,
    31,6,70,166,178,177,194,60,222,151,140,125,185,55,246,248,
    45,36,192,125,133,100,235,167,209,199,8,163,203,131,24,3,
    183,139,115,12,231,44,186,127,128,4,225,25,235,176,196,133,
    85,172,189,210,131,195,69,112,191,116,141,150,229,199,233,227,
    169,233,145,44,158,133,120,115,151,94,60,139,221,152,34,176,
    248,191,22,200,98,127,240,193,48,108,89,1,186,69,17,165,
    55,227,122,1,186,187,41,227,136,58,58,140,28,137,24,154,
    144,253,124,15,33,88,126,78,106,179,122,106,220,223,0,242,
    198,238,144,107,201,179,145,168,113,134,110,188,42,154,81,52,
    126,14,178,138,162,221,212,152,172,246,209,190,228,49,102,107,
    49,155,46,128,75,9,128,255,212,5,176,146,165,227,186,108,
    227,65,117,140,227,190,174,113,198,196,187,33,36,40,69,82,
    37,90,43,147,26,195,110,27,121,80,41,201,131,202,113,30,
    212,75,157,38,164,93,145,246,164,164,78,132,124,39,78,157,
    166,146,212,137,147,158,73,105,204,196,217,17,231,57,113,62,
    52,139,124,8,141,185,56,31,90,155,71,82,131,198,66,156,
    212,112,66,195,169,31,26,75,200,175,208,56,78,246,130,52,
    78,144,189,40,141,147,152,155,88,19,100,166,36,191,18,37,
    17,83,251,22,82,25,178,139,209,96,118,177,23,193,10,228,
    234,136,163,15,144,245,96,211,106,173,219,214,133,77,48,5,
    231,70,50,153,245,68,205,233,180,154,152,136,218,141,52,149,
    63,207,39,234,94,30,113,228,121,51,243,232,170,41,243,204,
    246,26,18,110,158,222,82,181,150,106,173,115,202,184,229,180,
    107,27,77,107,83,188,93,136,205,120,50,49,35,20,124,13,
    110,55,130,123,65,189,90,195,115,57,204,239,66,94,205,86,
    156,72,41,187,246,186,154,172,17,53,39,168,89,235,252,169,
    213,8,163,137,213,31,5,100,175,106,249,155,129,108,75,119,
    174,160,153,195,104,153,156,14,59,188,21,119,168,127,241,237,
    131,21,84,177,123,104,18,109,75,221,128,176,76,35,95,18,
    48,48,173,46,126,18,93,186,248,153,140,28,191,173,37,91,
    193,52,120,36,103,156,59,16,42,76,217,238,231,166,49,130,
    153,215,243,97,148,34,118,87,177,52,240,187,138,71,43,208,
    65,221,103,15,234,238,184,13,63,181,125,192,55,220,17,131,
    1,99,12,49,126,10,8,35,211,223,86,105,253,141,11,35,
    247,191,168,15,41,187,67,171,191,152,161,62,39,197,150,219,
    80,41,19,206,143,222,4,76,199,68,210,213,161,205,200,152,
    1,234,197,93,171,153,175,13,136,10,34,230,131,25,241,228,
    38,230,111,6,134,26,94,187,147,215,244,21,248,64,192,135,
    70,174,182,171,174,134,185,170,13,1,47,15,167,118,6,228,
    77,81,220,52,115,83,61,46,10,137,144,235,35,87,191,237,
    171,203,142,183,27,228,170,126,34,228,149,161,39,235,194,65,
    11,44,251,242,64,200,201,33,106,34,9,137,5,125,114,104,
    35,230,179,80,164,94,100,12,229,26,114,202,2,36,200,249,
    76,62,38,184,234,112,76,128,156,207,13,109,66,230,92,118,
    56,35,237,51,34,7,44,197,187,73,145,244,133,156,204,8,
    118,215,15,201,12,145,244,229,60,38,182,105,30,194,96,72,
    145,39,18,244,85,162,3,101,53,24,241,104,150,17,159,206,
    138,175,153,70,12,14,197,91,243,50,66,4,125,157,14,174,
    16,125,233,201,94,47,61,17,37,242,93,182,28,238,97,154,
    223,232,41,85,23,31,116,203,100,82,170,136,106,27,109,223,
    107,43,63,236,68,213,34,148,107,141,115,32,247,244,5,29,
    91,53,85,168,204,126,47,135,211,212,45,80,219,138,83,69,
    175,99,154,177,87,248,11,166,41,89,135,1,179,140,135,64,
    30,6,121,4,228,81,144,199,64,222,3,242,4,200,147,32,
    79,129,172,130,160,228,102,92,2,121,22,4,165,22,227,249,
    62,135,141,46,59,186,143,121,108,128,25,156,83,214,78,234,
    21,189,172,85,180,138,94,41,76,240,79,229,70,63,186,184,
    32,226,211,59,195,60,88,245,225,20,252,127,87,125,162,19,
    242,184,246,83,78,138,61,99,73,177,71,142,196,209,168,72,
    201,39,170,3,85,146,58,80,84,239,153,72,234,61,147,73,
    189,231,104,82,239,153,74,234,61,211,73,189,103,38,169,247,
    28,75,234,61,179,73,189,103,46,169,247,204,39,245,158,133,
    164,222,179,152,212,123,150,146,122,207,113,178,151,146,10,208,
    241,184,2,100,159,144,198,50,217,39,165,113,138,236,101,105,
    156,38,251,148,52,206,144,125,90,26,53,178,207,72,227,54,
    178,107,210,184,157,236,219,164,113,7,217,183,75,227,78,178,
    239,144,198,89,178,239,148,198,93,164,238,166,237,58,173,221,
    67,246,89,121,114,47,202,78,56,27,24,170,236,148,195,242,
    41,213,130,239,210,40,171,77,198,253,57,107,105,188,133,226,
    194,246,141,42,77,55,185,7,62,158,49,79,36,76,33,144,
    228,26,13,19,33,223,167,255,18,162,171,221,49,216,31,168,
    35,53,40,191,104,45,241,236,7,25,122,221,132,99,151,179,
    28,107,162,84,253,146,242,189,28,19,164,232,216,177,43,231,
    135,195,153,145,137,15,211,92,247,188,102,238,73,94,36,228,
    71,195,25,176,148,109,64,83,185,57,234,31,173,181,34,227,
    199,41,245,211,71,78,162,254,44,245,111,163,162,227,163,131,
    70,156,202,54,98,83,133,65,211,105,32,207,232,213,127,53,
    153,91,160,219,35,182,106,130,226,3,237,88,232,79,6,70,
    230,230,119,136,55,176,43,232,217,149,235,70,49,50,168,39,
    237,167,57,142,21,111,188,14,140,149,177,3,210,204,203,176,
    158,200,159,13,61,82,55,8,103,44,130,227,120,43,239,129,
    26,79,236,137,132,253,60,47,115,24,219,135,103,78,87,216,
    47,242,50,39,56,76,115,186,194,126,73,67,5,236,185,44,
    91,218,94,59,183,96,13,87,51,255,95,165,212,190,245,218,
    195,1,205,173,118,91,185,118,254,117,160,72,206,175,135,243,
    253,66,150,5,170,213,14,243,171,160,75,229,31,18,94,29,
    78,245,249,44,213,3,231,165,220,142,238,162,203,130,44,224,
    55,67,3,39,91,247,43,86,59,5,155,209,103,22,145,1,
    44,229,183,57,128,102,93,109,58,110,174,160,17,9,191,203,
    33,214,96,186,230,25,107,152,255,239,135,83,59,51,208,248,
    249,186,28,49,38,18,241,135,28,38,170,159,167,211,129,115,
    8,248,99,14,56,111,52,149,149,95,158,28,93,130,103,9,
    127,30,78,245,211,89,170,111,226,42,87,179,233,53,114,77,
    245,161,92,159,164,191,12,103,74,102,66,202,203,183,185,110,
    53,118,242,61,182,139,133,252,117,192,128,155,223,174,101,47,
    179,190,21,168,124,55,106,178,214,66,204,223,6,76,72,238,
    251,138,9,239,234,153,192,250,71,239,171,204,73,21,38,185,
    90,141,183,101,46,185,39,168,200,83,11,215,103,223,142,235,
    179,123,114,61,210,212,163,27,180,189,106,77,137,210,209,214,
    85,87,204,65,211,163,74,26,78,254,13,220,127,74,229,71,
    240,129,124,58,226,250,14,202,233,127,39,74,110,48,78,105,
    5,109,78,155,188,213,229,251,68,38,36,119,131,173,8,147,
    185,110,253,228,26,114,34,234,31,57,4,184,13,223,115,243,
    187,136,0,112,136,132,127,14,167,122,230,162,146,107,68,192,
    162,2,1,255,74,41,126,203,53,131,236,204,33,8,156,77,
    55,53,27,46,228,132,33,73,31,68,152,166,13,27,218,178,
    183,38,74,54,226,185,198,54,217,159,136,156,98,62,70,56,
    110,160,252,48,127,35,34,57,99,41,35,110,45,42,101,22,
    62,217,67,202,191,124,8,183,67,98,65,85,109,244,139,125,
    195,106,91,13,39,199,148,20,139,125,34,100,50,195,128,190,
    3,228,67,191,223,58,173,197,103,65,245,215,80,250,236,216,
    120,63,136,156,22,247,14,138,113,74,34,167,25,134,2,193,
    165,101,3,87,118,13,220,146,53,112,241,212,120,17,4,12,
    13,220,129,52,174,128,116,40,89,144,175,129,124,24,228,101,
    144,125,144,143,130,224,242,146,241,9,144,79,129,224,14,141,
    241,89,144,207,131,200,121,245,23,65,112,23,194,248,10,200,
    215,64,112,32,111,224,0,220,248,38,200,183,250,230,92,124,
    154,125,96,127,96,162,215,11,125,238,28,157,79,45,230,241,
    29,48,195,75,47,101,237,164,86,214,113,190,124,83,63,99,
    131,231,207,21,77,226,246,192,235,194,145,230,242,114,152,188,
    156,209,9,12,60,49,166,186,94,136,174,135,197,39,255,24,
    80,89,224,47,90,173,232,45,69,121,47,207,184,3,4,39,
    170,198,221,221,209,6,83,121,35,38,122,159,136,183,89,114,
    91,92,46,135,27,111,2,193,89,122,136,63,7,174,100,224,
    154,128,207,121,93,192,15,228,243,214,249,115,137,195,206,181,
    45,223,106,245,70,66,94,190,109,157,151,119,131,211,221,108,
    223,226,246,252,192,83,142,0,142,213,228,136,44,62,206,46,
    140,167,165,231,48,186,209,155,5,209,235,84,23,80,167,12,
    46,200,20,154,208,42,83,21,30,105,188,155,91,208,170,188,
    247,43,22,38,166,43,197,137,241,74,177,50,86,144,183,225,
    38,181,89,189,90,172,140,47,188,173,162,85,185,39,126,22,
    118,42,218,127,0,7,200,163,30,
};

EmbeddedPython embedded_m5_internal_SimObject_vector(
    "m5/internal/SimObject_vector.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/SimObject_vector.py",
    "m5.internal.SimObject_vector",
    data_m5_internal_SimObject_vector,
    3433,
    16270);

} // anonymous namespace
