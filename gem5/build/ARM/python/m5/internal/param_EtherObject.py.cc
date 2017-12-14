#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_EtherObject[] = {
    120,156,181,88,235,110,219,200,21,62,67,82,178,37,203,177,
    28,199,118,18,187,177,218,34,93,53,104,237,118,187,105,10,
    172,27,108,218,77,129,46,80,239,150,218,34,89,239,162,44,
    45,142,45,202,18,41,144,116,18,45,236,63,117,208,246,5,
    250,8,253,209,183,233,27,181,231,59,67,210,180,157,0,11,
    84,118,196,201,112,56,115,230,92,190,115,153,233,83,254,87,
    227,231,147,14,81,122,168,136,2,254,41,26,17,141,21,237,
    43,82,90,81,112,135,142,107,148,124,68,65,141,222,18,237,
    91,164,45,58,231,142,77,95,91,20,181,100,77,157,70,182,
    140,40,154,54,73,59,180,95,163,23,209,50,57,186,78,199,
    77,74,254,66,74,169,72,209,203,96,142,130,121,122,203,212,
    185,211,16,130,243,132,193,166,12,54,40,88,144,193,38,5,
    45,233,44,208,180,77,186,69,251,139,152,182,127,139,201,62,
    98,178,75,66,246,63,32,27,240,151,85,10,110,97,58,243,
    245,21,102,58,152,41,251,45,9,149,118,193,229,50,237,223,
    46,250,43,149,254,29,233,243,78,183,105,184,74,195,53,26,
    174,19,43,36,88,46,169,222,37,109,211,240,30,237,223,35,
    205,191,187,116,206,250,9,110,87,86,220,151,21,43,229,138,
    13,89,177,73,251,155,164,249,183,97,86,212,169,215,93,99,
    157,135,255,229,191,46,235,156,178,22,55,175,116,146,134,113,
    228,133,209,97,28,90,248,94,71,3,11,245,209,204,229,166,
    250,45,76,245,111,18,59,5,86,110,170,51,98,194,10,178,
    140,44,58,147,206,153,69,211,46,157,42,26,58,20,216,116,
    202,219,212,192,192,145,162,115,139,190,177,49,225,140,91,135,
    21,250,128,156,204,216,105,40,10,53,148,230,232,172,70,167,
    53,234,189,60,181,48,112,220,160,228,95,244,237,166,16,157,
    23,162,22,157,114,235,208,185,67,103,117,122,193,147,120,104,
    216,128,248,234,229,41,75,202,35,189,174,195,220,238,85,196,
    133,40,65,152,68,254,88,103,183,185,239,77,252,196,31,123,
    207,179,129,78,62,63,24,234,126,214,109,22,243,226,116,123,
    226,103,3,87,22,218,208,200,120,146,9,193,56,210,217,2,
    119,14,195,40,240,198,113,112,50,210,217,60,168,121,135,225,
    72,123,158,124,252,253,120,18,39,217,243,36,137,19,23,74,
    149,193,81,236,151,43,160,210,254,40,78,117,23,187,201,54,
    46,200,103,152,125,56,17,138,96,64,152,197,226,64,167,253,
    36,156,100,108,43,67,17,179,65,173,11,43,73,147,126,194,
    205,206,32,30,235,29,221,247,119,142,244,248,241,206,193,73,
    56,10,118,158,185,127,216,153,76,179,65,28,237,240,88,24,
    101,154,181,48,218,185,38,255,54,79,130,102,210,215,225,145,
    23,138,12,222,64,143,38,58,89,196,232,125,236,162,218,170,
    165,234,202,86,93,181,200,189,26,63,182,218,180,22,212,94,
    8,41,250,144,12,16,114,170,160,129,37,21,29,91,148,108,
    2,18,67,254,41,216,144,129,209,195,55,75,190,253,17,226,
    155,209,161,13,67,155,193,83,129,17,227,137,103,238,194,178,
    17,9,22,106,52,172,147,193,8,67,203,128,38,153,162,229,
    233,32,99,49,113,135,210,127,18,171,147,209,113,74,57,114,
    206,109,82,81,155,178,38,28,150,71,215,120,195,191,10,248,
    122,93,176,191,39,16,200,6,97,26,191,142,68,209,232,139,
    187,244,88,51,95,76,141,182,210,45,30,248,42,62,233,244,
    253,40,138,179,142,31,4,29,63,203,146,240,224,36,211,105,
    39,139,59,15,211,46,108,231,46,23,40,42,233,77,39,5,
    106,96,97,70,141,121,9,194,126,198,47,43,242,34,86,72,
    117,198,8,24,196,65,202,227,32,113,164,51,23,76,102,80,
    114,44,140,8,64,60,76,197,246,60,239,22,191,63,43,56,
    17,20,118,235,5,102,82,61,58,204,154,2,63,63,77,61,
    225,4,227,130,52,16,126,229,143,78,180,80,79,153,30,51,
    132,174,225,97,214,88,187,11,190,11,49,133,247,40,142,130,
    41,179,18,246,63,192,46,119,5,113,45,193,220,42,227,109,
    142,219,58,255,95,87,107,86,223,201,81,86,47,144,134,240,
    150,145,216,89,229,166,102,212,157,115,40,233,90,18,11,132,
    125,241,181,31,160,135,197,238,38,154,239,161,121,128,102,171,
    144,112,134,98,46,94,21,243,9,72,91,34,155,72,1,181,
    219,133,20,193,37,127,185,119,225,47,28,221,122,192,189,5,
    239,184,192,189,131,72,152,60,69,203,83,197,163,108,74,191,
    68,220,133,127,8,49,184,2,131,26,189,11,168,139,78,220,
    54,100,157,47,80,234,2,122,85,252,29,85,240,231,194,28,
    2,62,247,94,17,212,60,204,48,176,115,55,64,170,246,14,
    165,118,208,124,255,6,52,123,1,160,163,107,0,250,24,187,
    180,115,0,45,10,112,154,252,180,173,190,157,171,187,204,107,
    43,87,128,3,212,56,239,64,205,143,208,179,175,11,120,115,
    128,201,197,250,93,5,48,224,196,170,114,191,199,157,233,58,
    152,174,66,101,157,243,241,139,104,157,83,172,37,41,246,103,
    146,98,37,77,75,129,98,130,170,45,113,213,116,106,144,254,
    208,166,181,60,117,166,13,110,39,73,252,102,218,137,15,59,
    153,136,135,24,184,251,48,221,126,152,126,204,209,173,243,84,
    226,138,137,111,38,130,37,122,130,8,132,165,207,223,244,181,
    36,44,121,243,60,19,112,60,9,62,94,158,8,25,53,171,
    208,157,85,40,85,66,111,154,37,136,184,179,86,107,179,84,
    43,184,252,12,116,155,162,83,91,173,51,66,154,74,54,247,
    76,80,149,234,71,190,242,243,27,232,25,2,106,66,125,234,
    246,12,107,194,53,248,119,127,114,9,5,179,227,217,221,97,
    34,127,42,172,95,191,176,62,30,187,192,238,223,73,74,64,
    69,127,35,216,151,205,152,99,183,132,58,12,186,130,233,127,
    38,1,249,59,178,177,196,134,30,50,176,204,224,144,145,62,
    145,169,38,57,127,70,255,168,120,72,145,66,237,188,200,171,
    166,80,167,140,43,2,140,239,148,38,157,203,1,8,118,24,
    248,41,166,153,168,114,225,116,23,81,186,172,205,56,170,206,
    16,37,243,134,162,135,205,191,185,192,8,146,208,134,90,177,
    42,150,255,57,154,15,75,163,171,98,108,54,124,108,209,251,
    147,163,103,98,242,215,216,204,17,246,150,230,36,28,87,104,
    148,0,174,21,0,254,176,4,176,150,236,241,86,170,121,180,
    22,204,120,110,41,62,74,113,73,132,147,139,67,186,70,251,
    117,64,93,106,85,149,123,130,42,162,14,98,212,165,212,36,
    242,239,25,205,148,150,52,70,66,243,102,214,222,12,59,237,
    142,252,241,65,224,63,29,130,42,72,247,11,223,176,10,62,
    219,85,62,129,107,245,62,86,229,245,113,193,239,171,89,123,
    242,47,73,184,48,124,10,110,131,184,47,238,251,229,64,119,
    198,122,124,192,71,177,65,56,233,28,142,252,35,209,183,157,
    203,241,121,33,71,38,6,187,154,194,211,71,104,227,78,63,
    142,56,112,158,244,179,56,233,4,154,207,39,58,232,252,180,
    35,81,183,19,166,29,255,128,191,250,124,200,17,156,94,246,
    42,169,0,253,228,40,149,98,239,248,53,186,55,97,47,143,
    207,153,33,87,184,35,42,243,153,57,0,149,65,84,106,87,
    3,123,78,61,124,242,200,166,38,148,32,157,187,219,104,126,
    76,55,20,107,63,34,115,242,77,161,132,186,218,176,26,86,
    182,124,217,169,190,192,186,244,186,107,125,250,93,92,203,220,
    79,228,14,86,39,61,135,243,44,238,30,106,249,221,3,59,
    91,253,255,117,54,65,240,77,96,55,157,169,143,185,79,110,
    154,77,247,87,148,167,199,247,249,215,165,42,234,153,241,47,
    163,95,78,162,211,59,34,146,41,182,69,36,245,34,186,207,
    229,148,35,229,212,46,202,169,83,41,185,60,203,84,84,23,
    102,145,26,88,78,233,192,117,164,95,123,215,32,100,106,38,
    88,219,159,76,116,20,184,143,168,90,6,201,231,89,171,7,
    46,244,138,42,25,205,86,119,184,238,185,14,55,68,131,138,
    56,2,171,90,9,176,205,27,178,220,89,97,57,115,104,46,
    67,130,187,139,166,125,201,255,77,56,16,21,227,12,16,232,
    145,206,244,117,45,103,88,149,159,100,2,205,241,47,158,114,
    1,42,85,30,191,143,60,239,70,226,200,175,153,72,82,232,
    153,227,136,170,91,141,122,67,73,184,189,114,199,102,182,198,
    65,194,84,50,211,212,21,236,46,149,226,201,77,80,17,9,
    161,9,169,166,247,248,180,110,174,151,112,146,117,127,72,249,
    233,196,253,160,84,19,142,104,82,62,154,242,155,81,40,169,
    64,34,191,251,11,140,163,55,126,188,93,8,179,109,132,233,
    133,99,35,138,220,69,141,31,75,8,172,78,11,18,159,251,
    171,87,70,83,157,132,254,40,252,214,220,107,20,195,25,4,
    185,74,23,252,148,111,18,117,197,136,21,45,138,197,18,125,
    20,166,76,70,104,148,243,115,247,129,142,179,7,244,142,224,
    124,105,237,77,216,215,84,30,230,252,242,20,80,77,159,114,
    131,43,138,198,82,131,109,13,191,178,249,52,177,168,28,187,
    213,110,56,173,133,134,211,152,179,229,252,185,200,21,100,211,
    105,44,180,20,254,109,49,42,154,214,86,171,161,254,7,185,
    180,210,63,
};

EmbeddedPython embedded_m5_internal_param_EtherObject(
    "m5/internal/param_EtherObject.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_EtherObject.py",
    "m5.internal.param_EtherObject",
    data_m5_internal_param_EtherObject,
    2099,
    5911);

} // anonymous namespace
