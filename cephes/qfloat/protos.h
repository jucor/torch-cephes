/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 *
 *   Created: Sat Mar 25 14:00:41 1995
 */
extern long double acoshl ( long double x );
extern long double asinhl ( long double x );
extern long double asinl ( long double x );
extern long double acosl ( long double x );
extern long double atanhl ( long double x );
extern long double atanl ( long double x );
extern long double atan2l ( long double x, long double y );
extern long double bdtrcl ( int k, int n, long double p );
extern long double bdtrl ( int k, int n, long double p );
extern long double bdtril ( int k, int n, long double y );
extern long double btdtrl ( long double a, long double b, long double x );
extern long double cbrtl ( long double x );
extern long double chdtrcl ( long double df, long double x );
extern long double chdtrl ( long double df, long double x );
extern long double chdtril ( long double df, long double y );
extern long double coshl ( long double x );
extern long double exp10l ( long double x );
extern long double exp2l ( long double x );
extern long double expl ( long double x );
extern long double fabsl ( long double x );
extern long double fdtrcl ( int ia, int ib, long double x );
extern long double fdtrl ( int ia, int ib, long double x );
extern long double fdtril ( int ia, int ib, long double y );
extern long double ceill ( long double x );
extern long double ellpel ( long double x );
extern long double ellpkl ( long double x );
extern long double floorl ( long double x );
extern long double frexpl ( long double x, int *pw2 );
extern long double ldexpl ( long double x, int pw2 );
extern long double gammal ( long double x );
extern long double lgaml ( long double x );
extern long double gdtrl ( long double a, long double b, long double x );
extern long double gdtrcl ( long double a, long double b, long double x );
extern long double igamil ( long double a, long double y0 );
extern long double igamcl ( long double a, long double x );
extern long double igaml ( long double a, long double x );
extern long double incbetl ( long double aa, long double bb, long double xx );
extern long double incbil ( long double aa, long double bb, long double yy0 );
extern long double j0l ( long double x );
extern long double y0l ( long double x );
extern long double j1l ( long double x );
extern long double y1l ( long double x );
extern long double jnl ( int n, long double x );
extern int ldrand ( long double *a );
extern long double log10l ( long double x );
extern long double log2l ( long double x );
extern long double logl ( long double x );
extern int mtherr ( char *name, int code );
extern long double nbdtrcl ( int k, int n, long double p );
extern long double nbdtrl ( int k, int n, long double p );
extern long double ndtril ( long double y0 );
extern long double ndtrl ( long double a );
extern long double erfcl ( long double a );
extern long double erfl ( long double x );
extern long double pdtrcl ( int k, long double m );
extern long double pdtrl ( int k, long double m );
extern long double pdtril ( int k, long double y );
extern long double polevll ( long double x, void *P, int n );
extern long double p1evll ( long double x, void *P, int n );
extern long double powil ( long double x, int nn );
extern long double powl ( long double x, long double y );
extern long double sinhl ( long double x );
extern long double sinl ( long double x );
extern long double cosl ( long double x );
extern long double sqrtl ( long double x );
extern long double stdtrl ( int k, long double t );
extern long double stdtril ( int k, long double p );
extern long double tanhl ( long double x );
extern long double tanl ( long double x );
extern long double cotl ( long double x );
extern long double log1pl ( long double x );
extern long double exp1ml ( long double x );
extern long double cos1ml ( long double x );
extern long double ynl ( int n, long double x );

/* double precision functions.  */
/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 *
 *   Created: Wed Mar 29 17:50:31 1995
 */
extern double bdtrc ( int k, int n, double p );
extern double bdtr ( int k, int n, double p );
extern double bdtri ( int k, int n, double y );
extern double btdtr ( double a, double b, double x );
extern double cbrt (double x);
extern double chdtrc ( double df, double x );
extern double chdtr ( double df, double x );
extern double chdtri ( double df, double y );
extern int drand ( double *a );
extern double fdtrc ( int ia, int ib, double x );
extern double fdtr ( int ia, int ib, double x );
extern double fdtri ( int ia, int ib, double y );
extern double frexp ( double x, int *pw2 );
extern double ldexp ( double x, int pw2 );
extern double gamma ( double x );
extern double lgam ( double x );
extern double gdtr ( double a, double b, double x );
extern double gdtrc ( double a, double b, double x );
extern double igamc ( double a, double x );
extern double igam ( double a, double x );
extern double igami ( double a, double y0 );
extern double incbet ( double aa, double bb, double xx );
extern double incbi ( double aa, double bb, double yy0 );
extern int mtherr ( char *name, int code );
extern double nbdtrc ( int k, int n, double p );
extern double nbdtr ( int k, int n, double p );
extern double nbdtri ( int k, int n, double p );
extern double ndtr ( double a );
extern double erfc ( double a );
extern double erf ( double x );
extern double ndtri ( double y0 );
extern double pdtrc ( int k, double m );
extern double pdtr ( int k, double m );
extern double pdtri ( int k, double y );
extern double stdtr ( int k, double t );
extern double stdtri ( int k, double p );
extern double log1p ( double x );
extern double exp1m ( double x );
extern double cos1m ( double x );
extern double polevl ( double x, void *P, int n );
extern double p1evl ( double x, void *P, int n );
/* These are presumed elsewhere. */
extern double atan ( double x );
extern double cabs ( cmplx * x );
extern void cadd ( cmplx * x, cmplx * y, cmplx * z );
extern void csub ( cmplx * x, cmplx * y, cmplx * z );
extern void cmul ( cmplx * x, cmplx * y, cmplx * z );
extern void cdiv ( cmplx * x, cmplx * y, cmplx * z );
extern double exp ( double x );
extern double fabs ( double x );
extern double floor ( double x );
extern double log ( double x );
extern double powi ( double x, int n );
extern double pow ( double x, double y );
extern double sin ( double x );
extern double cos ( double x );
extern double sqrt ( double x );