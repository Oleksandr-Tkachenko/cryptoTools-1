#pragma once


// use the miracl library for curves
/* #undef ENABLE_MIRACL */

// use the relic library for curves
/* #undef ENABLE_RELIC */

// compile the circuit library
/* #undef ENABLE_CIRCUITS */

// include the full GLS header (C++14). If not defined, uses gsl_lite (c++11)
#define ENABLE_FULL_GSL

//#define CHANNEL_LOGGING

// enables the use of assembly based SHA1
/* #undef ENABLE_NASM */

// Force BLAKE2 to be used as the random oracle 
//#define USE_BLAKE2_AS_RANDOM_ORACLE
