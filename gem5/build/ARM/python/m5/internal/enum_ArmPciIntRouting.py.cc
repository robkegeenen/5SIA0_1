#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_ArmPciIntRouting[] = {
    120,156,181,86,91,115,219,84,16,222,35,201,78,236,56,141,
    211,180,185,180,161,53,48,5,15,195,196,92,167,15,237,4,
    66,91,102,210,25,76,144,3,109,221,14,194,149,148,68,142,
    45,121,164,147,182,102,156,23,210,1,254,0,63,129,7,254,
    13,255,8,246,91,89,182,115,41,195,67,146,177,54,71,171,
    61,123,246,242,237,238,113,105,248,151,227,231,203,10,81,242,
    133,34,242,248,167,168,67,212,85,212,84,164,124,69,94,153,
    246,115,20,127,70,94,142,94,19,53,13,242,13,58,226,133,
    73,79,13,10,75,178,39,79,29,83,56,138,250,69,242,45,
    106,230,232,81,56,79,150,159,167,253,34,197,63,145,82,42,
    84,244,216,155,34,111,154,94,179,118,94,20,68,225,52,129,
    89,20,102,129,188,25,97,22,201,43,201,98,134,250,101,242,
    75,212,156,133,88,243,18,171,253,128,213,206,137,218,191,161,
    214,227,47,243,228,93,130,56,219,245,4,146,22,36,229,188,
    57,209,194,42,76,106,207,131,30,193,45,126,185,76,205,203,
    194,93,152,228,94,161,230,21,225,94,157,228,46,82,115,81,
    184,75,147,220,101,106,46,11,119,133,154,43,136,65,163,122,
    153,131,25,252,195,127,85,14,38,233,18,147,23,126,156,4,
    81,232,4,225,78,20,24,248,158,7,65,232,93,144,169,97,
    14,238,33,7,127,145,36,192,51,134,57,56,36,82,120,39,
    234,24,116,40,139,67,131,250,85,26,40,106,91,228,153,52,
    224,99,114,48,105,87,209,145,65,207,76,8,28,50,181,56,
    82,55,200,210,105,2,218,18,169,84,211,20,29,230,104,144,
    163,198,227,129,1,198,126,129,226,63,233,231,85,81,58,45,
    74,13,26,48,181,232,200,162,195,60,61,98,33,102,181,11,
    136,175,122,60,96,79,153,211,168,90,108,109,125,194,93,184,
    226,5,113,216,234,250,122,145,215,142,31,30,116,157,141,184,
    187,229,6,155,161,182,163,3,29,132,187,213,98,38,27,37,
    107,189,150,222,179,101,179,137,168,116,123,90,148,70,161,175,
    103,120,177,19,132,158,211,141,188,131,142,175,167,161,209,217,
    9,58,190,227,200,199,205,110,47,138,245,131,56,142,98,27,
    129,21,102,39,106,141,118,32,172,110,39,74,252,42,78,147,
    99,108,168,215,144,222,233,137,70,24,32,6,99,179,231,39,
    110,28,244,52,231,43,213,8,105,104,171,34,83,66,146,251,
    76,106,123,81,215,175,249,110,171,182,235,119,63,175,61,63,
    8,58,94,109,195,254,166,214,235,235,189,40,172,49,47,8,
    181,207,145,232,212,206,140,193,26,11,2,43,201,203,96,215,
    9,196,15,103,207,239,244,252,120,22,220,107,56,73,149,85,
    73,229,149,169,170,106,150,87,57,126,76,181,106,204,168,122,
    0,79,92,120,7,40,89,147,224,65,70,21,237,27,20,175,
    2,26,109,254,41,228,146,1,210,192,55,67,190,125,135,16,
    164,220,182,137,132,167,204,129,192,137,113,197,146,119,145,225,
    144,4,19,57,106,231,41,197,10,67,44,5,79,220,7,101,
    113,168,49,88,185,69,201,31,196,33,101,148,12,104,136,160,
    35,147,84,88,38,93,68,69,50,119,145,15,252,69,64,216,
    168,194,252,186,192,64,239,5,73,244,50,148,96,99,45,101,
    211,224,200,108,245,191,125,222,246,93,157,220,100,198,147,232,
    160,226,182,194,48,210,149,150,231,85,90,90,199,193,243,3,
    237,39,21,29,85,110,37,85,228,207,158,207,144,52,210,215,
    239,101,200,65,150,25,57,233,139,23,184,154,95,22,228,69,
    178,144,248,154,81,176,23,121,9,243,161,98,215,215,54,140,
    212,8,114,36,134,8,72,28,136,226,120,150,187,196,239,27,
    153,37,130,196,106,62,195,77,226,119,118,116,81,32,216,74,
    18,71,44,1,95,208,6,197,47,90,157,3,95,180,39,172,
    143,13,194,50,181,225,34,240,182,12,219,51,87,197,254,48,
    10,189,62,155,19,184,239,227,164,101,65,93,73,112,119,149,
    49,55,197,52,207,255,243,106,209,112,173,33,210,242,25,218,
    80,224,154,36,215,106,152,110,70,222,17,183,149,170,33,125,
    65,92,144,154,123,7,43,108,182,87,65,222,2,185,1,114,
    51,243,242,156,93,157,61,233,234,109,168,55,196,63,241,4,
    225,55,51,79,188,99,117,179,50,174,27,238,118,13,224,223,
    64,149,140,241,111,161,51,198,235,160,44,42,149,101,82,178,
    141,62,140,58,17,101,40,9,6,55,86,99,200,75,92,236,
    50,252,157,206,208,106,3,130,147,56,220,157,192,161,141,148,
    8,8,237,149,172,193,57,144,72,225,103,95,135,170,220,25,
    129,173,128,188,125,65,209,29,3,105,247,20,144,238,224,164,
    242,16,72,179,2,160,34,63,101,195,53,135,33,31,205,186,
    133,19,0,2,122,172,51,208,243,30,86,230,105,39,47,22,
    56,67,215,190,158,0,14,172,49,38,61,168,243,162,191,4,
    195,39,33,179,196,115,250,81,184,196,163,215,144,209,251,145,
    140,94,25,223,114,35,73,155,172,41,125,54,93,228,16,129,
    29,147,22,135,35,53,41,48,237,197,209,171,126,37,218,169,
    104,113,17,61,241,238,173,100,237,86,114,135,187,93,101,93,
    250,76,218,239,210,142,22,251,61,116,36,108,125,240,202,245,
    101,136,201,155,227,164,13,200,145,102,228,12,135,35,163,231,
    42,226,103,100,129,149,86,156,232,24,29,248,34,66,91,28,
    133,22,150,62,132,238,162,196,213,84,75,140,148,162,18,3,
    156,180,209,202,205,72,190,242,243,21,98,13,39,125,194,165,
    212,110,164,230,137,229,240,193,254,240,24,26,206,215,110,187,
    198,138,190,207,80,144,31,163,0,143,153,225,248,55,190,79,
    40,0,225,87,66,158,57,157,67,28,143,96,143,196,46,64,
    252,71,18,192,159,49,165,165,87,52,48,153,69,130,91,72,
    114,91,68,211,161,253,144,126,159,168,150,108,180,154,195,75,
    224,228,104,181,70,125,70,0,242,191,198,167,117,188,33,33,
    23,123,173,4,98,105,151,25,23,224,184,115,143,238,109,220,
    101,207,25,45,211,169,86,7,6,60,27,99,5,195,233,186,
    90,48,38,16,240,49,200,39,163,228,171,140,119,126,182,220,
    164,55,15,78,39,237,213,79,113,160,37,38,206,77,73,172,
    78,92,245,83,227,174,141,2,214,79,108,112,236,57,16,35,
    171,98,174,121,190,2,234,190,220,43,210,35,71,44,148,114,
    157,175,14,233,125,23,35,213,126,151,134,237,209,198,252,182,
    215,104,56,39,4,179,105,237,135,254,75,169,126,73,162,253,
    41,248,112,135,67,224,108,221,219,116,54,235,219,78,99,123,
    99,123,243,158,156,230,70,33,95,69,66,45,119,211,211,50,
    122,245,4,251,254,131,31,142,239,155,59,45,112,106,211,214,
    102,253,191,55,177,128,198,236,170,159,145,143,227,59,175,188,
    65,74,238,89,238,139,86,124,81,93,65,178,117,55,237,164,
    235,152,202,201,58,19,92,156,10,115,5,149,55,112,85,55,
    185,167,205,42,203,44,149,11,86,105,166,96,21,166,76,153,
    134,179,140,223,162,85,40,205,170,130,49,249,252,11,96,49,
    79,237,
};

EmbeddedPython embedded_m5_internal_enum_ArmPciIntRouting(
    "m5/internal/enum_ArmPciIntRouting.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/enum_ArmPciIntRouting.py",
    "m5.internal.enum_ArmPciIntRouting",
    data_m5_internal_enum_ArmPciIntRouting,
    1602,
    3986);

} // anonymous namespace
