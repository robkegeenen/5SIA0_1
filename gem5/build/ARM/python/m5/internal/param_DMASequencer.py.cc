#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DMASequencer[] = {
    120,156,181,88,109,115,219,198,17,222,3,64,74,164,36,75,
    178,44,201,47,178,69,59,117,204,56,142,152,166,113,221,153,
    184,110,213,36,157,169,103,172,184,96,58,118,148,76,81,8,
    56,73,160,72,128,5,142,150,153,145,166,51,149,155,182,31,
    250,45,253,9,253,208,127,211,127,212,238,238,1,224,73,162,
    166,238,84,146,201,243,242,176,216,219,151,231,118,247,46,128,
    252,175,130,223,159,55,0,178,167,22,64,136,31,1,93,128,
    158,128,77,1,66,10,8,175,192,94,5,210,143,33,172,192,
    27,128,77,11,164,5,71,72,216,240,181,5,241,52,191,83,
    133,174,205,51,2,134,117,144,14,108,86,224,69,60,15,142,
    172,194,94,29,210,223,129,16,34,22,240,50,156,128,112,18,
    222,160,116,36,106,44,112,18,104,178,206,147,53,8,167,120,
    178,14,225,52,19,83,48,156,3,57,13,155,51,196,182,121,
    9,197,222,71,177,179,44,246,95,36,54,196,39,139,16,94,
    34,118,212,235,43,226,116,136,147,215,155,101,41,115,133,150,
    243,176,121,185,160,23,12,250,138,65,47,26,244,146,65,47,
    27,244,85,131,190,102,208,215,13,250,134,65,175,24,244,77,
    131,190,101,208,171,6,221,48,232,219,6,125,199,160,223,49,
    232,31,24,244,93,131,126,215,160,239,49,141,222,188,12,157,
    38,116,222,131,206,125,216,198,0,207,151,158,123,31,164,13,
    157,7,176,249,0,36,126,222,135,35,196,64,120,217,120,227,
    3,126,99,161,124,99,141,223,104,193,102,11,36,126,214,244,
    27,85,104,55,151,16,87,209,191,241,175,41,144,82,211,56,
    188,146,105,22,37,177,23,197,219,73,100,209,243,42,13,132,
    194,128,134,137,28,142,159,18,28,255,9,140,197,208,202,225,
    120,8,40,88,144,45,93,11,14,153,56,180,96,216,132,3,
    1,29,7,66,27,14,112,153,10,41,176,35,224,200,130,111,
    108,98,56,196,209,65,208,220,2,71,105,44,118,24,52,90,
    210,4,28,86,224,160,2,237,151,7,22,77,236,213,32,253,
    7,124,187,194,66,39,89,168,5,7,56,58,112,228,192,97,
    21,94,32,19,78,117,106,100,190,120,121,128,150,226,76,187,
    233,160,182,27,134,185,100,74,24,165,177,223,147,106,1,105,
    175,239,167,126,207,251,236,217,122,91,254,126,32,227,64,166,
    205,122,193,152,100,107,125,95,237,186,252,166,77,46,233,245,
    21,75,76,98,169,166,144,216,142,226,208,235,37,225,160,43,
    213,36,137,243,182,163,174,244,60,126,248,171,94,63,73,213,
    231,105,154,164,46,121,149,39,187,137,95,190,65,62,13,186,
    73,38,155,180,26,47,227,146,120,69,220,219,125,150,72,10,
    176,182,244,114,40,179,32,141,250,10,131,165,37,18,55,73,
    107,82,152,120,200,214,113,104,237,38,61,217,146,129,223,218,
    145,189,135,173,173,65,212,13,91,235,238,179,86,127,168,118,
    147,184,133,115,81,172,36,186,161,219,58,237,128,53,228,186,
    76,162,246,163,29,47,98,35,188,93,217,237,203,116,134,102,
    175,211,50,98,78,76,139,170,176,69,83,204,32,85,193,175,
    45,86,172,41,177,17,145,25,1,153,70,32,114,76,216,80,
    44,5,236,89,144,174,16,40,58,248,17,20,69,132,70,155,
    158,89,252,236,215,100,191,158,237,216,20,106,61,121,192,64,
    66,68,33,231,99,138,109,12,140,134,10,116,170,160,81,130,
    224,210,176,73,135,52,34,59,137,177,80,184,3,217,223,1,
    253,137,248,56,128,28,59,71,54,136,120,14,84,157,210,18,
    206,46,225,130,127,100,248,181,155,164,254,6,99,64,237,70,
    89,178,31,179,167,137,230,13,211,70,207,60,31,126,177,213,
    145,129,202,86,113,226,171,100,208,8,252,56,78,84,195,15,
    195,134,175,84,26,109,13,148,204,26,42,105,220,205,154,20,
    60,119,190,128,81,41,111,216,47,96,67,33,70,216,232,31,
    97,20,40,252,193,248,244,56,10,153,84,8,129,221,36,204,
    112,158,68,236,72,229,146,146,138,156,156,176,34,140,16,143,
    88,105,121,228,187,132,191,215,11,77,24,134,205,106,1,154,
    76,118,183,85,157,241,231,103,153,199,154,208,60,67,141,4,
    191,242,187,3,201,210,51,148,135,10,17,169,117,56,119,176,
    93,37,197,11,59,89,249,56,137,195,33,234,18,5,247,104,
    153,171,12,185,105,6,221,34,2,110,2,199,42,254,95,21,
    75,86,224,228,48,171,22,80,163,12,167,128,3,45,242,88,
    35,236,142,48,155,52,45,78,7,172,63,239,182,59,68,209,
    203,238,10,13,55,105,184,69,195,106,97,226,121,218,57,115,
    210,206,71,36,219,98,227,216,12,114,188,93,152,17,30,219,
    49,215,70,59,6,51,92,155,144,111,209,254,24,33,223,161,
    108,152,62,161,17,89,121,79,217,144,125,73,185,151,118,8,
    11,163,205,128,176,38,106,4,118,118,138,59,71,198,78,22,
    56,117,9,124,38,2,119,12,4,186,20,15,134,159,123,173,
    200,107,30,113,104,224,185,55,72,84,101,140,87,27,52,220,
    190,8,215,142,32,180,115,10,66,159,208,50,115,57,132,102,
    24,58,117,252,206,89,129,157,251,187,44,110,11,39,160,67,
    184,113,198,224,230,93,162,236,211,22,94,32,100,114,187,126,
    105,64,134,84,177,76,245,55,144,24,46,147,214,38,88,150,
    177,42,191,136,151,177,208,90,92,104,63,228,66,203,197,154,
    91,49,157,88,109,206,173,154,168,144,249,219,54,44,229,5,
    52,171,225,216,79,147,215,195,70,178,221,80,108,31,229,193,
    199,119,179,181,187,217,39,152,225,26,79,56,183,232,28,167,
    179,88,42,251,148,133,232,213,207,95,7,146,171,22,255,242,
    60,157,116,60,78,64,94,94,13,17,55,139,228,60,171,240,
    42,167,223,76,165,148,117,207,221,175,245,210,175,164,230,83,
    18,92,103,167,218,98,25,49,82,23,188,186,167,51,43,55,
    65,252,20,191,191,32,71,147,133,18,168,21,119,219,90,55,
    86,155,12,112,31,28,195,193,57,42,237,182,80,202,111,138,
    248,87,71,241,167,175,93,192,247,207,192,173,160,128,239,128,
    34,140,129,204,225,91,162,157,66,186,64,236,191,5,198,249,
    152,154,204,249,161,77,117,152,57,48,109,100,143,152,85,151,
    232,167,240,23,99,147,20,133,212,206,155,61,179,144,58,101,
    110,97,104,188,85,177,116,142,39,33,10,196,174,159,17,155,
    206,44,163,125,55,74,213,101,139,134,153,245,60,113,50,169,
    69,122,180,250,55,35,148,80,41,186,33,22,44,35,246,63,
    164,225,163,50,236,162,152,59,39,69,86,225,236,26,233,233,
    204,252,53,173,230,176,126,179,19,220,167,152,66,74,16,87,
    10,16,127,84,130,88,114,17,121,195,141,61,141,22,69,242,
    200,18,120,114,196,222,136,14,106,14,200,10,108,86,9,238,
    220,181,138,124,55,136,34,245,80,162,58,86,161,216,3,27,
    218,55,101,48,117,156,104,120,125,238,91,154,66,245,184,235,
    247,182,66,255,201,33,137,37,217,65,177,63,172,66,209,57,
    83,81,194,182,56,75,87,254,249,176,80,248,213,185,111,231,
    31,163,148,82,81,6,111,152,4,188,135,191,220,149,141,158,
    236,109,225,185,108,55,234,55,182,187,254,14,123,220,206,13,
    249,162,48,68,113,200,78,214,242,236,62,141,73,35,72,98,
    204,159,131,64,37,105,35,148,120,86,145,97,227,131,6,39,
    223,70,148,53,252,45,124,234,7,74,99,245,248,214,226,102,
    208,79,119,50,238,251,246,246,137,188,144,136,121,120,234,140,
    176,219,253,3,148,117,77,159,134,202,92,202,125,172,134,62,
    150,32,60,133,168,161,78,40,84,215,221,53,26,222,131,139,
    74,185,31,107,180,64,70,110,168,138,27,86,205,226,179,145,
    201,247,156,222,204,78,239,175,173,183,217,95,250,78,38,223,
    101,85,226,148,19,116,196,165,177,70,137,151,174,92,42,249,
    149,11,77,234,43,151,42,207,92,162,253,56,241,255,238,71,
    198,248,133,160,251,187,115,221,134,238,163,11,215,211,253,9,
    228,101,244,172,45,40,76,35,102,244,22,236,136,162,227,54,
    45,224,3,250,181,177,88,241,130,84,250,74,106,239,175,92,
    128,85,188,107,245,34,127,29,109,172,211,13,227,122,105,192,
    17,119,11,195,43,28,20,125,178,224,160,136,23,241,117,236,
    28,29,238,28,31,83,231,120,192,214,122,150,110,30,71,200,
    170,148,70,211,1,44,150,251,222,105,195,117,127,72,202,249,
    253,190,140,67,247,62,152,45,31,63,62,247,8,83,158,248,
    27,24,181,219,22,87,176,199,59,189,103,40,231,25,6,113,
    116,42,229,46,185,136,56,49,250,190,47,208,215,156,5,51,
    241,185,143,105,224,84,87,102,57,247,103,165,151,91,227,161,
    213,243,95,123,201,64,225,169,61,14,163,152,250,91,124,158,
    169,140,14,16,255,243,59,216,107,240,209,234,44,6,246,45,
    131,60,148,93,169,228,152,144,43,50,32,63,68,134,248,78,
    154,12,177,243,231,238,26,127,119,61,239,98,18,247,79,81,
    202,159,72,28,85,15,76,220,162,138,169,123,209,170,85,107,
    130,171,220,137,123,78,189,254,135,80,116,145,195,204,229,124,
    48,91,186,155,47,227,138,250,67,145,225,179,204,134,223,211,
    87,43,124,149,224,190,3,249,225,208,189,87,134,141,188,195,
    173,187,62,252,224,198,224,10,204,5,215,253,17,205,211,141,
    90,239,225,90,97,209,154,182,200,29,108,13,159,39,169,226,
    219,192,222,67,181,114,38,87,123,152,41,217,83,183,198,50,
    180,163,94,191,43,159,201,94,146,14,85,99,44,203,122,222,
    8,228,76,55,198,50,225,67,125,225,197,173,232,233,231,159,
    118,147,96,79,134,57,207,205,179,121,62,75,122,62,206,143,
    95,5,181,205,37,204,159,120,30,166,244,214,226,137,217,76,
    166,145,223,141,190,149,12,66,243,137,140,7,61,239,249,126,
    218,198,110,89,158,225,188,231,201,190,76,159,37,8,67,117,
    231,4,195,232,17,11,240,94,73,106,163,212,237,255,34,71,
    175,118,134,109,131,173,60,82,227,61,136,37,39,237,249,221,
    220,63,87,199,203,208,2,78,46,192,198,234,240,145,26,167,
    204,93,15,195,212,245,227,157,51,237,56,14,129,130,235,164,
    152,50,58,5,195,120,200,229,134,104,199,210,190,41,158,115,
    43,119,2,221,124,229,148,255,224,118,235,84,205,228,220,145,
    202,157,8,77,79,89,68,193,159,23,21,218,235,236,211,49,
    169,205,124,247,66,50,141,62,119,232,59,140,39,116,19,198,
    23,119,116,83,89,155,173,97,214,161,114,99,139,58,22,28,
    199,158,158,171,57,211,83,53,167,54,97,243,37,212,12,30,
    33,235,78,109,106,90,188,253,191,85,204,96,117,107,117,174,
    38,254,3,205,164,61,237,
};

EmbeddedPython embedded_m5_internal_param_DMASequencer(
    "m5/internal/param_DMASequencer.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_DMASequencer.py",
    "m5.internal.param_DMASequencer",
    data_m5_internal_param_DMASequencer,
    2423,
    7211);

} // anonymous namespace
