#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_FUPool[] = {
    120,156,181,88,253,110,220,198,17,159,37,121,39,221,73,178,
    36,203,146,108,75,182,206,45,220,92,141,86,106,211,184,46,
    16,199,173,155,198,72,131,86,118,169,24,118,148,160,44,117,
    92,73,60,221,145,87,146,178,124,169,132,2,149,145,246,5,
    250,2,5,242,71,223,166,111,212,204,111,150,228,81,31,6,
    2,228,34,31,215,203,229,236,112,62,126,243,177,236,80,254,
    87,227,235,55,45,162,244,63,138,40,224,159,162,30,81,95,
    209,182,34,165,21,5,215,232,160,70,201,123,20,212,232,13,
    209,182,69,218,162,83,158,216,244,185,69,209,180,236,169,83,
    207,150,21,69,195,38,105,135,182,107,244,34,154,39,71,215,
    233,160,73,201,95,72,41,21,41,122,25,76,80,48,73,111,
    152,59,79,26,194,112,146,176,216,148,197,6,5,83,178,216,
    164,96,90,38,83,52,156,35,61,77,219,51,32,219,190,194,
    108,239,49,219,89,97,251,63,176,13,248,201,34,5,87,64,
    206,114,125,6,74,7,148,242,190,89,225,50,87,72,57,79,
    219,87,139,249,66,101,126,173,50,95,172,204,151,42,243,229,
    202,252,122,101,126,67,230,44,229,85,234,222,164,238,10,117,
    87,105,151,13,55,95,74,116,139,180,77,221,219,180,125,155,
    52,255,110,209,41,219,54,184,90,217,177,38,59,22,202,29,
    45,217,113,135,182,239,144,230,95,203,236,168,211,86,123,137,
    253,21,254,159,255,218,236,47,202,166,121,120,165,147,52,140,
    35,47,140,118,227,208,194,243,58,6,120,183,131,97,34,119,
    243,135,112,243,127,73,124,28,88,185,155,79,136,25,43,232,
    210,179,232,68,38,39,22,13,219,116,172,168,235,80,96,211,
    49,191,166,6,1,246,20,157,90,244,133,13,130,19,30,29,
    118,198,109,114,50,227,227,174,56,195,112,154,160,147,26,29,
    215,104,235,229,177,133,133,131,6,37,95,211,151,171,194,116,
    82,152,90,116,204,163,67,167,14,157,212,233,5,19,241,82,
    183,1,245,213,203,99,214,148,87,182,218,14,75,187,89,81,
    23,170,4,97,18,249,125,157,205,240,220,27,248,137,223,247,
    158,60,127,22,199,189,118,179,32,137,211,245,129,159,237,187,
    178,199,134,49,250,131,76,120,197,145,206,166,120,178,27,70,
    129,215,143,131,195,158,206,38,193,200,219,13,123,218,243,228,
    225,239,251,131,56,201,62,74,146,56,113,97,79,89,236,197,
    126,185,3,214,236,244,226,84,183,241,54,121,141,11,246,25,
    168,119,7,194,17,2,136,156,216,28,232,180,147,132,131,140,
    221,100,56,130,26,220,218,112,144,12,233,251,60,108,236,199,
    125,189,161,59,254,198,158,238,223,223,216,57,12,123,193,198,
    99,247,143,27,131,97,182,31,71,27,188,22,70,153,102,3,
    244,54,170,170,175,243,243,171,96,114,20,238,121,161,136,239,
    237,235,222,64,39,176,82,122,19,47,80,115,106,90,213,149,
    173,218,106,134,103,53,190,108,181,106,77,169,205,16,10,116,
    160,20,128,227,84,161,2,255,41,58,176,40,89,5,16,186,
    252,83,240,28,195,97,11,207,44,121,246,39,104,110,86,187,
    54,220,107,22,143,5,60,140,34,166,124,8,127,70,36,8,
    168,81,183,78,6,25,12,40,3,149,100,136,145,201,193,198,
    98,230,14,165,255,38,182,36,99,226,152,114,188,156,218,164,
    162,57,202,154,8,113,94,93,226,23,254,67,32,183,213,134,
    248,155,226,253,108,63,76,227,163,72,108,140,185,4,201,22,
    91,230,217,240,233,78,87,119,178,116,141,23,62,139,15,91,
    29,63,138,226,172,229,7,65,203,207,178,36,220,57,204,116,
    218,202,226,214,221,180,13,183,185,243,5,128,74,126,195,65,
    1,24,56,151,1,99,110,130,176,147,241,205,130,220,136,23,
    82,157,177,243,247,227,32,229,117,176,216,211,153,11,33,51,
    24,57,22,65,4,27,30,72,241,122,166,187,194,247,143,11,
    73,4,128,237,122,1,151,84,247,118,179,166,32,207,79,83,
    79,36,193,186,128,12,140,95,249,189,67,45,220,83,230,199,
    2,97,106,100,24,35,204,174,67,228,66,67,17,59,138,163,
    96,200,82,132,157,119,240,130,235,2,182,105,129,219,34,67,
    109,130,199,58,255,95,87,75,86,199,201,1,86,47,64,134,
    124,150,145,184,88,229,94,102,192,157,114,238,104,91,18,252,
    34,185,68,216,15,48,195,102,119,21,195,45,12,183,49,172,
    21,202,141,71,195,153,243,26,62,0,87,75,212,18,5,96,
    108,187,80,32,56,19,37,55,70,81,194,153,108,11,104,183,
    16,19,35,180,59,200,122,201,35,140,76,42,113,100,83,250,
    41,114,44,162,66,152,33,0,24,202,152,141,0,46,230,112,
    231,160,230,100,129,77,23,128,171,162,110,175,130,58,23,158,
    16,200,185,55,138,44,230,129,194,128,205,93,1,171,218,37,
    246,108,97,184,51,94,163,142,96,179,119,1,54,224,157,206,
    229,176,153,17,184,52,249,154,179,58,118,110,233,178,124,45,
    156,131,11,176,226,92,130,149,31,97,102,95,212,237,123,129,
    73,174,209,147,10,76,32,132,85,21,124,147,39,195,101,200,
    91,5,200,50,87,220,23,209,50,23,81,75,138,232,207,164,
    136,74,33,150,246,197,36,80,91,114,168,153,212,160,248,174,
    77,75,121,113,76,27,60,14,146,248,245,176,21,239,182,50,
    209,12,249,238,225,221,116,253,110,250,62,103,178,214,35,201,
    33,38,151,153,108,149,232,1,178,13,182,126,244,186,163,165,
    46,201,157,231,153,228,226,73,162,241,242,122,199,88,89,132,
    217,172,194,158,146,102,211,44,65,118,29,163,69,155,165,69,
    33,224,39,96,217,20,115,218,106,153,113,209,84,242,94,207,
    228,78,105,109,228,41,95,191,133,137,161,155,38,52,174,238,
    150,145,74,4,134,232,238,79,206,248,126,44,226,186,27,188,
    255,121,225,243,250,200,231,184,236,2,172,255,36,105,237,20,
    125,69,240,42,59,47,7,107,137,109,184,113,1,228,127,38,
    65,245,37,245,86,242,192,22,106,172,80,112,122,72,31,8,
    169,41,191,159,208,191,42,33,81,20,73,59,111,222,170,69,
    210,41,115,136,192,225,91,21,66,231,108,178,129,11,246,253,
    20,100,38,131,140,162,108,148,140,203,198,139,51,232,120,176,
    49,105,152,121,120,239,23,35,100,160,204,172,168,5,171,226,
    239,159,99,120,183,116,181,42,214,190,179,8,107,244,246,202,
    231,153,172,251,57,222,227,136,100,179,19,82,127,205,246,18,
    172,181,2,172,239,150,96,213,82,26,222,72,91,142,209,130,
    223,78,45,197,231,41,238,114,112,124,113,72,215,104,187,14,
    88,75,231,169,114,212,171,34,185,32,21,157,169,59,162,245,
    166,177,71,233,58,227,21,12,175,199,24,180,112,204,195,158,
    223,223,9,252,71,49,24,130,107,167,136,3,171,16,113,174,
    42,34,48,172,222,38,165,220,222,47,68,125,53,198,128,253,
    37,239,47,69,20,120,6,113,71,162,244,211,125,221,234,235,
    254,14,159,164,246,195,65,107,183,231,239,137,149,237,92,133,
    167,133,10,153,184,233,124,85,78,239,97,140,91,157,56,226,
    172,120,216,201,226,164,21,104,62,99,232,160,245,211,150,164,
    212,86,152,182,252,29,126,234,119,50,131,201,179,193,35,173,
    156,159,236,165,130,154,131,35,76,199,236,37,143,79,136,33,
    119,169,127,165,178,78,153,243,75,153,33,165,255,52,16,231,
    146,194,167,135,108,104,146,5,94,239,174,99,248,49,141,63,
    145,190,199,251,35,48,130,234,117,181,98,53,44,233,217,13,
    197,51,80,167,23,35,104,231,219,68,144,249,22,145,199,81,
    29,148,122,2,71,80,140,13,36,82,124,106,168,229,159,26,
    176,104,62,53,212,101,229,10,34,110,226,187,70,156,96,121,
    204,40,126,61,214,64,115,31,124,143,18,186,191,162,188,20,
    190,45,200,84,85,252,25,19,100,93,85,116,199,85,217,229,
    232,188,112,14,25,94,39,209,126,166,141,173,87,199,170,137,
    196,162,97,255,183,81,208,92,108,238,30,151,66,159,74,149,
    31,94,19,23,152,206,95,92,160,94,68,55,185,203,115,164,
    203,123,136,46,239,88,52,244,44,211,232,141,16,84,43,21,
    133,39,35,125,228,85,149,53,93,28,196,242,7,3,29,5,
    238,61,170,54,102,242,120,140,158,196,254,191,83,165,218,218,
    234,26,119,98,23,227,1,217,171,162,132,248,162,86,70,192,
    120,189,34,248,250,170,192,87,123,150,170,41,204,125,136,65,
    146,86,153,175,220,95,151,54,93,62,15,158,39,207,255,16,
    166,25,90,248,183,62,227,106,159,151,114,220,138,77,4,132,
    129,238,233,76,159,113,143,248,44,63,138,5,154,179,125,60,
    228,94,90,186,86,190,239,121,222,184,83,231,7,188,255,8,
    140,144,185,57,117,170,58,39,207,69,171,81,111,40,169,45,
    231,190,7,154,55,227,32,109,186,179,97,234,74,140,206,150,
    6,146,79,87,69,238,135,45,229,92,176,233,247,205,231,8,
    57,132,187,63,164,252,136,229,190,83,26,26,71,76,105,137,
    205,65,130,129,43,117,79,202,156,251,11,172,131,162,127,127,
    189,208,101,253,201,243,223,233,180,227,189,210,168,151,242,233,
    172,127,95,206,137,85,162,66,97,144,94,224,240,116,80,229,
    112,249,86,67,115,225,161,142,14,241,236,67,200,152,173,92,
    186,115,43,236,155,239,69,217,252,185,231,65,226,243,124,241,
    220,106,170,147,208,239,133,95,154,15,68,197,114,6,219,158,
    103,8,19,149,119,82,255,42,105,77,224,147,232,61,6,27,
    123,97,182,74,154,39,129,15,10,115,158,129,107,117,219,152,
    113,102,186,60,115,26,124,132,239,8,233,199,60,224,11,79,
    99,182,193,152,67,98,176,249,128,54,163,28,123,122,174,225,
    76,79,53,156,198,132,45,7,249,25,110,207,155,78,99,106,
    90,157,253,183,198,24,109,90,107,115,13,245,13,165,235,23,
    113,
};

EmbeddedPython embedded_m5_internal_param_FUPool(
    "m5/internal/param_FUPool.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_FUPool.py",
    "m5.internal.param_FUPool",
    data_m5_internal_param_FUPool,
    2225,
    6285);

} // anonymous namespace
