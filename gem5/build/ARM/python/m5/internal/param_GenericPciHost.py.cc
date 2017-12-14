#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GenericPciHost[] = {
    120,156,189,88,95,115,219,198,17,223,3,64,74,164,36,139,
    178,254,217,150,108,209,78,29,211,174,45,185,105,92,119,38,
    174,91,215,73,219,100,198,138,10,166,181,163,100,138,66,192,
    81,2,69,2,28,0,178,204,140,212,233,84,158,164,147,231,
    246,169,207,125,232,183,233,71,232,55,105,119,247,0,240,36,
    81,142,58,53,107,145,231,229,222,222,222,238,222,239,246,246,
    206,131,236,95,9,191,63,171,3,36,191,53,0,124,252,8,
    232,0,116,5,108,10,16,82,128,63,7,187,37,136,223,7,
    191,4,175,1,54,13,144,6,28,33,97,194,23,6,132,147,
    60,166,12,29,147,57,2,250,85,144,22,108,150,224,121,56,
    3,150,44,195,110,21,226,223,131,16,34,20,240,194,31,3,
    127,28,94,163,118,36,42,172,112,28,136,89,101,102,5,252,
    9,102,86,193,159,100,98,2,250,53,144,147,176,57,69,98,
    155,23,80,237,29,84,59,205,106,255,73,106,125,236,153,7,
    255,2,137,163,93,159,147,164,69,146,60,223,52,107,169,229,
    86,206,192,230,197,156,158,213,232,57,141,158,215,232,5,141,
    94,212,232,75,26,125,89,163,175,104,244,146,70,47,107,244,
    85,141,190,166,209,43,26,93,215,232,235,26,125,67,163,223,
    209,232,239,105,244,77,141,126,87,163,111,105,116,131,105,140,
    236,69,104,223,134,246,29,104,127,31,90,184,216,51,69,20,
    239,130,52,161,125,15,54,239,129,196,207,93,56,66,60,248,
    23,181,17,171,60,98,182,24,177,198,35,238,195,230,125,144,
    248,89,83,35,202,208,108,44,32,198,130,127,227,191,134,64,
    42,157,196,230,165,140,147,32,10,157,32,108,69,129,65,253,
    101,106,8,145,30,53,99,25,52,159,18,52,255,1,140,75,
    223,200,160,121,8,168,88,144,47,29,3,14,153,56,52,160,
    223,128,3,1,109,11,124,19,14,112,154,18,25,176,45,224,
    200,128,47,77,18,56,196,214,66,0,93,3,43,85,184,108,
    51,128,148,166,49,56,44,193,65,9,154,47,14,12,98,236,
    86,32,254,59,124,181,204,74,199,89,169,1,7,216,90,112,
    100,193,97,25,158,163,16,178,218,21,114,95,188,56,64,79,
    145,211,108,88,104,237,186,230,46,185,226,7,113,232,118,101,
    58,143,180,211,115,99,183,235,252,82,134,50,14,188,13,47,
    248,85,148,164,141,106,46,26,37,171,61,55,221,177,121,172,
    73,65,233,246,82,214,25,133,50,157,64,162,21,132,190,211,
    141,252,189,142,76,199,73,161,211,10,58,210,113,184,243,227,
    110,47,138,211,143,226,56,138,109,138,43,51,59,145,91,140,
    160,168,122,157,40,145,13,154,141,167,177,73,125,74,210,173,
    30,107,36,3,216,94,26,236,203,196,139,131,94,138,203,165,
    52,146,52,105,107,208,66,113,147,60,197,102,109,39,234,202,
    53,233,185,107,219,178,251,96,109,107,47,232,248,107,79,236,
    103,107,189,126,186,19,133,107,200,11,194,84,98,32,58,107,
    195,66,176,138,114,23,73,217,126,176,237,4,236,134,179,35,
    59,61,25,79,17,247,10,77,36,106,98,82,148,133,41,26,
    98,10,169,18,126,77,177,108,76,136,245,128,28,241,200,57,
    2,146,165,67,135,214,83,192,174,1,241,50,1,163,141,31,
    65,43,137,240,104,82,159,193,125,191,166,8,40,110,219,164,
    229,86,204,3,6,19,162,10,37,31,209,250,134,192,136,40,
    65,187,12,10,41,8,48,5,157,184,79,45,138,147,26,3,
    149,91,144,252,21,48,162,136,145,3,200,240,115,100,130,8,
    107,144,86,41,77,33,119,1,39,252,19,67,176,217,32,243,
    215,25,5,233,78,144,68,251,33,199,154,104,222,52,77,140,
    204,70,255,211,173,182,244,210,100,5,25,159,71,123,117,207,
    13,195,40,173,187,190,95,119,211,52,14,182,246,82,153,212,
    211,168,126,51,105,208,242,217,51,57,144,10,125,253,94,14,
    28,90,100,4,142,250,225,7,94,138,63,102,249,7,175,66,
    34,83,4,193,78,228,39,200,39,21,219,50,181,201,200,148,
    130,28,177,33,140,17,135,68,105,122,148,187,128,191,159,228,
    150,48,16,27,229,28,54,137,236,180,210,42,35,208,77,18,
    135,45,33,62,131,141,20,191,116,59,123,146,181,39,168,15,
    13,34,82,217,48,2,184,93,34,211,115,79,217,252,48,10,
    253,62,90,19,120,183,104,162,75,12,186,73,134,221,60,66,
    110,12,219,50,254,95,22,11,134,103,101,64,43,231,96,163,
    60,151,2,47,181,200,86,27,129,119,132,57,165,97,112,82,
    96,15,120,199,221,32,138,6,219,203,212,92,165,230,26,53,
    43,185,147,111,215,211,169,147,158,62,36,237,6,187,199,142,
    80,240,205,220,17,255,216,174,185,60,216,53,152,233,154,132,
    126,131,246,200,0,253,22,101,197,248,49,181,40,202,251,202,
    132,228,51,202,193,180,75,88,25,109,8,132,54,81,3,192,
    115,88,236,26,185,59,158,99,213,38,0,234,40,220,214,80,
    104,211,138,48,4,237,203,121,118,115,72,66,129,207,94,34,
    85,165,33,113,173,83,115,125,52,193,29,192,104,251,20,140,
    62,160,137,106,25,140,166,24,62,85,252,214,12,207,204,34,
    94,28,115,179,39,224,67,216,177,134,96,231,93,162,204,211,
    62,142,20,54,153,103,191,208,96,67,198,24,186,3,235,72,
    244,23,201,110,29,48,139,120,66,63,15,23,241,208,53,248,
    208,189,207,135,46,31,220,92,162,169,4,107,114,142,85,68,
    137,2,208,50,97,33,59,76,147,10,182,189,56,122,213,175,
    71,173,122,202,30,82,62,124,116,51,89,189,153,124,128,153,
    174,254,152,115,140,202,117,42,155,197,178,71,217,136,134,126,
    244,202,147,124,126,241,47,199,81,201,199,225,68,228,100,231,
    34,98,135,14,103,14,54,199,149,211,112,146,198,148,125,71,
    16,217,106,17,89,50,244,19,82,93,229,176,154,98,17,113,
    82,21,60,191,163,114,44,151,68,220,139,223,159,83,168,201,
    71,9,84,164,219,77,101,29,27,78,46,216,119,143,97,225,
    173,154,109,175,161,158,223,228,24,40,15,48,64,95,51,7,
    241,55,192,165,161,128,175,129,86,25,23,51,3,113,129,121,
    90,214,89,18,255,29,48,218,135,156,207,156,39,154,116,38,
    179,4,166,143,228,33,139,170,227,250,19,248,179,182,85,242,
    67,213,204,138,63,253,80,181,138,28,195,240,56,215,193,105,
    29,79,70,180,20,59,110,66,98,42,195,12,118,223,32,105,
    23,5,27,102,216,183,139,149,113,165,212,161,249,191,28,32,
    133,142,165,37,49,107,104,235,255,3,106,222,43,150,94,228,
    188,183,102,202,10,156,125,98,58,42,75,127,65,243,89,108,
    225,244,24,87,3,199,213,20,96,46,229,96,126,175,0,179,
    228,35,229,53,151,251,212,26,180,158,71,134,192,187,37,86,
    75,116,149,179,64,150,96,179,76,176,231,74,86,100,187,66,
    228,73,136,82,214,177,243,138,163,176,174,226,83,44,169,90,
    45,106,94,141,96,115,211,130,61,234,184,221,45,223,125,252,
    7,82,76,218,189,124,159,24,185,169,53,221,84,194,184,56,
    203,90,254,249,32,55,249,229,8,54,246,143,80,79,97,42,
    195,216,143,60,222,205,159,237,200,122,87,118,183,240,198,182,
    19,244,234,173,142,187,205,81,55,51,87,62,205,93,73,121,
    217,78,158,238,201,29,106,163,186,23,133,152,77,247,188,52,
    138,235,190,196,59,140,244,235,247,234,156,138,235,65,82,119,
    183,176,215,245,82,133,217,227,155,140,75,68,55,222,78,184,
    26,220,221,39,114,68,171,230,224,141,52,192,42,248,143,80,
    156,115,234,158,84,100,86,70,180,218,2,120,36,225,237,36,
    237,171,228,66,39,189,189,74,205,109,24,93,2,126,31,245,
    28,146,66,10,69,89,44,25,21,35,157,59,181,199,54,104,
    116,114,122,167,253,235,60,59,77,189,223,100,251,173,76,146,
    114,140,174,192,212,86,40,17,111,86,115,230,4,183,147,204,
    156,202,153,23,184,157,102,102,45,103,206,112,123,145,153,179,
    57,115,142,219,121,102,46,228,204,69,110,47,49,243,114,206,
    188,194,237,18,51,151,243,183,168,171,204,188,6,155,43,244,
    168,65,156,58,229,133,177,255,53,47,240,78,27,209,30,251,
    230,173,166,3,251,225,255,193,82,251,199,144,29,236,103,165,
    2,161,187,49,165,82,65,91,228,119,1,221,7,126,64,88,
    58,3,175,142,23,75,55,149,106,13,150,71,226,25,103,16,
    53,205,183,131,45,126,186,148,125,82,56,113,196,53,76,127,
    142,151,70,221,123,120,105,196,243,240,10,214,180,22,215,180,
    143,168,166,61,96,143,29,67,149,181,3,132,149,10,199,233,
    162,16,202,125,103,152,243,170,118,37,243,220,94,79,134,190,
    125,7,244,114,148,187,71,176,210,148,181,254,2,90,77,97,
    138,57,172,63,79,239,31,202,193,154,83,188,70,165,98,199,
    140,102,181,24,135,127,203,113,216,160,235,219,32,17,219,143,
    168,225,212,91,100,93,251,167,69,172,111,156,9,178,40,108,
    57,91,110,34,233,78,115,30,49,172,116,248,226,80,112,210,
    219,111,28,228,203,151,129,39,157,173,32,77,120,138,243,75,
    211,76,181,124,38,173,227,59,172,76,130,175,206,227,12,139,
    29,115,134,56,233,205,179,6,245,188,192,241,187,238,32,86,
    231,147,164,25,232,118,166,51,223,60,20,83,202,57,39,41,
    36,245,73,114,230,155,135,246,130,232,156,147,20,146,250,36,
    57,51,189,126,230,208,142,155,182,162,184,203,19,124,183,20,
    41,231,183,214,140,193,59,145,83,163,47,59,50,149,67,147,
    4,163,35,123,22,241,37,86,76,81,31,239,177,124,83,196,
    223,29,199,25,85,217,241,19,212,243,53,100,207,176,88,118,
    136,50,22,30,243,66,251,51,42,229,138,224,154,237,196,123,
    190,178,134,110,33,234,118,212,79,108,62,85,166,139,173,202,
    97,200,107,41,218,213,140,208,117,183,171,158,15,249,177,204,
    126,7,178,167,15,251,86,177,229,233,9,136,175,164,234,98,
    143,169,149,235,73,46,31,237,31,18,159,204,237,62,88,205,
    253,91,85,254,109,100,49,231,55,239,238,131,244,234,80,169,
    143,195,52,126,26,97,19,117,56,115,159,150,104,246,147,84,
    118,121,209,244,78,25,238,117,157,103,178,27,197,253,103,145,
    47,211,229,19,253,79,124,63,182,221,112,91,58,47,37,213,
    195,140,150,99,2,89,49,172,116,228,82,245,161,54,28,151,
    61,101,139,18,194,78,245,108,204,23,184,211,253,79,59,145,
    183,43,253,76,102,120,56,88,230,195,168,235,34,127,248,44,
    205,32,159,101,230,68,191,31,211,168,249,19,220,4,65,230,
    118,40,7,93,30,22,193,141,253,184,137,119,204,211,241,203,
    22,49,218,151,49,197,183,195,121,79,23,24,116,177,130,179,
    194,124,82,143,154,237,12,223,246,182,178,213,30,30,65,44,
    141,226,174,219,201,226,115,210,226,34,50,185,41,215,222,164,
    68,57,117,50,38,153,181,106,79,158,97,229,70,16,125,200,
    199,6,239,169,188,147,159,241,142,15,167,148,145,209,124,165,
    24,82,147,113,150,137,229,118,128,94,199,172,226,120,189,66,
    41,225,236,60,167,15,30,81,82,82,215,108,245,124,247,152,
    30,130,147,22,54,244,84,95,153,174,96,130,162,90,198,20,
    85,172,102,44,115,178,86,177,38,39,42,86,101,204,228,23,
    216,41,49,107,84,173,202,196,164,248,111,254,86,48,197,85,
    141,149,133,138,248,15,43,199,58,128,
};

EmbeddedPython embedded_m5_internal_param_GenericPciHost(
    "m5/internal/param_GenericPciHost.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_GenericPciHost.py",
    "m5.internal.param_GenericPciHost",
    data_m5_internal_param_GenericPciHost,
    2586,
    8000);

} // anonymous namespace
