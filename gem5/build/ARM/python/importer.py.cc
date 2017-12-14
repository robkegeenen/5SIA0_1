#include "sim/init.hh"

namespace {

const uint8_t data_importer[] = {
    120,156,157,85,223,143,219,68,16,158,181,29,39,78,238,122,
    189,150,11,84,160,18,36,42,89,8,46,8,169,15,160,3,
    1,37,18,21,34,69,142,74,233,9,201,242,121,55,119,118,
    28,219,90,111,218,70,114,94,122,252,173,60,240,79,192,204,
    216,190,30,175,201,41,171,217,157,95,223,124,51,147,139,161,
    253,216,248,253,126,2,80,253,140,130,4,80,0,75,1,82,
    192,95,0,215,0,47,207,241,98,129,180,33,179,224,220,2,
    37,232,245,220,6,101,67,234,192,185,3,202,130,180,7,169,
    75,47,215,2,4,154,46,124,7,131,153,3,60,158,20,82,
    61,93,151,133,54,74,199,93,78,129,223,31,41,231,231,192,
    9,41,7,80,66,76,208,100,198,4,152,149,4,135,114,147,
    208,131,160,137,27,139,54,132,69,241,41,204,33,10,9,64,
    13,16,114,13,11,159,212,115,62,77,31,143,117,33,55,153,
    170,154,7,138,81,169,108,233,19,20,62,170,71,120,76,175,
    138,181,154,170,56,154,94,170,245,227,105,165,227,105,185,53,
    87,69,62,77,90,252,167,120,31,160,101,24,38,121,98,194,
    240,19,114,181,184,160,184,135,103,175,165,147,49,125,141,66,
    109,19,166,20,96,229,130,254,24,12,243,138,143,227,183,22,
    228,168,198,139,5,181,3,203,206,14,117,103,140,159,162,206,
    171,143,240,124,84,77,162,76,171,72,110,39,203,98,147,203,
    73,146,79,58,64,108,22,112,81,119,240,248,193,24,157,92,
    108,140,154,105,93,104,159,224,4,100,193,160,151,73,166,242,
    104,173,152,143,232,162,42,35,115,213,113,195,50,83,139,221,
    218,139,150,33,5,149,50,108,136,254,148,156,93,38,230,72,
    220,181,98,187,37,230,166,97,239,67,83,253,13,57,247,73,
    94,220,106,221,187,202,8,215,188,200,149,111,255,191,158,77,
    150,113,61,164,167,2,246,194,61,98,102,242,14,248,103,183,
    129,59,86,76,217,70,109,103,121,96,75,132,36,121,90,51,
    128,157,213,201,2,118,118,39,91,176,115,96,123,76,125,77,
    109,170,242,193,174,7,47,242,47,192,81,14,172,134,160,37,
    8,33,106,222,26,212,226,202,160,190,238,189,179,63,203,5,
    252,177,253,155,24,193,231,208,101,154,154,72,127,218,176,115,
    97,215,135,221,128,102,37,237,67,58,104,215,243,26,3,122,
    180,155,59,15,106,15,228,136,121,253,135,205,134,144,142,160,
    238,83,46,124,81,7,36,75,151,93,14,217,101,8,234,14,
    212,67,126,71,51,155,226,231,208,249,30,65,237,146,175,28,
    192,202,2,61,17,8,37,189,11,210,163,71,130,120,204,205,
    68,225,30,228,99,146,211,251,173,86,14,225,65,163,192,16,
    36,188,7,245,128,132,244,4,156,231,47,242,135,200,202,152,
    89,89,9,98,165,227,224,219,183,0,68,3,90,46,124,250,
    29,153,39,255,226,199,156,160,248,235,227,240,217,239,179,32,
    120,250,211,44,252,237,101,184,120,246,60,120,50,51,212,162,
    101,148,85,205,64,24,189,81,134,6,102,171,42,67,99,164,
    249,89,189,81,113,53,186,181,194,52,3,164,62,77,120,122,
    168,223,85,231,95,181,254,62,77,43,7,195,201,49,100,82,
    84,124,173,182,85,51,162,52,143,191,168,45,175,29,175,66,
    174,94,183,19,197,215,48,204,138,72,42,29,134,188,113,42,
    127,149,232,34,231,24,151,202,48,244,172,120,173,116,64,149,
    26,151,129,38,149,169,24,51,45,46,11,244,35,192,254,113,
    177,46,233,145,210,94,68,85,179,214,20,164,42,179,196,180,
    63,81,180,18,152,111,212,94,226,85,116,169,240,78,112,116,
    25,105,147,152,4,33,52,182,148,2,117,205,69,38,49,18,
    99,60,188,204,222,196,170,36,59,127,212,237,94,192,18,181,
    33,24,211,113,195,13,150,203,224,112,209,40,92,64,85,4,
    131,142,157,226,149,210,58,145,77,79,208,100,239,101,37,34,
    91,106,191,36,239,175,40,134,123,32,240,207,178,197,177,56,
    196,197,61,70,201,19,99,235,67,241,80,156,136,19,235,3,
    113,15,181,99,225,89,71,168,31,138,190,229,187,29,176,48,
    36,246,90,98,194,54,114,24,6,252,99,67,28,4,244,207,
    37,56,237,224,238,3,60,32,243,9,185,80,70,87,120,182,
    231,122,46,15,244,220,239,119,45,47,46,82,21,27,182,109,
    88,29,52,19,199,81,24,10,247,4,91,29,113,115,217,41,
    42,75,149,203,189,145,113,142,179,166,232,239,110,16,142,191,
    57,64,254,60,241,31,172,80,158,51,
};

EmbeddedPython embedded_importer(
    "importer.py",
    "/home/eca/gem5/src/python/importer.py",
    "importer",
    data_importer,
    1018,
    2084);

} // anonymous namespace
