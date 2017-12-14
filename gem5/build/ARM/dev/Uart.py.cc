#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Uart[] = {
    120,156,149,82,77,111,212,64,12,245,36,217,143,110,11,236,
    1,184,81,133,91,196,97,131,144,86,234,1,33,84,245,140,
    170,52,28,154,75,52,36,94,146,42,179,137,102,102,171,221,
    115,249,223,96,79,146,109,233,9,242,97,217,111,28,251,249,
    57,5,12,151,79,239,215,16,192,164,228,148,244,8,104,0,
    210,193,19,189,231,65,227,129,242,33,243,65,148,62,160,15,
    27,1,101,0,191,0,30,0,110,179,0,202,9,96,224,208,
    233,17,157,64,57,131,155,104,78,133,235,223,116,69,130,60,
    203,230,67,239,190,36,115,41,77,93,92,215,237,21,222,215,
    5,218,128,160,239,82,219,226,41,191,75,230,119,69,14,2,
    100,130,89,102,30,147,224,190,2,168,15,78,225,110,6,56,
    135,187,19,38,251,224,65,182,112,224,233,8,250,14,60,131,
    228,38,226,22,137,71,198,156,242,200,120,31,239,168,225,170,
    170,12,181,129,235,70,218,77,171,85,104,171,218,132,165,99,
    21,146,215,81,78,216,110,86,230,140,146,210,10,67,139,90,
    213,91,217,68,47,120,20,30,50,207,183,82,97,158,219,133,
    11,84,91,238,26,14,185,161,61,116,253,112,169,222,161,203,
    150,63,140,213,178,176,46,187,216,239,243,10,101,137,218,78,
    152,132,212,82,185,172,145,142,157,246,48,110,173,101,73,228,
    246,224,206,187,241,156,131,116,160,228,130,35,63,86,241,209,
    152,115,50,113,213,42,140,177,144,241,79,84,235,216,232,34,
    102,29,88,248,85,119,112,226,188,231,92,166,54,21,253,253,
    70,184,178,156,115,241,105,253,241,184,32,49,46,232,245,179,
    5,241,106,124,22,156,203,37,75,174,247,234,137,224,92,132,
    68,239,215,193,35,37,206,227,241,147,249,95,148,255,153,247,
    114,72,54,193,192,251,91,196,178,217,19,50,106,189,234,88,
    85,227,166,224,72,183,251,131,147,181,255,245,18,49,254,23,
    199,58,255,215,222,21,254,220,111,253,203,59,254,134,129,133,
    88,136,165,247,118,246,7,229,228,172,93,
};

EmbeddedPython embedded_m5_objects_Uart(
    "m5/objects/Uart.py",
    "/home/eca/gem5/src/dev/Uart.py",
    "m5.objects.Uart",
    data_m5_objects_Uart,
    459,
    881);

} // anonymous namespace
