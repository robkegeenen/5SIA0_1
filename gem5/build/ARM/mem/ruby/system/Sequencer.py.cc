#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Sequencer[] = {
    120,156,173,86,91,111,227,68,20,30,231,218,36,189,166,109,
    182,236,213,66,128,2,72,141,132,180,226,1,132,150,237,106,
    37,30,10,197,93,144,232,139,229,218,167,141,139,47,89,207,
    164,106,222,144,202,31,65,226,71,242,6,231,59,190,196,221,
    118,247,1,53,110,39,103,190,57,103,102,206,237,115,124,85,
    124,154,252,255,194,86,74,255,193,66,192,127,150,138,148,122,
    83,72,86,46,53,84,212,80,113,67,157,52,148,21,52,21,
    53,212,153,165,130,150,250,83,169,107,165,126,59,105,170,160,
    173,168,41,104,167,66,91,42,232,150,232,74,133,182,85,208,
    43,209,126,133,118,84,48,80,199,227,85,190,68,248,47,127,
    198,22,75,6,195,23,185,216,227,225,144,226,159,78,47,200,
    55,102,133,103,206,252,116,113,148,102,198,175,187,242,18,174,
    252,195,2,41,117,98,193,33,190,51,159,134,203,88,138,15,
    167,142,186,232,194,35,246,227,154,61,90,81,212,131,43,215,
    188,218,87,52,128,39,144,87,21,173,193,25,200,235,53,121,
    67,209,38,252,130,188,37,242,138,200,67,217,121,91,209,78,
    185,243,238,45,100,36,200,3,69,123,234,226,163,18,124,40,
    224,163,18,236,9,248,184,180,109,34,72,64,158,212,144,129,
    32,79,107,200,170,32,207,148,115,60,94,67,104,26,60,232,
    71,60,196,20,79,50,14,212,68,47,180,97,185,12,218,254,
    116,26,34,102,6,131,94,231,225,224,232,23,91,71,222,37,
    217,51,94,215,27,5,20,123,108,151,229,216,78,17,117,155,
    119,189,177,176,93,46,204,194,180,190,201,102,205,32,205,22,
    57,136,11,230,183,177,83,201,166,126,130,210,243,140,103,251,
    158,63,37,59,163,183,115,210,70,219,122,62,131,5,5,162,
    17,38,218,188,95,99,200,26,126,154,36,188,31,5,182,73,
    109,222,109,54,31,219,240,17,213,226,186,137,23,147,235,154,
    190,76,226,52,152,71,152,182,160,176,152,145,8,111,178,57,
    137,182,119,170,77,230,113,161,65,219,191,186,114,167,228,5,
    148,153,54,79,143,188,204,139,13,138,237,135,196,152,46,127,
    95,82,166,195,52,49,136,217,175,124,129,52,59,70,12,16,
    103,177,144,136,152,205,106,245,80,66,39,203,29,228,72,166,
    114,84,109,5,155,113,56,221,124,213,157,149,24,135,242,6,
    134,198,88,30,183,94,88,201,145,185,194,122,97,84,131,224,
    235,203,52,141,228,118,175,189,72,147,217,98,105,174,195,228,
    220,69,185,184,134,228,78,64,147,212,205,200,100,11,55,77,
    92,109,188,40,146,155,34,173,199,146,69,241,129,131,66,28,
    13,68,197,75,22,102,192,223,178,143,94,170,212,180,11,20,
    187,23,25,116,145,127,62,231,173,190,129,34,231,57,138,232,
    133,218,229,156,186,26,217,79,124,202,198,40,222,229,160,39,
    60,76,166,105,76,19,242,189,201,57,197,207,39,58,243,39,
    239,246,192,113,105,191,63,91,72,167,124,12,99,12,29,43,
    127,134,141,85,171,122,26,67,107,104,237,242,131,111,179,86,
    99,158,163,44,189,90,84,244,99,149,244,179,243,14,253,128,
    120,154,104,77,156,229,124,130,195,236,15,180,166,236,202,253,
    57,70,150,28,25,144,38,7,129,115,122,55,60,254,255,110,
    227,22,95,195,184,85,184,93,57,86,169,221,230,213,191,239,
    116,140,185,148,217,149,218,234,162,35,156,198,96,247,230,116,
    69,166,66,179,96,215,134,48,109,133,116,4,25,8,178,10,
    106,5,163,50,178,86,234,244,74,14,92,23,36,103,224,156,
    60,183,74,171,65,201,129,195,138,3,63,45,95,27,149,71,
    250,241,29,97,95,134,101,58,117,224,106,136,68,234,145,244,
    119,197,56,211,208,216,145,103,88,113,33,75,175,150,116,85,
    91,10,81,165,250,75,233,233,171,37,75,141,195,196,143,246,
    237,89,70,103,100,216,68,127,110,167,115,195,189,148,4,220,
    112,161,253,87,87,233,215,133,81,109,193,246,23,126,68,218,
    62,75,51,102,179,98,55,251,148,120,78,118,192,132,20,165,
    254,239,147,40,188,36,8,140,248,17,119,97,16,34,113,66,
    189,7,172,120,228,133,153,237,195,34,12,198,219,183,43,74,
    34,4,134,99,99,173,165,190,156,126,137,163,30,14,224,164,
    116,109,232,87,98,176,20,15,228,146,102,88,41,184,28,16,
    183,8,136,192,193,45,216,1,63,152,189,220,101,183,230,178,
    91,198,44,55,44,124,116,205,52,35,61,77,163,192,121,128,
    91,193,80,104,226,220,203,18,50,174,88,123,81,154,228,55,
    130,183,236,236,61,116,9,74,232,27,24,63,92,146,67,99,
    195,218,104,131,10,122,197,51,108,26,252,108,121,117,248,253,
    7,90,231,179,59,91,135,90,234,162,93,251,49,210,65,241,
    74,126,190,194,169,207,238,40,215,250,49,120,137,191,128,226,
    222,29,197,83,70,114,220,125,15,141,72,154,37,19,206,254,
    61,177,10,110,253,51,140,59,85,188,126,148,243,165,154,226,
    231,251,51,188,59,181,188,98,49,3,211,57,104,55,167,162,
    70,137,185,108,116,15,23,146,131,190,205,223,245,223,61,197,
    38,200,84,223,234,91,155,141,209,238,168,53,26,253,7,65,
    170,152,82,
};

EmbeddedPython embedded_m5_objects_Sequencer(
    "m5/objects/Sequencer.py",
    "/home/eca/gem5/src/mem/ruby/system/Sequencer.py",
    "m5.objects.Sequencer",
    data_m5_objects_Sequencer,
    1171,
    2824);

} // anonymous namespace
