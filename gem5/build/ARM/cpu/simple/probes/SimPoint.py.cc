#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_SimPoint[] = {
    120,156,173,146,75,107,219,64,16,128,71,178,45,39,166,148,
    62,232,177,176,167,34,247,32,245,144,20,10,33,20,221,2,
    165,13,118,107,168,47,66,94,141,237,77,119,181,98,119,93,
    146,92,147,63,218,31,209,115,59,179,142,105,161,215,46,210,
    48,51,154,199,55,179,146,240,112,6,244,190,23,0,254,132,
    148,150,158,4,52,192,103,214,82,208,9,152,20,150,41,36,
    237,0,48,133,117,2,237,16,238,1,238,0,190,46,7,208,
    142,96,158,103,148,168,126,209,201,19,210,2,139,215,123,245,
    57,137,75,103,87,248,65,249,128,29,186,79,171,43,148,33,
    28,145,127,174,204,165,85,93,144,127,131,84,12,114,78,10,
    2,44,19,198,161,222,68,196,173,136,99,8,56,130,171,12,
    8,134,48,238,200,51,142,158,35,6,105,179,232,57,134,217,
    60,31,83,9,255,238,208,93,172,173,19,210,106,77,189,85,
    183,17,135,214,162,106,188,146,162,210,86,126,19,11,250,104,
    157,23,121,85,45,252,180,152,165,92,226,37,9,217,239,74,
    175,76,175,177,236,185,154,143,22,231,23,219,173,130,31,63,
    71,254,5,133,93,116,1,221,247,70,83,245,91,20,185,234,
    124,240,83,255,152,171,28,194,87,171,98,115,235,159,242,156,
    213,66,228,118,23,250,93,152,138,181,210,152,79,120,95,188,
    151,186,238,26,131,117,29,38,209,48,182,221,105,54,199,209,
    108,173,36,125,200,193,55,61,198,24,121,125,93,111,177,105,
    209,133,17,79,220,184,198,4,190,147,47,132,244,246,36,22,
    85,15,112,209,63,15,142,182,16,30,145,74,3,113,247,58,
    34,240,37,252,17,254,13,137,114,107,13,150,40,155,114,131,
    230,180,244,78,150,255,174,227,176,206,162,191,137,91,155,114,
    54,147,101,73,150,242,251,44,249,152,71,228,99,18,230,180,
    232,25,209,239,105,185,196,140,127,150,152,250,63,24,226,192,
    103,251,189,157,191,226,42,220,123,146,60,73,127,3,56,125,
    177,254,
};

EmbeddedPython embedded_m5_objects_SimPoint(
    "m5/objects/SimPoint.py",
    "/home/eca/gem5/src/cpu/simple/probes/SimPoint.py",
    "m5.objects.SimPoint",
    data_m5_objects_SimPoint,
    450,
    756);

} // anonymous namespace
