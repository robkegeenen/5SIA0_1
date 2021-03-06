#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseCache[] = {
    120,156,181,89,95,115,19,201,17,239,89,253,177,37,219,216,
    198,216,198,96,176,248,99,16,6,108,142,131,227,18,192,57,
    224,46,85,185,42,124,100,69,10,206,119,149,205,122,119,108,
    175,45,237,42,187,99,140,46,38,15,49,73,238,11,228,41,
    111,169,202,67,190,77,170,242,129,146,238,30,141,180,146,37,
    236,186,8,44,53,179,61,61,61,221,211,191,233,233,89,121,
    208,252,151,195,239,23,37,128,100,213,2,240,241,35,160,10,
    80,19,176,46,64,72,1,254,25,216,205,65,124,15,252,28,
    188,7,88,183,64,90,112,136,141,12,124,103,65,56,202,99,
    242,80,205,48,71,64,163,8,50,11,235,57,120,21,78,66,
    86,230,97,183,8,241,239,64,8,17,10,120,237,15,129,63,
    12,239,81,59,54,10,172,112,24,136,89,100,102,1,252,17,
    102,22,193,31,229,198,8,52,38,64,142,194,250,24,137,173,
    159,66,181,75,168,118,156,213,254,155,212,250,216,51,13,254,
    41,18,71,187,190,37,201,44,73,242,124,227,172,101,194,88,
    57,9,235,167,77,123,42,213,62,147,106,79,167,218,51,169,
    246,108,170,125,54,213,158,75,181,207,165,218,231,83,237,249,
    84,251,66,170,125,49,213,94,72,181,75,169,246,165,84,251,
    114,170,125,37,213,190,154,106,47,166,218,215,184,141,43,120,
    26,118,174,195,78,25,118,110,192,38,6,117,178,181,90,75,
    32,51,176,115,19,214,111,130,196,207,18,28,98,220,253,211,
    169,17,183,120,196,84,107,196,109,30,177,12,235,203,32,241,
    115,91,143,200,67,165,60,131,88,10,254,139,255,202,2,91,
    106,20,201,27,25,39,65,20,58,65,184,25,5,22,245,231,
    137,16,242,60,34,67,77,8,62,35,8,254,11,24,127,190,
    213,132,224,59,64,197,130,124,169,90,240,142,27,239,44,104,
    148,225,64,192,78,22,252,12,28,224,52,57,50,96,75,192,
    161,5,223,103,72,224,29,210,44,2,229,34,100,149,198,223,
    14,3,69,107,26,130,119,57,56,200,65,229,245,129,69,140,
    221,2,196,255,132,31,230,89,233,48,43,181,224,0,105,22,
    14,179,240,46,15,175,80,8,89,59,5,114,95,188,62,64,
    79,145,83,41,103,209,218,181,148,187,228,138,31,196,161,91,
    147,106,2,219,78,221,141,221,154,243,212,77,228,51,215,219,
    150,229,162,145,138,146,229,186,171,182,109,30,150,161,245,168,
    213,21,171,139,66,169,70,176,177,25,132,190,83,139,252,189,
    170,84,195,164,203,217,12,170,210,113,184,243,87,181,122,20,
    171,175,226,56,138,109,90,82,102,86,35,183,53,130,22,212,
    171,70,137,44,211,108,60,141,77,234,21,73,111,214,89,35,
    25,192,166,210,96,95,38,94,28,212,21,70,74,107,36,105,
    210,86,166,24,49,73,86,145,172,108,71,53,185,34,61,119,
    101,75,214,238,175,108,236,5,85,127,229,137,253,124,165,222,
    80,219,81,184,130,188,32,84,18,215,160,186,210,229,253,50,
    138,156,38,61,251,193,150,19,176,7,206,182,172,214,101,60,
    70,220,115,52,135,152,16,163,34,47,50,162,44,198,176,149,
    195,111,70,204,91,35,98,45,32,31,60,242,139,224,147,77,
    3,134,162,40,96,215,130,120,158,224,176,131,31,65,241,67,
    80,84,168,207,226,190,95,147,243,154,187,147,161,32,107,230,
    1,67,8,177,132,146,143,40,170,33,48,14,114,176,147,7,
    141,15,132,149,6,76,220,32,138,226,164,198,66,229,89,72,
    254,6,184,152,136,140,3,104,162,230,48,3,34,156,0,85,
    164,36,132,220,25,156,240,79,12,188,74,153,204,95,99,0,
    168,237,32,137,246,67,94,102,106,243,86,169,224,202,188,104,
    124,179,177,35,61,149,44,32,227,219,104,175,228,185,97,24,
    169,146,235,251,37,87,169,56,216,216,83,50,41,169,168,180,
    152,148,41,114,246,164,193,80,75,95,163,110,48,67,241,69,
    204,232,7,63,240,20,62,76,241,3,71,33,145,10,227,191,
    29,249,9,242,73,197,150,84,54,25,169,104,145,35,54,132,
    225,225,144,40,77,143,114,167,240,249,137,177,132,49,88,206,
    27,196,36,178,186,169,138,12,62,55,73,28,182,132,248,140,
    51,82,252,198,173,238,73,214,158,160,62,52,136,154,218,134,
    193,34,237,44,89,109,156,100,203,195,40,244,27,104,72,224,
    93,167,57,206,50,222,70,25,113,211,136,182,33,164,121,252,
    63,47,102,44,47,219,196,88,222,224,140,18,155,2,142,178,
    104,6,26,49,119,136,73,164,108,113,22,96,227,121,159,93,
    166,22,13,182,231,137,92,32,114,145,200,130,241,111,96,78,
    142,117,59,249,128,20,91,236,25,251,64,75,158,49,62,248,
    29,123,101,174,189,87,48,171,85,8,243,22,237,140,54,230,
    179,148,1,227,85,162,40,202,187,41,3,201,75,202,183,180,
    55,88,25,109,3,4,52,181,218,48,231,21,177,41,3,150,
    135,13,66,109,130,93,26,123,91,41,236,217,20,12,6,158,
    61,103,210,153,67,18,26,114,246,121,82,149,235,177,164,37,
    34,151,6,190,174,109,240,108,29,1,207,67,154,99,162,9,
    158,49,6,77,17,191,19,150,151,105,46,118,235,52,155,234,
    2,13,33,38,219,3,49,215,168,149,57,234,222,199,2,75,
    211,169,95,166,192,66,118,88,105,219,215,176,209,152,37,147,
    211,48,153,197,51,248,85,56,139,199,170,197,199,234,29,62,
    86,249,104,230,98,75,39,211,12,231,83,221,200,145,239,155,
    25,152,105,30,151,73,1,105,61,142,222,54,74,209,102,73,
    177,115,148,251,30,45,38,203,139,201,67,204,106,165,85,206,
    39,58,175,233,204,21,203,58,101,30,26,250,213,91,79,242,
    49,197,79,142,163,19,141,195,73,199,105,30,127,136,152,105,
    90,57,203,44,41,167,220,68,197,148,105,7,187,168,197,214,
    162,146,141,95,147,214,34,175,104,70,204,34,58,138,130,167,
    118,116,42,229,122,135,123,241,251,148,86,153,220,147,64,149,
    182,93,209,134,177,205,100,189,125,171,3,1,131,178,216,94,
    65,21,191,49,145,207,183,35,79,223,140,65,237,95,129,75,
    62,1,127,1,138,45,134,176,137,218,22,200,41,152,83,36,
    254,91,96,120,247,56,129,57,39,84,232,212,101,9,76,21,
    201,3,22,213,7,242,215,240,99,106,111,152,99,51,211,44,
    234,210,199,102,182,149,79,24,20,39,58,26,179,157,137,135,
    162,176,237,38,36,166,179,73,123,187,181,115,115,171,26,195,
    108,58,48,132,12,107,125,14,77,253,125,27,31,116,240,156,
    23,83,86,42,234,159,16,185,219,10,184,48,188,65,88,177,
    0,253,143,67,71,231,225,239,104,170,44,27,55,62,196,187,
    171,165,161,5,220,156,1,238,221,22,112,37,159,23,239,185,
    110,39,106,81,0,15,45,129,151,65,44,128,232,238,149,5,
    153,131,245,60,65,156,235,82,209,220,1,194,228,26,202,76,
    29,135,17,251,190,166,87,165,21,67,29,30,34,111,7,187,
    135,41,66,143,170,110,109,195,119,87,15,72,39,41,246,204,
    158,176,140,149,19,105,43,9,207,162,159,161,252,120,223,88,
    251,102,176,251,247,51,109,134,182,146,209,234,71,30,111,218,
    151,219,178,84,147,181,13,188,112,109,7,245,210,102,213,221,
    226,181,206,52,189,248,198,120,161,56,88,221,7,118,178,68,
    52,42,121,81,136,169,114,207,83,81,92,242,37,222,67,164,
    95,186,93,226,60,91,10,146,146,187,129,189,174,167,52,62,
    59,247,18,215,122,110,188,149,112,89,183,187,79,205,193,199,
    202,193,187,100,128,149,236,31,161,117,126,233,107,78,43,109,
    114,141,170,225,142,71,13,222,48,84,67,167,15,58,188,237,
    101,34,55,224,163,100,215,123,168,226,15,164,139,22,32,47,
    206,91,5,75,141,167,183,210,11,26,147,28,221,80,255,17,
    39,216,80,250,189,10,10,200,60,236,12,49,29,166,188,186,
    94,48,204,34,211,17,102,142,26,230,24,211,83,204,28,55,
    204,9,166,147,204,60,109,152,83,76,207,48,115,218,48,103,
    152,206,50,243,172,97,206,49,61,199,204,243,134,57,207,244,
    2,51,47,26,230,2,211,18,51,47,25,230,101,166,87,152,
    121,213,48,23,153,94,99,230,117,195,44,51,189,193,204,37,
    195,188,201,244,22,51,111,27,230,50,211,21,102,222,49,204,
    79,152,222,101,230,167,134,121,143,233,125,102,126,102,152,15,
    152,126,206,204,159,25,230,207,153,62,100,230,35,195,124,204,
    116,149,153,191,48,89,238,11,102,62,129,245,167,230,69,217,
    51,202,120,249,255,55,227,113,34,25,124,10,249,243,64,19,
    157,253,224,227,26,105,127,14,205,202,164,95,146,235,40,94,
    159,232,36,167,215,22,235,151,198,25,118,72,223,111,216,33,
    241,42,60,135,85,108,150,171,216,71,84,197,30,112,165,235,
    88,186,144,109,135,132,175,29,252,74,132,166,15,229,190,211,
    181,151,117,161,74,113,118,235,117,25,250,246,18,164,107,79,
    238,30,236,210,80,22,251,59,164,74,137,140,56,131,197,230,
    81,152,81,58,78,185,194,112,202,181,128,53,255,81,98,246,
    15,19,179,242,151,29,57,217,126,68,100,162,35,1,235,117,
    93,56,154,31,29,172,233,98,39,118,195,45,153,208,117,229,
    88,25,172,106,248,214,152,226,169,185,94,99,146,36,242,88,
    99,255,94,210,69,171,196,79,170,212,67,206,119,149,235,84,
    93,37,67,175,193,202,142,21,34,157,116,205,73,51,213,245,
    94,163,100,205,165,55,127,201,54,250,33,19,25,191,145,60,
    195,73,101,105,34,2,106,143,190,158,86,6,9,118,187,190,
    19,133,213,254,174,116,8,25,87,210,76,117,185,199,168,154,
    251,214,169,5,120,59,243,162,189,80,177,242,19,136,145,122,
    58,190,59,217,61,195,69,206,37,125,131,169,123,77,48,249,
    73,93,235,33,87,143,229,166,84,222,54,58,226,184,158,39,
    19,173,242,132,162,164,159,222,106,30,237,82,23,63,160,65,
    198,60,201,49,34,164,188,152,82,142,133,204,213,30,35,48,
    190,117,44,218,100,7,36,79,36,72,19,208,150,236,238,80,
    139,61,70,39,242,247,123,50,84,129,91,77,175,211,201,36,
    105,34,190,187,117,247,240,187,150,35,227,131,31,52,234,251,
    118,146,62,126,225,136,15,234,92,47,169,70,162,100,141,149,
    124,160,155,212,240,203,72,126,236,153,101,148,187,213,177,174,
    199,201,152,76,148,226,245,116,3,251,147,190,62,114,167,241,
    145,30,212,165,94,82,91,10,225,130,56,225,93,78,186,142,
    151,34,165,84,125,116,112,123,142,219,143,3,37,157,141,189,
    205,77,217,220,101,199,75,25,237,29,92,117,183,23,202,233,
    245,127,141,66,16,248,18,247,120,24,74,143,94,235,164,146,
    197,79,24,150,52,247,212,135,197,250,107,246,234,123,63,197,
    160,254,195,58,12,234,43,198,39,186,154,225,180,93,149,184,
    114,93,179,232,95,147,244,133,198,199,147,45,142,26,142,163,
    223,44,225,115,213,113,62,194,77,230,49,240,37,4,146,59,
    192,55,25,145,23,211,39,249,179,10,249,130,224,43,97,215,
    175,125,218,60,122,253,164,223,177,52,18,155,56,246,120,171,
    16,224,95,165,204,125,141,202,5,126,11,177,230,214,244,207,
    12,252,102,221,190,2,205,55,166,246,245,86,45,65,233,159,
    95,108,233,151,130,88,164,241,117,149,111,167,246,167,196,167,
    90,167,118,127,217,56,188,252,4,235,4,155,202,4,231,141,
    164,155,46,255,48,86,187,207,167,95,90,174,189,48,47,218,
    57,248,108,79,161,138,206,33,231,187,58,101,184,87,115,158,
    203,90,20,55,158,71,190,228,77,212,97,73,243,62,173,69,
    140,57,189,237,232,148,61,50,149,22,194,78,253,19,18,167,
    170,163,253,207,170,145,183,43,253,166,204,133,254,50,95,70,
    53,23,249,189,103,169,4,102,150,201,174,126,63,166,81,211,
    93,92,172,64,48,233,83,182,158,235,181,64,47,246,227,138,
    194,108,121,36,80,122,182,23,209,190,140,105,249,170,92,66,
    164,5,218,93,172,192,44,96,247,50,119,235,209,179,245,241,
    109,111,163,210,62,16,142,246,227,29,36,174,185,213,230,250,
    116,91,220,90,25,99,202,197,15,41,209,78,157,235,11,187,
    151,148,252,105,99,152,62,126,157,208,29,105,130,125,235,137,
    95,66,112,54,105,109,104,78,29,177,220,10,208,171,152,53,
    180,164,155,151,152,199,102,151,28,57,41,83,35,7,159,102,
    244,203,55,253,218,126,149,142,205,100,3,9,253,38,87,24,
    47,136,188,69,119,155,140,40,226,237,38,155,25,157,40,100,
    71,71,10,217,194,80,134,127,116,25,19,83,86,49,91,24,
    25,21,39,253,91,192,212,84,180,22,22,10,226,127,4,252,
    112,101,
};

EmbeddedPython embedded_m5_internal_param_BaseCache(
    "m5/internal/param_BaseCache.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_BaseCache.py",
    "m5.internal.param_BaseCache",
    data_m5_internal_param_BaseCache,
    2866,
    8958);

} // anonymous namespace
