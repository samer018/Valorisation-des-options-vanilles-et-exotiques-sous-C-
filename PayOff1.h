#ifndef PAYOFF1_H_INCLUDED
#define PAYOFF1_H_INCLUDED

class PayOff
{
public:
PayOff(){};

virtual double operator()(double Spot) const=0;
virtual ~PayOff(){}
virtual PayOff* clone() const=0;
private:
};
class PayOffCall : public PayOff
{
public:
PayOffCall(double Strike_);
virtual double operator()(double Spot) const;
virtual ~PayOffCall(){}
virtual PayOff* clone() const;
private:
double Strike;
};
class PayOffPut : public PayOff
{
public:
PayOffPut(double Strike_);
virtual double operator()(double Spot) const;
virtual ~PayOffPut(){}
virtual PayOff* clone() const;
private:
double Strike;
};

class PayOffDoubleDigital : public PayOff
{
public:
PayOffDoubleDigital(double LowerLevel_,
double UpperLevel_);
virtual double operator()(double Spot) const;
virtual ~PayOffDoubleDigital(){};
virtual PayOff* clone() const;
private:
double LowerLevel;
double UpperLevel;
};




#endif // PAYOFF1_H_INCLUDED
