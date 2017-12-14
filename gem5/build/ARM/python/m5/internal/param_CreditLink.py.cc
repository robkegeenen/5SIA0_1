#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_CreditLink[] = {
    120,156,181,88,123,115,219,198,17,223,3,64,74,164,36,139,
    178,94,182,165,88,176,19,53,172,167,149,218,52,174,59,19,
    197,173,235,166,51,205,212,138,10,166,99,71,201,20,133,128,
    147,4,138,4,56,192,209,50,83,106,58,19,121,250,248,0,
    253,8,253,35,223,166,211,47,212,238,238,1,32,68,73,211,
    204,148,146,201,243,242,112,183,183,143,223,62,14,62,100,127,
    21,252,254,194,6,72,255,45,0,2,252,8,232,0,116,5,
    236,11,16,82,64,176,4,39,21,72,62,132,160,2,111,1,
    246,13,144,6,156,35,97,194,151,6,68,179,188,167,10,29,
    147,103,4,12,234,32,45,216,175,192,203,104,1,44,89,133,
    147,58,36,127,4,33,68,36,224,85,48,5,193,52,188,69,
    238,72,212,152,225,52,208,100,157,39,107,16,204,240,100,29,
    130,89,38,102,96,208,0,57,11,251,115,180,108,255,22,178,
    125,132,108,231,153,237,191,136,109,128,79,150,33,184,69,203,
    81,174,47,104,165,69,43,249,188,121,230,210,200,165,92,128,
    253,219,57,189,88,162,151,74,244,114,137,94,41,209,171,37,
    250,78,137,190,91,162,239,149,232,181,18,189,94,162,223,97,
    26,181,186,13,237,251,208,222,128,182,13,135,104,232,133,66,
    131,7,32,77,104,63,132,253,135,32,241,243,0,206,209,23,
    193,237,210,142,119,121,199,98,177,227,61,222,177,9,251,155,
    32,241,243,158,222,81,133,86,115,5,253,27,254,7,255,154,
    232,95,80,179,56,188,150,73,26,198,145,27,70,135,113,104,
    208,243,42,13,132,6,159,134,169,12,22,207,9,22,223,2,
    99,34,48,50,88,156,1,50,22,164,75,199,128,51,38,206,
    12,24,52,97,40,160,109,65,96,194,16,143,169,144,0,71,
    2,206,13,248,202,164,5,103,56,90,232,188,251,96,41,141,
    137,54,59,79,115,154,130,179,10,12,43,208,122,53,52,104,
    226,164,6,201,63,225,235,117,102,58,205,76,13,24,226,104,
    193,185,5,103,85,120,137,139,112,170,93,35,245,197,171,33,
    106,138,51,173,166,133,210,238,150,212,37,85,130,48,137,188,
    174,84,11,72,187,61,47,241,186,238,243,68,6,161,250,109,
    24,157,52,235,249,178,56,221,234,121,234,216,225,125,38,25,
    164,219,83,204,47,142,164,154,65,226,48,140,2,183,27,7,
    253,142,84,211,196,204,61,12,59,210,117,249,225,111,186,189,
    56,81,159,36,73,156,56,100,83,158,236,196,94,177,131,44,
    234,119,226,84,54,233,52,62,198,33,246,138,86,31,246,152,
    35,9,192,178,210,230,64,166,126,18,246,20,186,74,115,164,
    213,196,173,73,78,226,33,253,57,14,219,199,113,87,110,75,
    223,219,62,146,221,199,219,7,253,176,19,108,63,115,94,108,
    247,6,234,56,142,182,113,46,140,148,68,35,116,182,199,213,
    223,194,53,183,137,209,105,120,228,134,172,130,123,44,59,61,
    153,204,209,236,61,58,68,52,196,172,168,10,83,52,197,28,
    82,21,252,154,98,221,152,17,187,33,41,225,147,98,4,32,
    171,12,25,242,163,128,19,3,146,117,2,68,27,63,130,60,
    136,176,104,209,51,131,159,253,142,180,215,179,109,147,220,172,
    39,135,12,34,68,19,174,220,33,191,70,192,72,168,64,187,
    10,26,33,8,44,13,153,100,64,35,46,39,54,6,50,183,
    32,253,7,160,53,17,27,67,200,112,115,110,130,136,26,160,
    234,148,26,112,118,5,15,252,134,161,215,106,146,248,187,140,
    0,117,28,166,241,105,196,118,38,154,131,165,133,150,217,27,
    124,118,208,150,190,74,55,112,226,139,184,111,251,94,20,197,
    202,246,130,192,246,148,74,194,131,190,146,169,173,98,123,51,
    109,146,235,156,133,28,68,5,191,65,47,7,13,57,24,65,
    163,127,4,161,175,240,199,34,255,96,47,164,82,33,0,142,
    227,32,197,121,98,113,36,149,67,66,42,50,114,204,130,48,
    62,92,90,74,199,227,186,91,248,251,89,46,9,131,176,89,
    205,33,147,202,206,161,170,51,250,188,52,117,89,18,154,103,
    160,17,227,215,94,167,47,153,123,138,252,80,32,34,181,12,
    19,134,218,29,18,59,215,146,69,143,226,40,24,160,36,161,
    255,62,29,114,135,1,55,203,144,91,70,184,77,225,88,197,
    255,171,98,197,240,173,12,100,213,28,104,148,219,20,176,155,
    69,230,105,4,221,57,230,145,166,193,137,128,165,231,72,123,
    72,20,109,118,214,105,120,135,134,251,52,108,228,10,78,78,
    203,185,113,45,159,16,103,131,85,99,37,200,232,102,174,68,
    112,33,90,238,142,162,5,51,91,139,80,111,80,108,140,80,
    111,81,22,76,158,210,136,75,57,158,76,72,63,167,156,75,
    209,193,204,40,16,16,210,68,141,128,206,38,113,26,164,234,
    116,142,81,135,128,87,70,223,81,9,125,14,121,131,161,231,
    220,205,51,154,75,43,52,232,156,53,98,85,185,194,166,54,
    13,15,38,111,216,17,124,142,46,193,231,35,58,164,145,193,
    103,142,97,83,199,111,195,240,205,204,218,69,73,91,28,131,
    13,97,198,186,2,51,223,35,202,188,172,223,141,193,37,211,
    234,215,37,184,144,32,70,89,248,93,36,6,171,36,115,25,
    40,171,88,137,95,70,171,88,92,13,46,174,63,226,226,202,
    5,154,219,32,157,80,77,206,169,154,168,144,242,135,38,172,
    100,69,51,173,225,216,75,226,55,3,59,62,180,21,107,71,
    249,111,103,51,221,218,76,63,194,204,102,63,229,156,162,115,
    155,206,94,137,236,81,246,161,173,159,188,241,37,215,42,254,
    229,186,58,217,184,156,120,220,172,6,34,102,150,201,116,70,
    110,83,78,187,169,74,40,219,78,216,170,245,194,170,36,228,
    167,196,182,206,38,53,197,42,226,163,46,248,108,87,231,83,
    110,123,248,41,126,127,73,102,38,253,36,80,19,236,180,180,
    100,44,52,137,239,252,224,2,6,38,38,178,179,141,60,126,
    159,251,190,58,242,61,125,205,28,184,127,5,110,253,4,252,
    5,200,187,232,196,12,184,5,206,201,157,139,180,252,15,192,
    8,191,162,14,115,94,104,81,237,229,21,152,46,210,39,188,
    84,151,229,79,225,111,165,240,200,139,167,153,53,119,229,226,
    105,21,57,133,97,241,157,10,164,117,49,249,144,27,142,189,
    148,150,233,140,50,138,184,81,130,46,154,50,204,168,147,195,
    200,180,102,232,210,217,95,141,16,66,229,103,77,44,26,37,
    191,255,152,134,15,10,151,139,124,110,34,98,108,192,245,85,
    209,213,217,248,75,58,203,98,233,230,167,24,219,35,22,5,
    120,43,57,120,63,40,192,43,185,108,188,229,22,158,70,131,
    124,120,110,8,188,171,97,39,68,87,35,11,100,5,246,171,
    4,115,238,80,69,22,5,34,79,56,148,158,46,212,36,214,
    126,87,219,165,112,163,246,16,13,111,38,28,200,228,164,157,
    142,215,61,8,188,167,41,49,37,206,126,30,23,70,46,102,
    163,44,38,97,90,92,39,41,255,124,156,139,251,122,194,65,
    252,211,76,68,22,147,33,27,196,62,71,238,231,199,210,238,
    202,238,1,222,190,142,195,158,125,216,241,142,216,218,102,166,
    198,103,185,26,138,221,53,94,185,211,71,52,198,182,31,71,
    152,49,251,190,138,19,59,144,120,39,145,129,253,67,155,211,
    173,29,166,182,119,128,79,61,95,105,140,94,12,40,110,251,
    188,228,40,229,14,239,228,148,200,27,240,150,139,55,203,16,
    187,218,62,20,117,76,223,121,138,236,201,253,170,134,60,150,
    28,188,109,168,129,78,34,84,197,157,45,26,190,15,55,147,
    100,63,68,30,9,49,35,19,84,197,154,81,51,84,227,66,
    60,237,209,174,244,114,84,189,248,46,81,165,223,125,100,177,
    85,205,95,154,76,129,228,11,9,189,215,168,102,239,53,48,
    224,166,254,223,128,99,24,223,0,128,135,19,141,51,231,201,
    13,75,233,252,12,178,234,120,93,140,137,178,10,115,58,198,
    218,34,111,160,203,242,243,77,123,245,10,64,184,126,34,61,
    37,181,221,215,39,174,17,135,164,62,226,207,163,184,185,220,
    255,61,43,132,63,231,6,96,176,196,238,208,151,4,118,135,
    120,25,221,195,70,208,226,70,112,135,26,193,33,107,234,26,
    186,23,28,33,170,82,40,188,132,67,36,79,221,113,165,117,
    179,71,162,121,189,158,140,2,231,17,148,251,55,126,60,97,
    207,82,10,248,6,74,197,216,20,75,216,176,93,142,19,74,
    102,37,101,216,47,149,34,50,38,239,33,198,220,223,115,204,
    53,169,57,30,101,52,103,135,6,206,97,69,250,114,232,80,
    157,210,10,84,5,178,35,149,188,100,103,78,65,217,21,44,
    144,152,193,227,1,246,206,220,161,226,239,142,235,222,68,42,
    252,24,121,252,9,178,62,31,83,161,168,26,53,179,86,173,
    9,174,24,99,111,6,245,217,116,37,210,125,216,32,117,56,
    244,230,11,245,248,5,86,158,205,201,28,124,19,216,245,186,
    250,133,4,95,193,157,119,33,187,88,57,239,23,182,162,203,
    37,55,191,250,234,128,56,228,106,198,197,203,249,9,205,211,
    213,171,251,120,43,215,102,75,107,179,43,213,105,156,156,144,
    58,252,18,173,251,152,91,169,203,11,159,119,98,255,68,6,
    250,37,206,53,204,120,205,175,226,174,135,243,107,87,174,104,
    133,221,140,195,194,216,243,32,161,93,203,99,179,169,76,66,
    175,19,126,45,213,221,177,39,50,234,119,221,189,211,164,133,
    221,158,84,235,87,158,182,23,159,202,228,69,140,206,87,15,
    199,22,140,30,49,3,247,181,164,102,64,61,248,31,124,244,
    105,215,232,214,63,104,13,82,37,187,215,88,16,243,106,210,
    245,58,153,125,200,211,249,2,54,198,101,127,208,187,130,210,
    111,46,187,99,105,149,209,158,200,163,16,207,77,152,77,105,
    67,150,126,62,206,189,127,41,27,151,55,223,64,112,232,182,
    83,95,91,159,146,50,233,30,14,244,90,170,54,95,195,64,
    161,180,100,226,45,114,78,88,230,108,163,102,205,206,212,172,
    218,148,201,111,29,230,240,238,80,183,106,51,179,226,234,127,
    27,24,98,117,99,3,249,252,23,124,229,117,26,
};

EmbeddedPython embedded_m5_internal_param_CreditLink(
    "m5/internal/param_CreditLink.py",
    "/home/eca/gem5/build/ARM/python/m5/internal/param_CreditLink.py",
    "m5.internal.param_CreditLink",
    data_m5_internal_param_CreditLink,
    2269,
    6534);

} // anonymous namespace
