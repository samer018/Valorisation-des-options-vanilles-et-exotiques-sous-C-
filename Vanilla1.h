#ifndef VANILLA1_H_INCLUDED
#define VANILLA1_H_INCLUDED
#include "PayOffBridge.h"
class VanillaOption
{
public:
VanillaOption(const PayOffBridge&
ThePayOff_,double Expiry);
double OptionPayOff(double Spot) const;
double GetExpiry() const;
private:
double Expiry;
PayOffBridge ThePayOff;
};
#endif // VANILLA1_H_INCLUDED
