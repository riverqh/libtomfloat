/* LibTomFloat, multiple-precision floating-point library
 *
 * LibTomFloat is a library that provides multiple-precision
 * floating-point artihmetic as well as trigonometric functionality.
 *
 * This library requires the public domain LibTomMath to be installed.
 * 
 * This library is free for all purposes without any express
 * gurantee it works
 *
 * Tom St Denis, tomstdenis@iahu.ca, http://float.libtomcrypt.org
 */
#include <tomfloat.h>

int  mpf_const_sqrt_d(mp_float *a, long b)
{
   int err;
   if ((err = mpf_const_d(a, b)) != MP_OKAY) {
      return err;
   }
   return mpf_sqrt(a, a);
}
