//
// Created by Amaury Johnen on 12/04/18.
//

#include <cmath>
#include <vector>
#include <algorithm>
#include "orthogonalBasis.h"


namespace LegendrePolynomials {
  void f(int n, double u, double *val)
  {
    val[0] = 1;

    for (int i = 0; i < n; i++) {

      double a1i = i + 1;
      double a3i = 2. * i + 1;
      double a4i = i;

      val[i + 1] = a3i * u * val[i];
      if (i > 0) val[i + 1] -= a4i * val[i - 1];
      val[i + 1] /= a1i;
    }
  }

  void fc(int n, double u, double *val)
  {
    f(n, u, val);
    for (int i = 2; i < n + 1; ++i) {
      if (i % 2) val[i] -= u;
      else val[i] -= 1;
    }
  }

  void df(int n, double u, double *val)
  {
    // Indeterminate form for u == -1 and u == 1
    if ((u == 1.) || (u == -1.)) {
      for (int k = 0; k <= n; k++) val[k] = 0.5 * k * (k + 1);
      if ((u == -1.) && (n >= 2))
        for (int k = 2; k <= n; k += 2)
          val[k] = -val[k];
      return;
    }

    // Now general case

    // Values of the Legendre polynomials
    std::vector<double> tmp(n + 1);
    f(n, u, &(tmp[0]));

    // First value of the derivative
    val[0] = 0;
    double g2 = (1. - u * u);

    // Values of the derivative for orders > 1 computed from the values of the polynomials
    for (int i = 1; i <= n; i++) {
      double g1 = -u * i;
      double g0 = (double)i;
      val[i] = (g1 * tmp[i] + g0 * tmp[i - 1]) / g2;
    }
  }
}

namespace JacobiPolynomials {
  void f(int n, double alpha, double beta, double u, double *val)
  {
    const double alphaPlusBeta = alpha + beta;
    const double a2MinusB2 = alpha*alpha - beta*beta;
    val[0] = 1.;
    if (n>=1) val[1] = 0.5*(2.*(alpha+1.) + (alphaPlusBeta + 2.)*(u-1.));

    for (int i=1;i<n;i++) {

      double ii = (double) i;
      double twoI = 2.*ii;

      double a1i = 2.*(ii+1.)*(ii+alphaPlusBeta+1.)*(twoI+alphaPlusBeta);
      double a2i = (twoI+alphaPlusBeta+1.)*(a2MinusB2);
      double a3i = Pochhammer(twoI+alphaPlusBeta,3);
      double a4i = 2.*(ii+alpha)*(ii+beta)*(twoI+alphaPlusBeta+2.);

      val[i+1] = ((a2i + a3i * u)* val[i] - a4i * val[i-1])/a1i;
    }
  }

  void df(int n, double alpha, double beta, double u, double *val)
  {
    const double alphaPlusBeta = alpha + beta;

    // Indeterminate form for u == -1 and u == 1
    // TODO: Extend to non-integer alpha & beta?
    if ((u == 1.) || (u == -1.)) {

      // alpha or beta in formula, depending on u
      int coeff = (u == 1.) ? (int)alpha : (int)beta;

      // Compute factorial
      const int fMax = std::max(n,1)+coeff;
      std::vector<double> fact(fMax+1);
      fact[0] = 1.;
      for (int i=1;i<=fMax;i++) fact[i] = i*fact[i-1];

      // Compute formula (with appropriate sign at even orders for u == -1)
      val[0] = 0.;
      for (int k=1;k<=n;k++) val[k] = 0.5*(k+alphaPlusBeta+1)*fact[k+coeff]/(fact[coeff+1]*fact[k-1]);
      if ((u == -1.) && (n >= 2)) for (int k=2;k<=n;k+=2) val[k] = -val[k];

      return;
    }

    // Now general case

    // Values of the Jacobi polynomials
    std::vector<double> tmp(n+1);
    f(n, alpha, beta, u,&(tmp[0]));

    // First 2 values of the derivatives
    val[0] = 0;
    if (n>=1) val[1] = 0.5*(alphaPlusBeta + 2.);

    // Values of the derivative for orders > 1 computed from the values of the polynomials
    for (int i=2;i<=n;i++) {
      double ii = (double) i;
      double aa = (2.*ii + alphaPlusBeta);
      double g2 = aa*(1.-u*u);
      double g1 = ii*(alpha - beta - aa*u);
      double g0 = 2.*(ii+alpha)*(ii+beta);
      val[i] = (g1 * tmp[i] + g0 * tmp[i-1])/g2;
    }
  }
}