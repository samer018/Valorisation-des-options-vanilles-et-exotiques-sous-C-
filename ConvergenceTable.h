#ifndef CONVERGENCETABLE_H_INCLUDED
#define CONVERGENCETABLE_H_INCLUDED
#include "MCStatistics.h"
#include "wrapper.h"

class ConvergenceTable : public StatisticsMC
{
public:
ConvergenceTable(const Wrapper<StatisticsMC>& Inner_);
virtual StatisticsMC* clone() const;
virtual void DumpOneResult(double result);
virtual std::vector<std::vector<double> >GetResultsSoFar() const;

private:
Wrapper<StatisticsMC> Inner;
std::vector<std::vector<double> > ResultsSoFar;
unsigned long StoppingPoint;
unsigned long PathsDone;
};


#endif // CONVERGENCETABLE_H_INCLUDED
