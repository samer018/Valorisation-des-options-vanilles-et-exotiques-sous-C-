#ifndef BLACKSCHOLESFORMULAS_H_INCLUDED
#define BLACKSCHOLESFORMULAS_H_INCLUDED
double BlackScholesCall( double Spot,
double Strike,
double r,
double d,
double Vol,
double Expiry);

double BlackScholesPut( double Spot,
double Strike,
double r,
double d,
double Vol,
double Expiry);

double BlackScholesDigitalCall(double Spot,
double Strike,
double r,
double d,
double Vol,
double Expiry);

double BlackScholesCallVega( double Spot,
double Strike,
double r,
double d,
double Vol,
double Expiry);
#endif // BLACKSCHOLESFORMULAS_H_INCLUDED
