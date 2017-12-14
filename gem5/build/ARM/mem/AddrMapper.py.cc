#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_AddrMapper[] = {
    120,156,157,82,77,111,219,48,12,165,226,196,73,186,22,27,
    118,216,89,135,98,240,118,136,129,1,189,21,195,182,227,128,
    110,133,83,20,88,46,134,98,177,113,10,43,54,36,101,104,
    206,221,255,222,72,38,110,79,235,33,254,160,73,90,212,123,
    124,98,5,135,43,161,247,139,6,8,223,201,177,244,40,104,
    0,110,216,27,64,163,192,41,88,40,80,54,1,84,112,167,
    192,14,225,15,192,35,192,175,197,0,236,8,112,32,217,244,
    41,155,128,29,195,60,155,208,118,235,191,116,101,138,188,200,
    230,227,222,157,146,185,66,247,115,121,143,85,140,39,20,125,
    181,214,95,153,174,67,95,245,180,6,244,126,99,90,159,200,
    65,96,14,68,137,33,137,15,113,25,194,130,176,83,38,249,
    72,153,49,224,4,136,35,251,83,40,230,217,144,202,10,222,
    36,188,37,227,208,229,134,64,74,39,40,179,186,14,175,152,
    133,9,17,189,238,90,31,3,243,152,55,230,55,74,152,113,
    24,185,135,178,220,24,135,101,41,68,203,210,181,118,219,112,
    200,0,113,215,161,228,171,135,135,178,70,99,209,75,254,198,
    111,81,138,205,50,68,111,14,93,238,209,174,105,247,152,50,
    39,9,69,13,193,149,31,35,102,204,81,198,34,60,155,112,
    78,38,175,91,135,57,86,38,95,161,187,200,131,175,114,110,
    236,89,189,89,183,147,158,115,174,96,200,84,201,157,156,170,
    248,154,5,49,155,21,30,37,246,253,168,87,58,237,195,228,
    32,124,47,246,217,11,98,103,61,120,208,237,157,166,5,173,
    223,233,88,155,168,67,221,110,27,75,41,237,81,214,219,240,
    225,191,139,141,71,189,196,245,102,165,247,75,117,108,101,206,
    10,30,226,66,88,176,128,5,203,27,249,128,111,105,194,90,
    127,109,188,113,34,52,247,46,91,139,28,173,95,175,214,27,
    211,148,94,208,36,215,179,56,228,142,62,6,86,227,146,43,
    78,251,99,24,167,106,74,223,31,162,150,176,113,23,179,142,
    169,133,66,245,211,42,117,199,130,202,200,93,238,39,244,243,
    123,174,100,33,78,212,155,201,187,179,127,126,123,218,228,
};

EmbeddedPython embedded_m5_objects_AddrMapper(
    "m5/objects/AddrMapper.py",
    "/home/eca/gem5/src/mem/AddrMapper.py",
    "m5.objects.AddrMapper",
    data_m5_objects_AddrMapper,
    479,
    1008);

} // anonymous namespace
