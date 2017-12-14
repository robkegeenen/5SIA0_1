#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_multidict[] = {
    120,156,189,88,219,110,219,70,16,157,93,234,126,247,61,74,
    210,196,73,155,86,69,129,8,117,27,180,104,46,13,82,167,
    46,154,192,72,232,162,74,141,38,4,45,210,178,108,137,146,
    73,58,181,1,251,165,14,208,167,126,71,31,250,23,253,178,
    206,204,114,41,74,118,242,16,25,177,204,245,217,213,114,121,
    230,204,204,238,208,109,136,126,82,120,61,92,6,8,254,21,
    0,14,64,71,192,38,3,87,192,182,0,71,192,27,128,83,
    128,223,54,37,184,6,56,18,246,36,248,255,8,87,210,232,
    102,10,16,184,41,56,197,219,210,140,211,140,51,140,51,140,
    179,224,24,52,199,73,193,61,39,205,40,131,40,203,40,135,
    40,207,168,128,168,200,168,132,168,76,43,209,29,244,39,3,
    247,157,10,15,224,116,181,210,125,236,237,230,192,169,210,131,
    78,37,8,167,6,107,248,213,110,158,120,173,253,228,204,96,
    55,29,119,213,67,235,10,228,52,40,104,80,98,192,15,140,
    64,78,131,130,6,60,231,176,78,52,118,11,180,234,234,203,
    34,108,34,227,34,174,191,223,20,45,250,162,4,206,44,56,
    115,204,40,234,103,192,153,143,251,57,238,47,168,126,10,120,
    101,110,202,216,150,35,245,144,253,34,56,75,224,92,2,167,
    14,157,20,9,201,82,100,241,43,15,189,115,25,54,26,87,
    208,113,97,30,155,254,65,47,236,58,221,118,216,214,62,149,
    120,61,34,159,254,135,192,69,47,9,232,178,79,223,160,55,
    100,228,211,77,118,230,27,246,33,250,135,0,219,79,0,31,
    151,102,144,37,186,4,144,119,150,65,158,164,33,80,0,244,
    27,129,34,105,68,0,109,45,50,40,147,88,4,42,128,126,
    36,80,5,244,31,129,26,121,140,192,12,169,130,62,35,74,
    115,128,222,162,193,121,82,143,192,2,105,72,96,17,204,141,
    198,2,154,209,38,163,140,200,184,39,100,220,45,18,0,224,
    88,194,223,216,2,88,2,142,5,3,73,230,18,48,200,232,
    141,6,70,54,172,55,40,210,67,106,72,171,48,141,160,55,
    104,219,189,48,131,104,104,251,174,23,134,89,250,214,237,185,
    161,235,52,12,61,61,112,123,219,38,247,104,230,222,31,182,
    223,9,26,36,51,55,193,109,108,154,59,131,190,219,116,219,
    118,179,227,246,239,52,3,191,221,28,30,133,59,3,175,137,
    189,131,176,219,107,198,78,186,141,95,228,240,22,203,234,122,
    221,208,178,150,105,13,90,24,68,85,228,69,155,184,138,200,
    212,31,200,204,69,101,102,200,166,237,114,214,97,136,224,175,
    182,139,169,81,19,132,190,73,67,108,91,55,116,251,1,207,
    48,211,154,235,123,19,206,50,97,92,223,178,72,245,64,50,
    223,152,171,212,92,103,34,151,32,81,17,17,45,107,154,52,
    137,233,153,20,180,23,197,76,73,233,187,67,164,214,72,80,
    147,17,173,152,218,77,80,188,152,218,49,11,56,188,17,73,
    26,143,36,37,53,233,86,182,124,199,14,172,61,247,136,99,
    64,153,145,214,146,227,240,116,252,75,204,191,61,240,66,187,
    235,5,150,245,197,132,13,244,144,180,182,225,25,130,163,74,
    100,6,50,190,223,242,238,66,10,35,99,175,0,254,19,16,
    39,184,169,28,235,56,217,203,128,255,61,177,164,110,138,166,
    223,219,127,202,97,36,225,79,9,158,128,23,137,228,72,199,
    22,147,162,79,220,163,199,190,63,240,205,56,9,126,241,15,
    92,147,128,210,134,167,151,129,195,18,183,152,233,52,40,178,
    6,152,119,20,179,150,69,43,4,37,150,192,16,21,204,138,
    170,168,201,182,17,137,17,231,197,39,19,14,13,213,49,128,
    214,209,168,193,6,79,100,63,27,192,126,27,14,134,156,37,
    63,218,189,192,101,187,39,237,34,244,218,238,29,92,136,109,
    129,27,42,219,190,161,101,82,108,219,220,57,14,222,34,7,
    87,71,14,174,111,180,188,167,177,135,95,70,30,86,49,203,
    22,162,111,208,232,146,255,60,218,250,118,211,236,247,231,17,
    230,37,222,230,242,140,118,185,89,29,211,166,227,134,230,60,
    141,24,103,101,49,103,166,206,88,165,72,71,43,114,55,233,
    109,242,245,45,81,148,103,119,193,203,99,59,139,208,88,18,
    94,58,179,19,246,92,79,89,102,92,224,86,163,54,65,92,
    218,178,86,97,124,19,212,129,217,38,170,127,33,56,108,140,
    98,147,43,133,37,248,93,194,137,0,116,224,49,251,99,91,
    194,175,98,191,6,45,101,134,127,10,135,79,33,118,45,223,
    243,237,248,61,188,222,94,22,252,85,221,77,37,186,122,197,
    85,192,223,150,7,112,94,114,243,214,59,74,106,207,61,12,
    207,75,106,115,97,90,177,76,170,78,214,70,174,189,42,170,
    50,143,237,181,115,118,230,2,64,100,16,134,174,166,204,15,
    151,99,172,166,35,68,60,158,77,184,77,211,96,183,45,147,
    219,234,145,204,81,117,119,194,59,11,170,90,134,86,66,79,
    14,168,43,99,12,89,79,138,232,233,98,44,175,86,241,249,
    244,222,24,219,44,52,225,56,37,62,162,92,133,36,225,82,
    68,248,149,4,100,252,14,182,230,213,169,245,36,166,173,119,
    165,193,167,164,231,245,36,189,153,177,120,126,135,170,23,29,
    141,124,166,145,172,120,92,7,155,35,85,235,35,218,41,173,
    234,199,103,84,157,29,163,253,54,109,47,156,51,49,34,190,
    175,222,95,100,249,65,69,46,68,34,243,169,25,216,211,200,
    44,63,156,204,116,10,42,198,110,66,104,205,53,62,153,63,
    67,112,84,34,190,209,177,60,143,199,50,240,177,124,19,143,
    101,131,11,143,141,23,147,74,211,201,170,74,143,81,101,161,
    94,50,182,109,100,49,253,113,106,46,225,45,59,116,111,142,
    153,27,162,132,103,104,92,45,197,252,31,79,242,95,137,249,
    63,4,33,132,58,88,119,57,196,241,8,77,84,82,170,116,
    156,180,46,173,173,227,243,195,156,163,134,139,134,115,106,41,
    243,230,133,196,22,22,81,145,108,30,36,106,134,146,40,227,
    246,88,62,103,131,252,142,132,166,183,105,52,3,3,11,207,
    228,144,205,199,130,8,237,243,239,208,251,239,218,49,91,141,
    115,4,157,187,56,109,191,18,37,12,173,179,30,84,32,241,
    134,189,236,28,244,135,28,213,203,248,163,222,40,57,236,3,
    44,222,67,219,107,187,38,104,17,38,95,23,248,192,29,56,
    83,214,147,180,148,69,44,94,67,116,116,130,72,139,140,152,
    69,29,248,104,77,37,21,120,165,178,236,132,61,137,65,122,
    248,136,37,48,180,4,207,248,224,53,244,235,194,42,101,30,
    21,150,70,20,9,117,172,174,132,199,119,96,28,224,2,251,
    85,44,88,80,210,99,146,108,50,28,168,34,31,217,207,153,
    101,15,135,174,231,40,41,198,211,192,188,65,205,173,169,35,
    35,167,5,193,189,242,132,214,168,176,38,25,214,164,42,150,
    48,50,214,27,148,36,209,171,162,103,247,93,203,98,175,89,
    86,127,224,28,244,176,107,82,78,154,52,102,82,121,106,210,
    26,230,44,53,244,246,109,94,162,230,178,222,131,184,148,48,
    233,244,85,229,212,53,106,174,83,179,172,237,98,103,175,15,
    60,151,211,211,164,205,206,164,173,218,108,140,217,251,222,73,
    79,247,209,19,249,255,16,25,81,74,231,13,254,228,243,41,
    188,12,190,82,163,171,148,201,231,242,217,72,128,62,190,104,
    162,0,100,113,232,6,225,151,150,205,239,112,118,98,100,139,
    71,182,18,35,109,30,105,39,70,28,30,113,18,35,46,239,
    102,241,192,138,101,39,176,90,96,155,255,211,193,211,31,196,
    112,229,1,127,215,225,202,125,123,48,224,191,91,182,207,34,
    110,245,236,157,46,153,219,165,57,93,10,172,46,39,102,163,
    162,31,102,89,118,175,135,22,209,122,131,173,93,183,29,170,
    32,252,28,162,215,56,126,94,140,86,98,244,85,140,190,86,
    46,26,185,147,35,148,125,87,191,16,143,177,246,247,84,184,
    61,160,208,9,126,198,38,47,23,59,37,145,199,212,197,143,
    44,136,232,131,40,139,127,179,178,38,171,92,55,243,71,230,
    21,146,115,120,213,100,77,212,48,241,49,245,101,81,46,202,
    255,1,206,48,208,56,
};

EmbeddedPython embedded_m5_util_multidict(
    "m5/util/multidict.py",
    "/home/eca/gem5/src/python/m5/util/multidict.py",
    "m5.util.multidict",
    data_m5_util_multidict,
    1830,
    5583);

} // anonymous namespace
