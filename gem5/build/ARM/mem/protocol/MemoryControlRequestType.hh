/** \file MemoryControlRequestType.hh
 *
 * Auto generated C++ code started by /home/eca/gem5/src/mem/slicc/symbols/Type.py:457
 */

#ifndef __MemoryControlRequestType_HH__
#define __MemoryControlRequestType_HH__

#include <iostream>
#include <string>


// Class definition
/** \enum MemoryControlRequestType
 *  \brief ...
 */
enum MemoryControlRequestType {
    MemoryControlRequestType_FIRST,
    MemoryControlRequestType_Default = MemoryControlRequestType_FIRST, /**< Replace this with access_types passed to the DMA Ruby object */
    MemoryControlRequestType_NUM
};

// Code to convert from a string to the enumeration
MemoryControlRequestType string_to_MemoryControlRequestType(const std::string& str);

// Code to convert state to a string
std::string MemoryControlRequestType_to_string(const MemoryControlRequestType& obj);

// Code to increment an enumeration type
MemoryControlRequestType &operator++(MemoryControlRequestType &e);
std::ostream& operator<<(std::ostream& out, const MemoryControlRequestType& obj);

#endif // __MemoryControlRequestType_HH__
