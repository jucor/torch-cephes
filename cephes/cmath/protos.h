/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 *
 *   Created: Fri Mar 31 19:17:33 1995
 */
extern double torch_cephes_acosh ( double x );
extern int torch_cephes_airy ( double, double *, double *, double *, double * );
extern double torch_cephes_asin ( double );
extern double torch_cephes_acos ( double );
extern double torch_cephes_asinh ( double x );
extern double torch_cephes_atan ( double );
extern double torch_cephes_atan2 ( double y, double x );
extern double torch_cephes_atanh ( double );
extern double torch_cephes_bdtrc ( int k, int n, double p );
extern double torch_cephes_bdtr ( int k, int n, double p );
extern double torch_cephes_bdtri ( int k, int n, double y );
extern double torch_cephes_beta ( double a, double b );
extern double torch_cephes_lbeta ( double a, double b );
extern double torch_cephes_btdtr ( double a, double b, double x );
extern double torch_cephes_cbrt ( double );
extern double torch_cephes_chbevl ( double, void *, int );
extern double torch_cephes_chdtrc ( double df, double x );
extern double torch_cephes_chdtr ( double df, double x );
extern double torch_cephes_chdtri ( double df, double y );
extern void torch_cephes_clog ( cmplx *z, cmplx *w );
extern void torch_cephes_cexp ( cmplx *z, cmplx *w );
extern void torch_cephes_csin ( cmplx *z, cmplx *w );
extern void torch_cephes_ccos ( cmplx *z, cmplx *w );
extern void torch_cephes_ctan ( cmplx *z, cmplx *w );
extern void torch_cephes_ccot ( cmplx *z, cmplx *w );
extern void torch_cephes_casin ( cmplx *z, cmplx *w );
extern void torch_cephes_cacos ( cmplx *z, cmplx *w );
extern void torch_cephes_catan ( cmplx *z, cmplx *w );
extern void torch_cephes_cadd ( cmplx *a, cmplx *b, cmplx *c );
extern void torch_cephes_csub ( cmplx *a, cmplx *b, cmplx *c );
extern void torch_cephes_cmul ( cmplx *a, cmplx *b, cmplx *c );
extern void torch_cephes_cdiv ( cmplx *a, cmplx *b, cmplx *c );
extern void torch_cephes_cmov ( void *a, void *b );
extern void torch_cephes_cneg ( cmplx *a );
extern double torch_cephes_cabs ( cmplx *z );
extern void torch_cephes_csqrt ( cmplx *z, cmplx *w );
extern double torch_cephes_hypot ( double, double );
extern double torch_cephes_cosh ( double );
extern double torch_cephes_dawsn ( double xx );
extern void torch_cephes_eigens ( double A[], double RR[], double E[], int N );
extern double torch_cephes_ellie ( double, double );
extern double torch_cephes_ellik ( double, double );
extern double torch_cephes_ellpe ( double );
extern int torch_cephes_ellpj ( double u, double m, double *sn, double *cn,
                                double *dn, double *ph );
extern double torch_cephes_ellpk ( double );
extern double torch_cephes_exp10 ( double );
extern double torch_cephes_exp1m ( double );
extern double torch_cephes_exp2 ( double );
extern double torch_cephes_expn ( int n, double x );
extern double torch_cephes_fac ( int i );
extern double torch_cephes_fdtrc ( int ia, int ib, double x );
extern double torch_cephes_fdtr ( int ia, int ib, double x );
extern double torch_cephes_fdtri ( int ia, int ib, double y );
extern int torch_cephes_fftr ( double x[], int m0, double sine[] );
extern double torch_cephes_ceil ( double x );
extern double torch_cephes_fabs ( double );
extern double torch_cephes_floor ( double );
extern double torch_cephes_frexp ( double, int * );
extern double torch_cephes_ldexp ( double, int );
extern int torch_cephes_signbit ( double );
extern int torch_cephes_isnan ( double );
extern int torch_cephes_isfinite ( double );
extern double torch_cephes_polevl ( double, void *, int );
extern double torch_cephes_p1evl ( double, void *, int );
extern double torch_cephes_exp ( double );
extern double torch_cephes_log ( double );
extern double torch_cephes_sin ( double );
extern double torch_cephes_cos ( double );
extern double torch_cephes_sqrt ( double );
extern int torch_cephes_fresnl ( double xxa, double *ssa, double *cca );
extern double torch_cephes_gamma ( double );
extern double torch_cephes_lgam ( double );
extern double torch_cephes_gdtr ( double a, double b, double x );
extern double torch_cephes_gdtrc ( double a, double b, double x );
extern int torch_cephes_gels ( double A[], double R[], int M, double EPS,
                               double AUX[] );
extern double torch_cephes_hyp2f1 ( double a, double b, double c, double x );
extern double torch_cephes_hyperg ( double, double, double );
extern double torch_cephes_hyp2f0 ( double a, double b, double x, int type,
                                    double *err );
