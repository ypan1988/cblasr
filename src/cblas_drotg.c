/*
 * cblas_drotg.c
 *
 * The program is a C interface to drotg.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include <R_ext/BLAS.h>
void cblas_drotg(  double *a, double *b, double *c, double *s)
{
   F77_NAME(drotg)(a,b,c,s);
}
