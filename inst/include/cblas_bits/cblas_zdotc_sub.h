/*
 * cblas_zdotc_sub.c
 *
 * The program is a C interface to zdotc.
 * It calls the fortran wrapper before calling zdotc.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */

#ifndef CBLAS_ZDOTC_SUB_H_
#define CBLAS_ZDOTC_SUB_H_

inline void cblas_zdotc_sub(const int N, const void *X, const int incX,
                            const void *Y, const int incY, void *dotc) {
#ifdef F77_INT
  F77_INT F77_N = N, F77_incX = incX, F77_incY = incY;
#else
#define F77_N N
#define F77_incX incX
#define F77_incY incY
#endif
  *((Rcomplex *)dotc) = F77_NAME(zdotc)(&F77_N, (const Rcomplex *)X, &F77_incX,
                                        (const Rcomplex *)Y, &F77_incY);
  return;
}

#endif
