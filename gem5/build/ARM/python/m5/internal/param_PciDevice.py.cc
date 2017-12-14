#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_PciDevice[] = {
    120,156,205,91,121,120,220,198,117,31,96,151,43,145,162,36,
    74,212,101,137,146,214,135,108,90,182,73,243,138,211,90,81,
    163,195,142,233,90,18,179,43,71,52,237,100,3,46,64,18,
    228,46,176,5,64,73,235,82,77,26,57,78,122,159,233,125,
    37,109,210,38,189,143,28,109,174,30,57,122,55,61,211,51,
    189,239,251,250,187,157,247,3,30,118,176,11,236,238,247,149,
    250,190,138,228,211,224,55,111,222,204,155,247,155,55,3,44,
    182,42,162,127,3,242,239,213,69,33,252,167,117,33,76,249,
    171,137,154,16,117,77,44,105,66,179,52,97,30,16,27,3,
    194,155,21,230,128,120,73,136,37,93,88,186,184,45,11,57,
    241,188,46,156,97,180,41,136,90,14,136,38,154,67,194,202,
    139,165,1,113,205,217,39,242,86,65,108,12,9,239,141,66,
    211,52,71,19,139,230,14,97,238,20,47,73,235,178,48,8,
    131,59,5,129,67,0,7,133,185,11,224,144,48,135,81,216,
    37,154,35,194,26,22,75,187,73,109,105,143,52,123,90,154,
    221,11,179,159,33,179,166,172,57,40,204,61,164,46,199,245,
    28,105,230,73,19,253,237,133,149,17,30,229,62,177,180,159,
    203,163,74,249,128,82,62,168,148,15,41,229,195,74,249,136,
    82,190,75,41,31,85,202,199,148,242,152,82,62,174,148,79,
    40,229,147,74,185,168,148,239,86,202,247,40,229,123,149,242,
    125,74,249,148,82,190,95,41,63,128,178,156,205,253,98,125,
    92,172,63,40,214,79,139,21,25,224,125,241,204,61,36,172,
    156,88,127,88,44,61,44,44,249,251,144,184,45,57,96,238,
    87,90,60,130,22,163,113,139,9,180,152,20,75,147,194,146,
    191,19,97,139,130,40,143,31,146,188,178,255,71,254,27,215,
    100,41,24,150,226,186,229,249,182,235,84,108,103,197,181,117,
    170,47,144,32,22,86,73,236,136,232,120,129,232,248,94,1,
    46,154,122,68,199,91,66,26,214,200,151,154,46,110,161,112,
    75,23,205,113,177,165,137,245,188,48,115,98,75,118,51,64,
    3,88,213,196,109,93,188,144,35,133,91,82,230,37,105,78,
    136,124,16,114,113,29,164,9,45,237,16,183,6,196,214,128,
    40,47,110,233,4,108,12,10,239,221,226,197,49,24,221,9,
    163,186,216,146,50,47,110,231,197,173,130,184,38,149,36,180,
    62,72,238,107,139,91,210,83,137,148,199,243,114,180,151,21,
    119,201,21,211,246,28,163,110,5,35,178,92,105,24,158,81,
    175,44,84,237,139,214,117,187,106,141,15,177,150,235,79,52,
    140,96,173,132,102,57,154,143,122,35,128,57,215,177,130,93,
    178,176,98,59,102,165,238,154,155,53,43,216,73,182,42,43,
    118,205,170,84,80,57,95,111,184,94,240,132,231,185,94,137,
    166,20,96,205,53,226,22,52,161,213,154,235,91,227,212,27,
    186,41,145,249,128,180,87,26,176,72,3,192,80,169,177,105,
    249,85,207,110,4,50,82,161,69,210,38,107,227,20,35,8,
    255,172,20,147,107,110,221,154,180,170,198,228,170,85,159,155,
    92,222,180,107,230,228,185,210,165,201,70,51,88,115,157,73,
    137,217,78,96,201,57,168,77,182,121,63,33,85,246,147,157,
    27,246,106,197,134,7,149,53,171,214,176,188,221,132,30,165,
    62,180,17,109,88,43,104,57,109,92,219,45,75,3,242,47,
    167,141,233,187,180,203,54,249,80,37,191,136,62,121,149,48,
    20,69,77,108,232,194,27,35,58,172,203,95,141,226,39,73,
    81,166,58,29,117,175,37,231,67,116,61,71,65,14,193,45,
    80,72,114,73,106,158,161,168,58,2,60,24,16,235,5,17,
    242,67,210,42,36,140,215,36,41,213,201,140,46,141,231,133,
    255,14,33,39,83,50,99,75,68,172,185,157,19,154,51,34,
    130,33,74,72,18,61,36,59,124,11,136,87,30,167,225,95,
    6,1,130,53,219,119,111,56,152,102,42,99,169,148,229,204,
    44,52,175,44,175,91,213,192,63,41,129,231,220,205,98,213,
    112,28,55,40,26,166,89,52,130,192,179,151,55,3,203,47,
    6,110,241,148,63,78,145,43,237,99,14,197,246,154,13,230,
    12,197,87,114,38,188,48,237,106,32,47,70,113,129,40,248,
    86,32,227,191,230,154,190,196,201,196,170,21,148,104,144,1,
    77,178,139,129,128,30,21,82,165,238,165,222,30,121,125,142,
    71,2,14,142,23,152,49,190,85,91,9,134,64,62,195,247,
    43,24,9,225,224,25,25,190,110,212,54,45,88,247,165,61,
    57,32,42,134,99,216,94,166,29,161,81,179,147,24,185,227,
    58,102,83,14,196,174,62,64,125,28,1,223,134,193,184,131,
    146,109,59,164,44,200,255,11,218,33,189,154,143,56,86,96,
    158,81,98,11,4,162,172,69,129,150,156,187,45,147,200,184,
    142,44,128,193,99,157,221,67,37,106,92,26,35,113,156,196,
    9,18,39,217,191,109,115,114,119,187,147,143,145,97,29,158,
    193,7,154,242,28,251,96,38,214,202,93,173,181,34,179,90,
    153,56,175,211,202,104,113,62,79,25,208,59,75,82,170,98,
    53,229,132,127,149,242,45,173,13,24,163,101,32,9,77,165,
    22,205,49,35,37,202,128,227,59,153,161,37,162,157,202,189,
    85,133,123,37,10,6,136,87,186,139,211,89,133,52,66,202,
    149,142,145,169,129,148,41,45,146,184,123,219,231,181,69,158,
    213,14,242,60,78,125,140,68,228,217,13,210,12,201,191,17,
    189,154,139,38,59,222,205,70,219,72,67,140,201,167,48,230,
    126,42,229,58,221,187,83,100,137,156,122,82,33,11,141,67,
    87,199,126,89,22,154,135,105,200,42,77,14,203,61,248,154,
    115,88,110,171,58,182,213,71,177,173,98,107,198,193,43,76,
    166,57,228,211,176,48,64,190,175,228,196,161,104,187,244,7,
    165,108,120,238,205,102,209,93,41,6,112,142,114,223,153,83,
    254,196,41,255,113,153,213,138,103,145,79,194,188,22,102,46,
    207,106,80,230,161,166,79,220,172,90,216,166,112,85,169,132,
    137,166,130,164,83,137,182,63,201,152,131,52,115,58,79,41,
    82,174,31,120,148,105,183,119,82,135,226,73,165,49,62,77,
    86,135,48,163,57,237,176,100,199,144,134,174,43,97,42,197,
    121,7,181,242,239,60,205,50,185,103,9,58,117,151,202,225,
    192,48,102,26,125,233,225,4,3,182,107,196,165,73,105,226,
    89,142,124,161,21,121,250,203,49,107,223,38,112,228,211,196,
    203,130,98,43,67,24,177,54,38,57,5,115,148,212,223,32,
    64,239,148,29,24,57,161,76,187,46,52,100,170,240,31,131,
    106,184,33,63,45,222,174,172,13,222,54,115,209,161,78,221,
    54,243,113,62,1,41,250,218,26,243,201,196,67,81,88,51,
    124,82,11,179,73,107,185,181,114,115,124,26,147,217,116,219,
    24,178,51,180,87,161,174,95,104,241,131,54,158,99,218,168,
    174,68,125,138,196,116,28,112,141,177,237,24,197,73,145,189,
    29,86,194,60,252,60,117,149,199,224,246,238,192,234,138,45,
    196,196,29,96,226,78,199,196,181,176,95,188,132,115,59,73,
    157,2,120,91,215,228,141,161,60,0,209,125,88,94,88,3,
    98,169,64,20,199,185,84,139,86,128,198,185,134,50,83,98,
    51,130,239,151,195,89,137,99,24,134,135,196,205,237,93,195,
    20,161,51,53,163,190,108,26,103,111,145,77,50,92,229,53,
    161,243,40,71,212,81,18,159,181,172,129,226,114,142,71,123,
    125,123,215,239,43,164,137,120,148,96,171,233,86,177,104,175,
    174,89,197,186,85,95,150,55,92,107,118,163,184,82,51,86,
    49,215,185,200,139,43,236,69,128,96,181,111,216,254,105,146,
    110,177,234,58,50,85,110,86,3,215,43,154,150,188,15,177,
    204,226,35,69,228,217,162,237,23,141,101,89,107,84,131,144,
    159,201,181,132,179,158,225,173,250,56,214,109,220,160,226,246,
    199,170,34,239,37,109,121,146,125,147,136,247,175,240,54,39,
    78,155,56,163,134,116,151,91,141,188,195,8,154,97,250,160,
    205,187,52,65,226,65,113,71,178,235,108,72,18,225,211,4,
    20,180,99,250,160,30,236,85,151,210,2,181,241,59,23,212,
    251,10,125,44,168,240,25,139,84,176,10,98,125,7,228,78,
    202,171,75,131,12,14,65,238,2,56,204,224,110,200,61,0,
    247,50,56,2,185,15,224,126,6,71,33,15,0,60,200,224,
    33,200,195,0,143,48,120,23,228,81,128,199,24,28,131,60,
    14,240,4,131,39,33,139,0,239,102,240,30,200,123,1,222,
    199,224,41,200,251,1,62,192,224,56,228,131,0,79,51,248,
    16,228,195,0,31,97,112,2,114,18,224,163,12,78,65,78,
    3,156,97,112,22,114,14,224,43,24,124,12,242,149,0,63,
    143,193,207,135,124,28,224,25,6,95,5,121,22,224,23,48,
    248,106,200,115,0,207,51,120,1,242,34,192,39,24,124,18,
    242,53,0,159,98,112,30,242,105,128,95,200,224,51,144,151,
    0,94,102,240,10,228,2,192,215,50,88,130,44,3,188,202,
    224,179,144,175,3,120,141,193,69,200,231,0,46,49,248,60,
    228,11,0,95,207,224,27,32,43,0,223,200,160,1,185,12,
    176,202,160,9,105,1,92,97,112,21,114,13,160,205,224,58,
    228,6,192,26,131,117,72,7,160,203,96,3,242,139,0,122,
    12,250,144,1,192,77,6,175,67,222,0,120,147,193,38,228,
    139,0,191,152,193,45,200,91,0,191,132,193,55,65,190,25,
    224,151,50,248,22,200,219,0,95,98,240,173,144,47,3,124,
    27,131,111,135,252,50,128,95,206,224,87,64,126,37,192,175,
    98,240,171,33,191,6,224,215,50,248,117,144,95,15,240,27,
    24,252,70,200,119,0,252,38,6,191,25,242,91,0,126,43,
    131,223,6,249,237,0,191,131,193,239,132,252,46,128,223,205,
    224,247,64,190,19,224,187,24,252,94,200,239,3,248,110,6,
    223,3,249,253,0,127,128,193,247,66,190,15,224,15,50,248,
    67,144,63,12,240,71,24,252,81,200,31,3,248,227,12,254,
    4,228,79,2,252,41,6,223,15,249,1,128,31,100,240,67,
    144,63,13,240,103,24,252,48,228,71,0,126,148,193,143,65,
    126,28,224,207,50,248,115,144,63,15,240,23,24,252,4,228,
    39,1,126,138,193,79,67,254,34,192,95,98,240,151,33,127,
    5,224,175,50,248,107,144,191,14,240,55,24,252,12,228,111,
    2,252,45,6,127,27,242,119,0,254,46,131,191,7,249,89,
    128,191,207,224,31,64,254,33,192,63,98,240,143,33,255,4,
    224,231,24,252,83,200,63,3,248,231,12,254,5,228,95,2,
    252,43,6,255,26,242,111,0,254,45,131,127,7,249,247,0,
    255,129,193,127,132,252,39,128,255,204,224,191,64,254,43,192,
    127,227,195,219,191,3,252,15,177,244,159,252,89,192,127,209,
    65,174,240,127,61,200,225,124,180,253,39,163,151,183,245,252,
    86,122,236,206,14,178,244,74,17,221,112,101,157,221,18,247,
    228,231,194,179,91,56,183,242,182,172,121,0,14,133,143,109,
    224,144,118,205,57,42,111,206,243,184,57,63,67,55,231,91,
    184,129,175,232,225,253,121,43,36,120,154,130,39,189,212,189,
    99,221,168,180,29,81,194,251,111,138,179,209,104,88,142,89,
    58,45,212,91,106,84,111,239,212,208,225,236,179,66,185,67,
    202,105,7,228,61,116,39,205,232,148,169,184,2,58,13,196,
    196,26,187,35,49,251,28,199,108,252,191,19,71,205,210,25,
    18,35,137,115,101,56,175,71,58,143,125,149,243,231,74,143,
    210,227,151,236,74,121,123,134,83,52,93,4,197,12,173,103,
    172,85,163,218,156,191,2,83,61,149,200,228,112,100,146,193,
    96,44,163,85,217,126,209,130,217,174,10,100,114,103,100,146,
    128,44,127,166,186,57,59,165,58,59,149,229,199,84,63,206,
    78,165,57,59,213,203,217,169,94,206,78,181,59,59,213,205,
    217,233,110,206,78,171,206,78,103,249,49,221,143,179,211,105,
    206,78,247,114,118,186,151,179,211,237,206,78,119,115,118,166,
    155,179,51,170,179,51,89,126,204,244,227,236,76,154,179,51,
    189,156,157,233,229,236,76,187,179,51,221,156,157,237,230,236,
    172,234,236,108,150,31,179,253,56,59,155,230,236,108,47,103,
    103,123,57,59,219,238,236,108,55,103,231,186,57,59,167,58,
    59,151,229,199,92,63,206,206,165,57,59,215,203,217,185,94,
    206,206,181,59,59,151,237,236,124,249,106,182,179,84,25,59,
    43,47,130,187,83,180,46,24,213,53,235,25,219,177,226,97,
    245,214,34,163,116,82,74,160,25,237,26,198,178,93,179,131,
    230,66,224,117,177,174,106,181,172,43,104,112,34,181,157,103,
    46,111,250,23,230,203,48,221,67,133,236,14,193,46,67,193,
    241,180,22,244,156,232,130,107,134,147,209,93,131,76,210,115,
    198,24,9,142,165,233,187,245,186,225,152,176,215,173,158,172,
    209,99,160,232,58,149,31,225,197,252,197,76,2,197,10,76,
    32,6,82,89,252,196,205,134,225,208,219,13,165,43,151,50,
    169,158,80,98,170,171,96,234,204,63,101,25,166,229,93,109,
    54,172,204,224,40,42,28,156,22,148,202,148,121,58,228,120,
    155,141,128,88,151,201,167,164,22,243,41,129,166,58,26,107,
    44,216,78,230,108,36,148,120,54,84,48,181,213,51,70,96,
    57,213,230,85,187,110,121,153,166,19,74,108,90,5,211,91,
    69,9,231,188,225,91,217,166,85,165,216,180,2,6,247,165,
    180,186,84,158,191,112,110,129,170,175,172,172,208,103,0,100,
    190,47,69,234,130,206,148,237,21,120,142,159,222,90,174,247,
    249,112,145,244,210,33,59,187,98,227,192,130,123,50,219,92,
    50,252,141,243,118,224,195,116,31,106,100,125,79,108,157,225,
    84,162,69,42,254,234,57,211,204,78,111,73,45,166,99,2,
    237,222,238,66,224,213,122,91,135,86,135,117,66,187,183,187,
    104,4,70,111,235,208,234,176,78,104,112,127,183,118,207,202,
    123,47,47,158,158,62,85,169,159,253,106,63,113,21,62,214,
    74,183,112,217,186,25,180,246,12,116,215,183,50,117,120,32,
    238,48,89,25,156,202,180,178,32,111,43,109,103,53,102,87,
    127,154,212,217,190,184,51,165,38,171,253,98,231,34,236,79,
    83,233,41,89,147,154,35,34,173,214,58,236,169,196,137,68,
    5,131,7,179,91,165,132,168,127,109,234,236,96,171,179,182,
    32,101,228,140,69,117,249,244,210,81,242,202,98,143,165,179,
    184,176,108,40,225,232,173,165,44,157,22,26,220,155,209,238,
    170,177,92,83,195,221,143,30,217,219,27,245,160,224,233,41,
    207,184,105,215,55,235,209,222,146,157,25,147,106,113,102,76,
    192,233,52,177,29,82,121,141,103,56,65,54,151,84,165,152,
    75,10,152,234,247,194,165,206,229,208,143,30,207,79,27,158,
    122,50,129,78,107,33,244,80,225,195,75,11,74,93,159,92,
    29,82,214,182,178,115,70,167,38,175,228,142,154,108,215,137,
    190,101,153,158,55,253,238,83,164,232,37,166,168,133,7,15,
    100,181,77,89,208,253,234,82,95,163,220,87,219,98,78,29,
    107,74,22,236,71,47,246,105,177,143,176,47,246,14,251,98,
    103,216,23,187,135,125,177,239,176,119,104,198,97,111,175,73,
    93,79,208,146,136,84,156,206,92,116,9,37,94,116,42,152,
    186,107,42,10,73,63,250,86,230,45,54,173,178,251,64,57,
    125,247,84,234,240,38,43,129,171,10,211,153,9,60,169,197,
    9,60,129,166,102,77,214,80,22,95,31,106,156,92,147,112,
    182,211,242,46,102,67,206,97,247,153,97,165,196,204,68,96,
    182,207,80,232,118,230,76,106,37,102,134,209,236,181,73,26,
    189,242,82,155,94,98,13,183,240,244,92,147,113,208,232,87,
    55,206,75,41,135,140,163,105,54,60,119,117,254,73,116,209,
    165,154,172,210,71,17,225,101,234,157,123,73,94,224,139,6,
    89,183,246,177,2,223,218,51,144,218,177,50,197,93,170,121,
    92,93,216,86,222,92,78,62,19,233,169,196,108,83,193,212,
    195,151,84,240,155,126,96,213,163,7,26,189,116,248,128,166,
    96,169,137,52,174,127,157,60,92,187,94,100,189,63,77,78,
    185,29,53,169,49,73,116,208,85,129,131,22,155,75,203,9,
    85,215,89,177,87,43,181,30,231,178,54,53,78,29,73,56,
    245,161,224,154,235,7,153,79,12,81,201,79,12,233,34,245,
    113,85,163,106,87,150,35,102,117,171,231,199,89,209,117,166,
    174,105,93,239,106,139,234,85,91,242,58,117,166,169,110,101,
    211,169,102,134,34,86,224,80,48,144,202,187,134,237,38,226,
    208,75,135,185,169,96,248,64,48,160,55,239,77,171,102,5,
    86,251,39,148,225,119,108,194,215,188,76,185,11,122,110,179,
    82,9,223,183,149,215,181,74,229,14,188,223,245,42,105,226,
    173,100,235,61,2,239,119,105,5,237,224,255,223,31,125,176,
    48,168,225,245,188,182,111,94,133,147,242,168,224,247,93,155,
    126,137,144,18,237,18,225,167,151,8,48,191,59,71,159,113,
    226,73,237,101,163,30,126,229,3,223,114,40,209,230,131,183,
    215,75,180,61,132,31,128,210,11,252,120,201,56,124,65,219,
    177,110,224,213,65,188,41,88,154,33,156,52,234,115,19,60,
    205,19,241,52,63,69,107,70,71,45,232,156,162,100,187,97,
    44,176,0,59,235,203,72,57,29,141,45,103,179,94,185,100,
    213,93,175,121,137,146,233,88,91,61,61,26,41,25,206,170,
    85,185,110,209,123,143,216,181,19,10,209,75,143,161,13,214,
    42,166,142,33,169,155,225,136,172,12,191,231,131,133,209,89,
    127,161,230,86,55,44,51,210,57,158,173,115,209,173,27,18,
    79,239,165,108,115,47,251,218,234,77,143,90,29,108,67,125,
    203,179,141,26,125,26,209,30,35,204,224,194,13,143,54,186,
    206,249,139,130,227,222,176,60,154,223,26,178,174,170,208,170,
    130,129,172,105,110,183,19,246,150,225,219,230,114,20,237,244,
    25,188,186,102,121,117,163,22,205,79,251,136,227,153,225,161,
    156,232,102,36,116,42,125,28,23,235,70,68,73,90,50,92,
    137,243,86,187,2,45,136,248,10,175,138,34,187,197,9,6,
    169,204,179,86,109,233,150,7,11,177,118,152,241,144,126,82,
    147,179,218,114,251,211,94,248,138,116,248,229,138,179,148,165,
    241,93,34,250,230,212,224,222,65,173,160,211,171,26,57,109,
    72,219,173,229,115,195,35,131,249,225,93,131,249,193,29,57,
    124,53,102,183,54,170,15,229,7,119,13,107,253,255,156,148,
    105,107,72,63,185,52,168,253,47,194,140,48,238,
};

EmbeddedPython embedded_m5_internal_param_PciDevice(
    "m5/internal/param_PciDevice.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_PciDevice.py",
    "m5.internal.param_PciDevice",
    data_m5_internal_param_PciDevice,
    4157,
    15538);

} // anonymous namespace