extern double torch_cephes_i0 ( double );
extern double torch_cephes_i0e ( double x );
extern double torch_cephes_i1 ( double );
extern double torch_cephes_i1e ( double x );
extern double torch_cephes_igamc ( double, double );
extern double torch_cephes_igam ( double, double );
extern double torch_cephes_igami ( double, double );
extern double torch_cephes_incbet ( double, double, double );
extern double torch_cephes_incbi ( double, double, double );
extern double torch_cephes_iv ( double v, double x );
extern double torch_cephes_j0 ( double );
extern double torch_cephes_y0 ( double );
extern double torch_cephes_j1 ( double );
extern double torch_cephes_y1 ( double );
extern double torch_cephes_jn ( int n, double x );
extern double torch_cephes_jv ( double, double );
extern double torch_cephes_k0 ( double x );
extern double torch_cephes_k0e ( double x );
extern double torch_cephes_k1 ( double x );
extern double torch_cephes_k1e ( double x );
extern double torch_cephes_kn ( int nn, double x );
extern int torch_cephes_levnsn ( int n, double r[], double a[],
                                 double e[], double refl[] );
extern double torch_cephes_log10 ( double );
extern double torch_cephes_log2 ( double );
extern long torch_cephes_lrand ( void );
extern long torch_cephes_lsqrt ( long x );
extern int torch_cephes_minv ( double A[], double X[], int n, double B[],
                               int IPS[] );
extern int torch_cephes_mmmpy ( int r, int c, double *A, double *B, double *Y );
extern int torch_cephes_mtherr ( char *name, int code );
extern int torch_cephes_mtransp ( int n, double *A, double *T );
extern int torch_cephes_mvmpy ( int r, int c, double *A, double *V, double *Y );
extern double torch_cephes_nbdtrc ( int k, int n, double p );
extern double torch_cephes_nbdtr ( int k, int n, double p );
extern double torch_cephes_nbdtri ( int k, int n, double p );
extern double torch_cephes_ndtr ( double a );
extern double torch_cephes_erfc ( double );
extern double torch_cephes_erf ( double );
extern double torch_cephes_ndtri ( double );
extern double torch_cephes_pdtrc ( int k, double m );
extern double torch_cephes_pdtr ( int k, double m );
extern double torch_cephes_pdtri ( int k, double y );
extern double torch_cephes_pow ( double, double );
extern double torch_cephes_powi ( double, int );
extern double torch_cephes_psi ( double );
extern void torch_cephes_revers ( double y[], double x[], int n );
extern double torch_cephes_rgamma ( double x );
extern double torch_cephes_round ( double );
extern int torch_cephes_sprec ( void );
extern int torch_cephes_dprec ( void );
extern int torch_cephes_ldprec ( void );
extern int torch_cephes_shichi ( double x, double *si, double *ci );
extern int torch_cephes_sici ( double x, double *si, double *ci );
extern double torch_cephes_simpsn ( double f[], double delta );
extern int torch_cephes_simq ( double A[], double B[], double X[],
                               int n, int flag, int IPS[] );
extern double torch_cephes_radian ( double d, double m, double s );
/*
extern int sincos ( double x, double *s, double *c, int flg );
*/
extern double torch_cephes_sindg ( double x );
extern double torch_cephes_cosdg ( double x );
extern double torch_cephes_sinh ( double );
extern double torch_cephes_spence ( double );
extern double torch_cephes_stdtr ( int k, double t );
extern double torch_cephes_stdtri ( int k, double p );
extern double torch_cephes_onef2 ( double a, double b, double c,
                                   double x, double *err );
extern double torch_cephes_threef0 ( double a, double b, double c,
                                     double x, double *err );
extern double torch_cephes_struve ( double v, double x );
extern double torch_cephes_tan ( double );
extern double torch_cephes_cot ( double );
extern double torch_cephes_tandg ( double x );
extern double torch_cephes_cotdg ( double x );
extern double torch_cephes_tanh ( double );
extern double torch_cephes_log1p ( double );
extern double torch_cephes_exmp1 ( double );
extern double torch_cephes_cosm1 ( double x );
extern double torch_cephes_yn ( int, double );
extern double torch_cephes_zeta ( double x, double q );
extern double torch_cephes_zetac ( double );
extern int torch_cephes_drand ( double *a );
double torch_cephes_smirnov ( int, double );
double torch_cephes_smirnovi ( int, double );
double torch_cephes_kolmogorov ( double );
double torch_cephes_kolmogi ( double );

/* polyn.c */
extern void torch_cephes_polini ( int maxdeg );
extern void torch_cephes_polprt ( double a[], int na, int d );
extern void torch_cephes_polclr ( double *a, int n );
extern void torch_cephes_polmov ( double *a, int na, double *b );
extern void torch_cephes_polmul ( double a[], int na, double b[],
                                  int nb, double c[] );
extern void torch_cephes_poladd ( double a[], int na, double b[],
                                  int nb, double c[] );
extern void torch_cephes_polsub ( double a[], int na, double b[],
                                  int nb, double c[] );
extern int torch_cephes_poldiv ( double a[], int na, double b[],
                                 int nb, double c[] );
extern void torch_cephes_polsbt ( double a[], int na, double b[],
                                  int nb, double c[] );
extern double torch_cephes_poleva ( double a[], int na, double x );
/* polmisc.c */
extern void torch_cephes_polatn ( double num[], double den[], double ans[],
                                  int nn );
extern void torch_cephes_polsqt ( double pol[], double ans[], int nn );
extern void torch_cephes_polsin ( double x[], double y[], int nn );
extern void torch_cephes_polcos ( double x[], double y[], int nn );
