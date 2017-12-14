#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_DataDistribution[] = {
    120,156,181,86,221,110,27,85,16,158,179,187,118,98,199,110,
    156,166,77,90,26,168,1,21,12,66,49,191,170,68,171,138,
    66,139,68,37,2,172,65,109,221,138,197,221,61,73,214,177,
    119,205,238,73,91,35,231,134,84,192,11,240,8,92,240,54,
    188,17,204,55,187,107,59,109,42,113,145,84,241,244,236,236,
    236,156,153,239,124,51,115,124,202,255,149,248,247,89,147,40,
    125,71,17,5,252,167,104,64,52,84,212,85,164,180,162,160,
    65,123,37,74,62,166,160,68,207,136,186,22,105,139,14,121,
    97,211,3,139,162,154,124,83,166,129,45,26,69,227,42,105,
    135,186,37,186,27,173,144,163,203,180,87,165,228,39,82,74,
    69,138,238,5,11,20,44,210,51,246,206,139,138,56,92,36,
    40,171,162,172,80,176,36,202,42,5,53,89,44,209,184,65,
    186,70,221,58,204,186,103,216,237,187,236,118,89,220,254,3,
    183,1,191,89,161,224,12,204,57,174,251,176,116,96,41,251,
    45,139,23,118,97,83,127,5,242,16,105,241,195,89,234,158,
    21,237,234,188,246,28,117,207,137,246,252,188,118,141,186,107,
    162,93,167,238,58,178,237,180,206,50,108,225,191,252,175,197,
    176,145,169,177,120,172,147,52,140,35,47,140,182,227,208,194,
    251,50,4,64,246,33,22,114,180,191,0,218,127,147,64,29,
    88,57,218,7,68,10,207,68,3,139,14,100,113,96,209,184,
    69,19,69,125,135,2,155,38,188,77,9,33,237,40,58,180,
    232,161,13,131,3,150,14,99,242,26,57,38,131,186,47,152,
    100,158,22,232,160,68,147,18,117,238,77,44,40,246,42,148,
    252,69,191,108,136,211,69,113,106,209,132,165,67,135,14,29,
    148,233,46,27,177,170,95,1,146,234,222,132,51,101,77,167,
    229,112,180,91,115,233,34,149,32,76,162,222,80,155,53,94,
    123,58,218,31,122,183,122,166,119,43,76,77,18,62,218,55,
    140,68,171,90,216,198,233,230,168,103,118,93,249,216,6,42,
    195,145,17,167,113,164,205,18,47,182,195,40,240,134,113,176,
    63,208,102,17,30,189,237,112,160,61,79,94,126,53,28,197,
    137,185,157,36,113,226,2,88,81,14,226,222,244,11,192,234,
    15,226,84,183,176,155,108,227,194,189,129,245,246,72,60,34,
    0,9,24,31,7,58,245,147,112,132,40,51,143,176,134,183,
    22,78,74,68,122,139,69,123,55,30,234,182,246,123,237,29,
    61,252,164,253,104,63,28,4,237,155,238,215,237,209,216,236,
    198,81,155,117,97,100,52,35,49,104,31,139,193,38,27,130,
    43,233,147,112,199,11,37,15,111,87,15,70,58,169,67,251,
    10,118,82,13,85,83,101,101,171,150,170,243,170,196,63,91,
    109,88,75,106,43,68,38,62,178,3,149,156,121,242,224,68,
    21,237,89,148,108,128,26,125,254,83,56,75,38,72,7,239,
    44,121,247,29,32,200,180,125,27,7,158,41,39,66,39,230,
    21,91,94,199,9,71,36,156,40,81,191,76,25,87,152,98,
    25,121,146,49,36,155,195,141,197,206,29,74,255,36,134,148,
    89,50,161,156,65,135,54,169,168,65,166,138,218,99,237,26,
    111,248,171,144,176,211,66,248,91,66,3,179,27,166,241,147,
    72,192,198,90,202,166,195,200,124,59,254,230,81,95,251,38,
    189,204,138,251,241,126,211,239,69,81,108,154,189,32,104,246,
    76,6,166,78,155,38,110,94,73,91,56,63,119,165,96,210,
    212,223,120,84,48,7,167,204,204,201,30,130,208,55,252,176,
    42,15,114,10,169,54,204,130,221,56,72,89,15,23,59,218,
    184,8,210,0,228,88,2,17,146,120,48,197,246,108,119,134,
    159,111,22,145,8,19,91,229,130,55,169,30,108,155,170,80,
    176,151,166,158,68,2,189,176,13,142,31,247,6,251,90,188,
    167,236,143,3,194,50,139,225,52,248,118,1,177,23,169,74,
    252,81,28,5,99,14,39,244,223,198,78,23,132,117,53,225,
    221,121,230,220,2,203,50,255,95,86,107,150,239,228,76,43,
    23,108,67,129,27,146,179,86,249,113,51,243,14,185,173,180,
    44,233,11,146,130,212,220,27,88,225,99,119,3,226,85,136,
    215,32,46,23,89,158,112,170,245,231,83,189,10,247,150,228,
    39,153,0,126,187,200,36,56,82,55,23,103,117,195,221,174,
    3,254,91,168,146,25,255,29,116,198,228,6,36,155,74,101,
    217,148,126,143,62,140,58,17,103,40,9,38,55,86,51,202,
    11,46,110,3,249,46,22,108,117,65,193,121,30,238,204,241,
    208,197,145,8,9,221,139,69,131,243,96,145,209,207,189,4,
    87,165,99,128,109,66,188,126,74,232,206,136,180,243,2,145,
    174,97,167,70,78,164,186,16,168,202,191,134,229,219,57,228,
    211,89,183,250,28,129,192,30,231,24,246,188,133,149,253,98,
    146,167,75,156,60,181,47,231,136,131,104,172,249,12,182,120,
    49,94,71,224,243,148,89,231,57,125,55,90,231,209,107,201,
    232,125,95,70,175,140,111,185,123,100,77,214,150,62,155,45,
    74,64,96,219,166,181,124,164,166,21,150,163,36,126,58,110,
    198,219,77,35,41,162,39,94,191,146,110,94,73,175,113,183,
    107,222,144,62,147,245,187,172,163,37,122,132,142,132,79,111,
    63,245,181,12,49,121,242,188,172,1,121,210,140,188,124,56,
    50,123,206,3,63,171,0,86,90,49,163,129,14,124,26,208,
    86,167,208,34,210,59,240,93,21,92,109,181,206,76,169,42,
    9,192,203,26,173,220,140,228,45,255,62,7,214,72,82,19,
    174,159,110,39,11,79,34,71,14,238,123,71,216,112,178,113,
    187,109,118,244,67,193,130,242,140,5,248,217,5,143,127,231,
    251,132,2,17,126,35,156,51,31,103,206,227,41,237,113,176,
    171,48,255,145,132,240,199,76,105,233,21,29,76,102,177,224,
    22,146,94,21,211,108,104,223,161,63,230,170,165,24,173,118,
    126,9,156,31,173,206,180,207,8,65,254,215,248,116,142,54,
    36,156,197,110,47,133,89,214,101,102,5,56,235,220,211,123,
    27,119,217,19,102,203,98,230,213,67,0,15,103,92,193,112,
    186,164,86,173,57,6,124,0,241,225,244,240,85,161,59,185,
    88,46,211,203,7,167,151,245,234,7,216,208,145,16,151,23,
    4,171,231,174,250,89,112,23,166,128,141,83,23,26,119,25,
    194,42,170,152,107,158,175,128,102,44,247,138,108,203,169,10,
    165,188,197,87,135,236,190,139,145,234,190,73,121,123,116,49,
    191,221,77,202,231,132,112,54,171,253,72,63,145,234,151,67,
    116,63,130,126,93,160,253,121,95,71,38,236,13,100,23,63,
    142,248,10,18,25,41,210,217,59,25,75,192,98,164,143,154,
    149,167,122,131,33,179,117,12,112,71,63,56,247,18,43,185,
    16,249,143,123,201,105,149,175,192,122,61,107,121,55,48,62,
    211,79,89,224,134,83,89,174,168,178,133,59,181,205,205,167,
    174,28,187,214,168,56,181,165,138,83,89,176,101,108,213,153,
    104,85,167,82,171,171,138,85,252,254,3,193,54,55,233,
};

EmbeddedPython embedded_m5_internal_enum_DataDistribution(
    "m5/internal/enum_DataDistribution.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/enum_DataDistribution.py",
    "m5.internal.enum_DataDistribution",
    data_m5_internal_enum_DataDistribution,
    1567,
    3873);

} // anonymous namespace
