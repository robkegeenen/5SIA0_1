#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_FUDesc[] = {
    120,156,181,88,109,83,220,214,21,62,87,210,46,236,2,6,
    140,1,219,16,179,109,199,205,214,211,66,155,198,117,103,66,
    220,186,121,153,105,166,197,169,54,25,59,36,83,85,172,46,
    160,101,87,218,145,4,120,51,208,15,197,125,153,126,239,79,
    232,135,254,155,254,163,246,60,231,74,90,1,102,38,51,217,
    56,236,205,213,125,57,247,188,60,231,229,222,46,229,255,106,
    252,251,117,139,40,253,167,34,10,248,79,81,159,104,160,104,
    87,145,210,138,130,59,116,84,163,228,93,10,106,244,154,104,
    215,34,109,209,5,119,108,250,210,162,104,86,246,212,169,111,
    203,136,162,81,147,180,67,187,53,122,17,45,146,163,235,116,
    212,164,228,79,164,148,138,20,189,12,166,40,152,166,215,76,
    157,59,13,33,56,77,24,108,202,96,131,130,25,25,108,82,
    48,43,157,25,26,45,144,158,165,221,57,44,219,189,197,100,
    31,49,217,121,33,251,95,144,13,120,102,153,130,91,88,206,
    124,125,129,149,14,86,202,121,243,66,101,161,224,114,145,118,
    111,23,253,165,74,255,78,165,191,92,233,175,84,250,171,210,
    103,110,110,83,239,46,245,238,81,239,62,237,179,130,22,203,
    147,215,72,219,212,91,167,221,117,210,252,183,70,23,172,195,
    224,118,101,199,91,178,99,169,220,241,64,118,108,208,238,6,
    105,254,123,96,118,212,169,211,94,97,187,132,255,227,127,109,
    182,11,101,179,220,156,232,36,13,227,200,11,163,253,56,180,
    48,95,71,3,43,118,209,76,229,230,252,0,230,252,15,137,
    45,3,43,55,231,57,49,97,5,89,250,22,157,75,231,220,
    162,81,155,206,20,245,28,10,108,58,227,99,106,96,224,64,
    209,133,69,95,217,88,112,206,173,195,74,127,64,78,102,108,
    217,19,165,27,74,83,116,94,163,179,26,117,94,158,89,24,
    56,106,80,242,111,250,122,93,136,78,11,81,139,206,184,117,
    232,194,161,243,58,189,224,69,60,212,107,64,124,245,242,140,
    37,229,145,78,219,97,110,119,42,226,66,148,32,76,34,127,
    160,179,57,238,123,67,63,241,7,222,199,159,127,168,211,110,
    187,89,44,137,211,205,161,159,29,186,178,199,134,50,6,195,
    76,104,197,145,206,102,184,179,31,70,129,55,136,131,227,190,
    206,166,65,200,219,15,251,218,243,100,242,183,131,97,156,100,
    31,37,73,156,184,208,167,12,246,99,191,220,1,109,118,251,
    113,170,219,56,77,142,113,65,62,195,234,253,161,80,4,3,
    194,39,54,7,204,94,18,14,51,54,147,161,136,213,160,214,
    134,129,164,73,223,227,102,235,48,30,232,45,221,245,183,14,
    244,224,241,214,222,113,216,15,182,158,185,191,223,26,142,178,
    195,56,218,226,177,48,202,52,43,160,191,85,21,125,147,231,
    111,131,200,105,120,224,133,194,190,119,168,251,67,157,64,75,
    233,125,28,160,22,212,172,170,43,91,181,213,28,247,106,252,
    179,213,186,53,163,118,66,8,208,133,80,0,142,83,133,10,
    236,167,232,200,162,100,29,64,232,241,159,130,229,24,14,29,
    204,89,50,247,7,72,110,70,123,54,204,107,6,207,4,60,
    140,34,94,185,13,123,70,36,8,168,81,175,78,6,25,12,
    40,3,149,100,132,150,151,131,140,197,196,29,74,255,69,172,
    73,198,196,25,229,120,185,176,73,69,11,148,53,225,202,60,
    186,194,7,254,69,32,215,105,131,253,29,177,126,118,24,166,
    241,105,36,58,70,95,156,164,195,154,249,116,244,124,175,167,
    187,89,186,193,3,95,196,199,173,174,31,69,113,214,242,131,
    160,229,103,89,18,238,29,103,58,109,101,113,235,97,218,134,
    217,220,197,2,64,37,189,209,176,0,12,140,203,128,49,31,
    65,216,205,248,99,73,62,196,10,169,206,216,248,135,113,144,
    242,56,72,28,232,204,5,147,25,148,28,11,35,130,13,15,
    75,113,60,175,187,197,223,207,10,78,4,128,237,122,1,151,
    84,247,247,179,166,32,207,79,83,79,56,193,184,128,12,132,
    79,252,254,177,22,234,41,211,99,134,208,53,60,76,16,102,
    119,193,114,33,161,176,29,197,81,48,98,46,194,238,219,56,
    224,174,128,109,86,224,182,204,80,155,226,182,206,255,175,171,
    21,171,235,228,0,171,23,32,67,60,203,72,76,172,114,43,
    51,224,46,56,118,180,45,113,126,225,92,60,236,251,232,97,
    179,187,142,230,45,52,15,208,108,20,194,77,70,194,185,171,
    18,62,1,85,75,196,18,1,160,108,187,16,32,184,228,37,
    247,198,94,194,145,172,3,180,91,240,137,49,218,29,68,189,
    228,41,90,94,42,126,100,83,250,25,98,44,188,66,136,193,
    1,24,202,232,141,1,46,234,112,23,32,230,116,129,77,23,
    128,171,162,238,160,130,58,23,150,16,200,185,247,138,40,230,
    97,133,1,155,187,6,82,181,55,232,179,133,230,123,147,85,
    234,24,54,7,215,96,3,218,233,66,14,155,57,129,75,147,
    127,11,86,215,206,53,93,166,175,165,43,112,1,86,156,55,
    96,229,135,232,217,215,101,251,78,96,146,75,244,113,5,38,
    96,194,170,50,190,195,157,209,42,248,173,2,100,149,51,238,
    139,104,149,147,168,37,73,244,167,146,68,37,17,75,153,98,
    2,168,45,49,212,116,106,16,124,223,166,149,60,57,166,13,
    110,135,73,252,106,212,138,247,91,153,72,134,120,183,253,48,
    221,124,152,190,199,145,172,245,84,98,136,137,101,38,90,37,
    122,136,104,131,173,31,189,234,106,201,75,242,229,121,38,184,
    120,18,104,188,60,223,49,86,150,161,54,171,208,167,132,217,
    52,75,16,93,39,168,209,102,169,81,48,248,9,72,54,69,
    157,182,90,101,92,52,149,156,235,153,216,41,165,141,204,242,
    239,55,80,49,100,211,132,2,213,237,24,174,132,97,176,238,
    254,248,146,237,39,194,174,187,197,251,63,47,108,94,31,219,
    28,63,187,0,235,223,73,74,59,69,127,35,88,149,141,151,
    131,181,196,54,204,184,132,229,127,36,65,245,27,242,173,196,
    129,14,114,172,172,224,240,144,62,145,165,38,253,126,66,255,
    168,184,68,145,36,237,188,120,171,38,73,167,140,33,2,135,
    111,148,8,157,203,193,6,38,56,244,83,44,51,17,100,236,
    101,227,96,92,22,94,28,65,39,131,141,105,67,204,195,185,
    95,141,145,129,52,179,166,150,172,138,189,127,134,230,157,210,
    212,170,24,251,214,44,108,208,205,153,207,51,81,247,75,156,
    227,8,103,243,83,146,127,205,246,18,172,181,2,172,239,148,
    96,213,146,26,94,75,89,142,214,130,221,46,44,197,247,38,
    174,114,112,77,113,72,215,104,183,14,88,75,229,169,114,212,
    171,34,184,32,20,93,202,59,34,245,142,209,71,105,58,99,
    21,52,175,38,232,180,48,204,118,223,31,236,5,254,211,1,
    8,130,106,183,240,3,171,96,113,161,202,34,48,172,110,226,
    82,62,31,23,172,158,76,208,97,127,193,251,75,22,5,158,
    65,220,21,47,253,236,80,183,6,122,176,199,55,169,195,112,
    216,218,239,251,7,162,101,59,23,225,121,33,66,38,102,186,
    154,149,211,71,104,227,86,55,142,56,42,30,119,179,56,105,
    5,154,239,24,58,104,253,164,37,33,181,21,166,45,127,143,
    103,253,110,102,48,121,217,121,164,148,243,147,131,84,80,115,
    116,138,238,132,173,228,241,13,49,228,42,53,166,50,79,153,
    251,75,25,33,165,254,52,16,231,148,194,183,135,108,100,130,
    5,142,119,55,209,252,136,38,31,72,223,229,253,125,16,130,
    232,117,181,102,53,44,169,217,205,138,79,177,58,189,238,65,
    167,223,196,131,204,155,67,238,71,117,172,212,83,184,130,162,
    109,32,144,238,54,139,193,25,105,103,101,112,174,120,214,184,
    37,131,243,242,84,80,151,145,69,184,225,212,183,117,67,1,
    248,132,161,125,50,81,239,115,159,124,135,28,186,191,164,60,
    63,222,228,121,170,202,254,156,241,188,158,42,74,230,42,239,
    114,159,94,186,2,23,175,155,104,63,211,70,215,235,19,149,
    68,28,212,144,31,141,61,233,122,197,247,172,100,250,66,82,
    255,232,142,152,192,92,7,196,4,234,69,116,159,75,63,71,
    74,191,109,148,126,103,34,161,103,153,234,111,140,160,90,41,
    40,44,25,233,83,175,42,172,41,237,192,150,63,28,234,40,
    112,31,81,181,90,147,233,9,90,18,251,255,76,149,20,108,
    171,59,92,158,93,247,7,132,180,138,16,98,139,90,233,1,
    147,181,138,224,235,175,5,190,218,120,12,25,199,53,119,27,
    141,68,178,50,136,185,191,42,117,186,114,13,60,241,113,148,
    161,172,191,105,138,11,0,243,8,132,175,108,245,234,162,120,
    248,187,48,53,4,110,154,3,5,121,8,144,79,209,169,128,
    56,208,125,157,233,75,230,21,155,231,247,187,64,115,10,137,
    71,92,160,75,41,204,223,125,207,155,116,60,126,159,247,31,
    83,30,54,56,30,171,58,71,228,101,181,108,53,234,13,37,
    41,235,202,51,163,57,187,69,69,209,55,74,93,241,242,249,
    82,197,242,34,86,164,20,88,67,174,27,59,254,192,188,114,
    200,221,222,253,1,229,55,55,247,237,210,84,184,185,74,165,
    109,238,39,12,125,73,167,146,61,221,159,99,28,43,6,143,
    55,11,105,54,159,15,33,135,119,162,145,134,229,69,110,240,
    88,174,159,213,69,70,100,179,244,218,164,142,142,49,247,1,
    14,202,214,222,184,179,19,14,204,91,82,182,120,101,62,72,
    124,238,47,95,25,77,117,18,250,253,240,107,243,120,84,12,
    103,80,208,85,130,144,179,252,146,220,88,137,110,130,130,68,
    31,48,102,88,149,243,213,165,121,44,120,191,208,201,37,212,
    85,183,77,24,46,166,2,52,55,197,167,120,99,72,63,228,
    6,175,63,141,249,6,67,7,241,193,230,203,219,156,114,236,
    217,133,134,51,59,211,112,26,83,182,92,242,231,184,116,111,
    58,141,153,89,53,254,111,131,65,214,180,54,22,27,234,255,
    230,35,22,38,
};

EmbeddedPython embedded_m5_internal_param_FUDesc(
    "m5/internal/param_FUDesc.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_FUDesc.py",
    "m5.internal.param_FUDesc",
    data_m5_internal_param_FUDesc,
    2228,
    6285);

} // anonymous namespace
