#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_AbstractNVM_vector[] = {
    120,156,197,91,123,104,37,87,25,255,102,238,35,123,243,216,
    36,155,205,107,55,221,189,125,108,155,86,221,248,232,90,181,
    101,219,181,214,210,74,183,118,82,221,54,173,78,39,119,78,
    146,73,238,157,185,157,153,236,110,106,86,169,89,173,79,84,
    124,160,34,34,130,168,136,32,8,130,32,8,130,32,8,162,
    32,8,130,32,20,4,65,16,252,79,16,234,247,251,206,204,
    189,115,147,123,213,221,123,39,54,155,175,39,115,207,253,158,
    191,243,157,115,190,115,166,70,201,127,37,254,125,168,74,20,
    189,96,16,185,252,207,160,58,81,195,160,21,131,12,101,144,
    123,156,182,74,20,222,75,110,137,174,19,173,152,164,76,218,
    227,70,129,158,51,201,31,149,239,148,169,94,144,39,6,237,
    12,147,42,210,74,137,46,249,147,84,84,101,218,26,166,240,
    5,50,12,195,55,232,25,119,136,220,35,116,157,185,115,163,
    34,12,143,16,30,14,203,195,10,185,35,242,112,152,220,81,
    105,140,208,206,4,169,81,90,25,67,183,149,163,204,246,30,
    102,59,46,108,127,11,182,46,127,50,77,238,81,116,103,189,
    158,69,207,34,122,138,188,113,225,50,65,174,112,89,99,123,
    38,91,29,39,73,21,104,243,24,173,28,35,197,255,38,105,
    143,77,78,204,153,162,149,227,169,105,211,153,246,76,166,61,
    43,237,99,41,227,169,22,227,57,97,60,79,43,243,164,248,
    223,156,102,92,166,229,197,25,246,182,247,26,255,183,200,222,
    166,120,148,201,101,21,70,94,224,219,158,191,22,120,38,62,
    47,131,32,54,53,144,161,36,72,15,35,72,223,39,137,144,
    107,38,65,186,70,204,216,128,66,117,147,174,73,227,154,73,
    59,139,180,107,208,102,145,220,2,237,178,152,18,20,88,55,
    104,207,164,231,11,232,112,141,105,145,93,121,138,138,177,142,
    208,166,184,82,115,26,162,107,37,218,45,209,242,51,187,38,
    30,108,85,40,252,14,189,180,32,76,143,8,83,147,118,153,
    22,105,175,72,215,202,116,137,59,241,163,205,10,204,55,158,
    217,101,75,249,201,242,98,145,181,189,152,49,23,166,184,94,
    232,59,13,21,79,113,219,190,176,26,197,161,83,139,47,190,
    255,9,251,178,170,197,65,184,56,156,118,12,162,179,77,39,
    222,176,228,155,5,184,164,209,140,133,99,224,171,120,132,27,
    107,158,239,218,141,192,221,174,171,248,8,216,217,107,94,93,
    217,182,124,248,88,163,25,132,241,35,97,24,132,22,188,42,
    15,235,129,211,250,6,124,90,171,7,145,90,132,52,17,99,
    129,125,140,222,107,77,225,8,5,68,91,124,217,85,81,45,
    244,154,49,7,75,115,68,111,112,91,68,152,132,68,23,152,
    44,109,4,13,181,164,106,206,210,186,106,156,91,90,221,246,
    234,238,210,5,235,137,165,230,78,188,17,248,75,252,204,243,
    99,197,110,168,47,29,116,192,89,238,117,12,172,174,120,235,
    182,39,70,216,27,170,222,84,225,24,158,158,128,24,99,194,
    24,53,202,70,193,88,52,198,184,85,226,223,130,177,96,142,
    24,23,61,152,81,131,105,0,81,49,11,27,196,210,160,45,
    147,194,5,128,98,147,255,25,136,34,67,99,25,159,153,242,
    217,83,176,95,63,221,44,32,212,250,225,174,0,137,17,197,
    61,31,64,108,125,18,52,148,104,179,76,26,37,12,46,13,
    155,112,7,148,187,131,141,201,204,139,20,125,153,216,159,140,
    143,93,74,176,179,87,32,195,159,160,120,24,131,149,159,206,
    176,192,143,10,252,150,23,161,254,69,193,64,188,225,69,193,
    21,95,60,141,182,12,152,101,246,204,123,119,158,92,221,100,
    127,69,167,249,193,179,193,118,181,230,248,126,16,87,29,215,
    173,58,113,28,122,171,219,177,138,170,113,80,61,19,45,34,
    120,214,100,10,163,22,191,157,102,10,27,132,152,97,163,255,
    112,189,90,204,127,8,62,109,137,66,164,98,134,192,70,224,
    70,252,28,44,214,85,108,65,201,24,78,14,68,17,65,136,
    141,174,16,207,253,142,242,223,23,82,77,4,134,139,229,20,
    52,145,170,175,197,195,130,63,39,138,108,209,4,207,5,106,
    96,124,217,169,111,43,225,30,49,63,86,8,77,173,195,192,
    193,54,7,197,83,59,69,121,63,240,221,29,214,197,171,221,
    5,49,115,2,185,81,1,221,52,3,110,136,105,153,255,95,
    54,102,204,90,49,129,89,57,133,26,50,92,76,18,104,35,
    137,53,195,110,143,179,201,162,41,233,64,244,151,209,118,27,
    90,248,178,181,0,114,11,200,41,144,211,169,137,131,180,115,
    108,191,157,247,129,183,41,198,137,25,112,124,33,53,195,237,
    24,49,243,237,17,195,25,110,25,200,55,49,62,218,200,47,
    34,27,134,231,65,185,171,140,169,2,69,79,35,247,98,132,
    8,51,12,6,134,53,90,109,176,139,83,172,9,24,123,36,
    197,169,5,240,101,17,184,158,65,160,133,120,8,252,172,249,
    52,175,217,232,161,129,103,157,4,171,82,23,175,86,65,110,
    205,195,181,109,8,173,31,128,208,253,16,51,145,64,104,76,
    160,51,204,191,19,102,173,144,248,187,53,185,77,237,131,14,
    112,83,236,130,155,59,209,42,28,180,48,71,200,36,118,189,
    59,3,25,168,98,102,213,191,200,141,157,89,104,157,5,203,
    44,207,202,151,252,89,158,104,77,153,104,223,40,19,173,76,
    214,178,64,209,137,181,32,185,85,55,74,48,127,173,64,51,
    201,4,26,85,152,54,195,224,234,78,53,88,171,198,98,31,
    242,224,3,103,162,179,103,162,251,57,195,85,207,75,110,209,
    57,78,103,177,80,53,145,133,240,213,71,174,214,148,204,90,
    242,151,109,235,164,99,75,2,178,147,217,144,113,51,13,231,
    153,169,87,37,253,178,79,144,117,7,238,215,225,150,95,161,
    230,227,96,60,44,78,45,24,179,140,145,97,67,164,219,58,
    179,202,34,72,62,229,223,119,194,209,176,80,17,22,168,214,
    178,214,77,212,134,1,214,235,59,112,48,64,165,173,37,230,
    242,190,52,254,229,118,252,241,91,72,225,251,10,201,82,208,
    160,143,19,34,204,129,76,224,219,66,59,66,58,133,238,31,
    36,193,121,151,57,89,242,195,50,230,97,233,193,105,35,186,
    79,186,234,41,250,113,250,68,102,144,164,19,105,33,89,236,
    101,39,210,98,43,183,8,52,254,167,201,178,216,153,132,16,
    136,13,39,66,55,157,89,218,227,174,157,170,91,75,52,206,
    172,131,196,201,17,205,210,134,244,231,219,40,193,84,116,210,
    152,50,51,177,127,19,200,155,91,97,55,210,103,3,82,228,
    52,245,158,35,109,157,153,159,131,180,162,232,55,62,36,179,
    191,94,167,60,198,140,29,102,211,130,113,41,133,241,171,45,
    24,43,153,70,174,203,210,30,212,68,44,247,76,131,119,84,
    188,58,194,6,166,72,170,68,43,101,82,67,88,129,99,159,
    84,74,247,73,229,100,159,212,222,90,141,74,187,34,237,49,
    217,90,17,246,67,201,214,106,60,221,90,241,166,104,76,26,
    147,201,238,137,247,65,201,126,105,10,251,37,52,142,39,251,
    165,149,105,108,116,208,152,73,54,58,43,179,216,26,162,49,
    135,253,23,26,243,228,206,72,227,4,185,179,210,56,137,17,
    138,217,65,70,75,250,43,217,18,185,181,99,82,149,160,93,
    212,225,108,225,79,67,11,228,234,192,179,16,208,245,64,221,
    105,172,186,206,249,117,176,5,239,90,58,164,205,84,209,137,
    172,162,24,142,70,47,93,229,207,115,169,194,151,7,158,129,
    222,202,92,90,138,202,120,115,131,154,164,157,167,55,84,181,
    161,26,171,188,149,220,240,154,213,181,186,179,46,30,47,36,
    134,60,153,26,18,11,198,246,47,63,162,123,64,131,106,45,
    240,89,238,54,228,85,93,197,219,43,229,86,223,80,149,249,
    162,234,69,85,39,209,74,15,175,206,108,32,235,87,39,92,
    143,100,169,186,117,5,205,92,34,102,243,70,217,227,5,186,
    71,157,83,113,7,184,160,140,219,198,148,232,91,106,37,134,
    5,202,97,122,64,112,26,45,20,165,218,180,80,52,166,157,
    191,105,164,203,195,44,132,100,55,121,252,64,202,176,101,27,
    144,163,206,72,107,65,219,143,122,243,216,154,211,178,3,160,
    165,186,158,143,14,106,63,117,80,123,207,175,133,153,5,5,
    190,225,15,28,18,136,52,4,133,25,56,12,204,2,87,101,
    45,176,206,231,16,3,49,0,114,182,251,54,96,182,139,1,
    188,101,118,252,154,202,24,113,46,15,35,48,48,83,89,87,
    251,54,164,203,72,80,47,110,59,245,188,173,64,134,16,65,
    31,234,146,91,110,96,36,119,65,82,45,104,238,228,55,144,
    5,68,16,241,225,129,43,238,171,171,113,206,138,67,196,203,
    253,41,222,5,250,182,168,110,219,57,42,159,20,143,68,204,
    245,129,27,208,12,213,101,47,216,142,114,54,32,21,243,74,
    223,195,118,230,160,13,142,123,121,95,250,201,37,135,98,147,
    146,136,250,84,223,102,76,119,195,146,122,145,145,148,115,250,
    41,11,156,32,233,179,249,24,225,171,195,50,2,146,62,223,
    183,17,93,71,181,199,187,214,14,51,114,65,84,178,210,20,
    89,95,204,201,144,104,123,245,208,12,17,89,95,201,99,136,
    219,246,161,4,68,10,66,90,212,215,136,14,20,225,96,198,
    163,221,204,248,76,183,108,219,213,140,253,225,120,123,126,102,
    136,168,111,208,193,25,163,99,3,179,219,222,192,136,26,121,
    79,100,30,247,177,237,111,182,213,90,20,63,180,202,106,82,
    212,208,85,144,102,24,52,85,24,239,232,218,18,74,188,214,
    89,144,187,59,18,144,171,234,42,86,118,167,167,227,9,106,
    149,181,93,197,218,4,59,182,157,248,133,191,96,219,178,43,
    177,30,4,129,117,214,195,32,143,128,60,10,242,24,200,123,
    64,158,0,121,18,228,41,144,101,16,20,232,172,75,32,207,
    130,160,40,99,61,223,225,178,65,238,159,238,101,46,107,96,
    7,247,148,141,147,102,197,44,27,21,163,98,86,10,163,252,
    83,233,245,99,202,9,159,230,147,61,3,61,88,35,226,205,
    250,127,175,17,233,243,246,164,82,84,78,75,67,67,105,105,
    72,14,216,209,168,72,129,72,87,141,42,105,213,72,87,135,
    70,211,234,208,88,90,29,58,154,86,135,198,211,234,208,68,
    90,29,154,76,171,67,199,210,234,208,84,90,29,58,158,86,
    135,166,211,234,208,76,90,29,154,77,171,67,115,105,117,104,
    158,220,185,180,94,52,159,212,139,220,19,210,88,32,247,164,
    52,110,33,119,65,26,167,200,189,69,26,167,201,61,37,141,
    42,185,167,165,113,43,185,85,105,220,70,238,173,210,184,157,
    220,219,164,113,7,185,183,75,227,12,185,119,72,227,78,82,
    119,209,230,34,173,220,77,238,25,121,114,15,138,84,56,83,
    232,171,72,149,203,116,42,85,133,239,209,32,107,83,214,125,
    185,235,105,189,141,146,114,120,175,186,212,13,174,142,79,118,
    29,45,146,176,144,82,114,206,140,169,152,31,208,127,72,216,
    195,173,72,236,237,171,59,213,40,207,220,45,217,237,135,93,
    52,187,1,247,158,234,238,94,27,69,238,151,84,24,228,186,
    137,210,199,151,45,73,63,234,207,148,30,72,177,237,213,32,
    168,31,194,102,80,139,249,113,127,70,156,232,101,68,93,249,
    185,218,160,103,97,145,242,147,140,9,217,163,43,49,97,138,
    58,23,89,250,24,234,160,33,167,123,25,178,174,226,168,238,
    213,176,31,105,87,144,13,25,107,160,155,3,183,108,148,146,
    67,242,68,236,79,247,69,232,198,215,144,61,109,139,218,182,
    229,188,152,212,70,181,229,253,44,215,152,241,226,236,64,204,
    172,45,144,122,126,198,181,133,254,188,239,136,245,76,115,44,
    132,115,124,35,255,128,141,164,54,105,113,191,200,207,36,70,
    250,97,154,212,18,247,203,252,76,138,14,215,164,150,184,95,
    81,95,201,124,166,187,61,205,160,153,99,34,135,203,89,194,
    175,51,170,223,220,134,127,190,187,246,78,179,169,124,247,48,
    106,73,90,210,111,250,139,193,92,119,43,84,163,25,231,89,
    149,151,243,4,200,248,93,127,234,207,118,87,63,242,94,202,
    241,112,80,95,84,100,17,191,239,27,68,189,244,191,226,52,
    51,16,202,99,95,162,141,96,57,127,200,5,64,171,106,221,
    243,115,6,144,200,248,99,46,57,8,67,56,223,28,196,18,
    254,212,159,234,61,18,80,152,183,235,145,123,180,144,63,231,
    50,120,195,124,157,15,220,67,196,171,185,224,190,86,87,78,
    158,187,110,125,53,159,101,252,165,63,245,171,221,213,95,199,
    149,178,122,61,168,229,92,60,128,130,29,178,254,218,159,57,
    61,54,183,60,209,219,171,78,109,43,239,131,194,68,204,223,
    246,25,113,227,75,188,94,211,113,232,68,42,239,197,157,204,
    201,16,244,247,125,102,164,55,145,197,140,119,181,205,96,27,
    244,59,53,199,165,190,147,94,251,198,27,61,151,252,19,84,
    228,161,134,107,189,15,226,90,239,174,92,217,180,77,125,179,
    183,93,7,42,81,54,19,251,234,138,125,208,124,93,171,195,
    205,3,11,183,177,50,123,44,248,65,62,29,120,237,8,133,
    251,127,16,165,247,42,199,141,130,113,220,24,187,217,105,126,
    161,7,60,183,163,13,141,207,156,151,139,114,77,58,21,246,
    207,92,18,223,90,24,248,121,94,135,0,80,68,198,191,250,
    83,191,199,164,147,115,150,192,164,3,17,175,101,148,191,233,
    58,68,175,157,71,20,121,235,126,102,116,156,207,13,79,178,
    253,16,113,166,209,111,202,235,181,140,81,178,136,207,57,231,
    201,90,70,36,149,242,50,196,243,35,21,198,135,97,136,150,
    116,36,99,200,205,101,171,30,69,86,246,147,10,47,31,202,
    141,149,68,212,136,145,199,162,160,230,52,157,154,151,235,246,
    22,139,130,84,204,209,46,70,24,169,17,255,167,219,184,147,
    70,114,30,181,248,58,202,158,99,91,31,0,145,147,235,246,
    161,53,78,105,228,44,197,82,32,184,102,109,225,138,177,133,
    59,189,22,46,201,90,47,130,128,161,133,187,154,214,21,144,
    29,74,39,237,107,32,31,1,121,25,100,15,228,99,32,184,
    88,101,125,18,228,211,32,184,219,99,125,14,228,11,32,114,
    118,254,37,16,220,206,176,190,10,242,117,16,92,15,176,112,
    24,111,125,11,228,219,29,35,48,57,89,239,178,138,176,209,
    239,133,14,151,14,210,175,14,115,249,46,216,225,165,157,178,
    113,210,40,155,56,237,190,161,159,161,253,167,225,21,67,242,
    249,190,151,159,181,238,24,166,250,213,146,157,200,194,19,107,
    188,229,9,125,125,45,185,137,128,160,202,18,224,162,211,208,
    239,91,202,251,133,214,237,32,56,221,181,238,106,69,28,46,
    148,247,121,244,27,81,188,32,147,59,238,114,165,221,122,11,
    200,189,233,208,218,119,77,4,215,22,66,222,21,70,252,32,
    198,139,103,141,115,103,83,151,157,109,58,161,211,200,70,67,
    94,37,110,156,19,70,7,59,46,123,13,253,18,107,60,185,
    239,115,55,116,184,61,189,239,41,103,11,207,169,115,22,151,
    40,244,42,212,103,53,204,5,3,250,189,9,253,218,216,121,
    212,74,163,135,152,224,229,208,202,120,133,241,128,119,145,11,
    198,48,175,35,139,133,209,137,74,113,116,164,82,172,12,21,
    228,189,191,49,99,202,28,46,86,70,102,222,81,49,134,185,
    167,254,153,217,170,24,255,6,130,172,245,35,
};

EmbeddedPython embedded_m5_internal_AbstractNVM_vector(
    "m5/internal/AbstractNVM_vector.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/AbstractNVM_vector.py",
    "m5.internal.AbstractNVM_vector",
    data_m5_internal_AbstractNVM_vector,
    3452,
    16528);

} // anonymous namespace
