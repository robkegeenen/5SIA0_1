%module(package="m5.internal") param_I2CBus

%{
#include "sim/sim_object.hh"
#include "params/I2CBus.hh"
#include <vector>
#include "params/I2CDevice.hh"
#include "dev/i2c/bus.hh"
/**
  * This is a workaround for bug in swig. Prior to gcc 4.6.1 the STL
  * headers like vector, string, etc. used to automatically pull in
  * the cstddef header but starting with gcc 4.6.1 they no longer do.
  * This leads to swig generated a file that does not compile so we
  * explicitly include cstddef. Additionally, including version 2.0.4,
  * swig uses ptrdiff_t without the std:: namespace prefix which is
  * required with gcc 4.6.1. We explicitly provide access to it.
  */
#include <cstddef>
using std::ptrdiff_t;
%}

%import "I2CDevice_vector.i"

%import "python/m5/internal/param_BasicPioDevice.i"


// stop swig from creating/wrapping default ctor/dtor
%nodefault I2CBus;
class I2CBus
    : public BasicPioDevice
{
  public:
};

%include "params/I2CBus.hh"
