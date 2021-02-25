/*
requires
PayOff1.cpp
Random1.cpp,
SimpleMC.cpp,
*/
#include "SimpleMC.h"
#include<iostream>
#include <algorithm>
#include "MCStatistics.h"
#include "Wrapper.h"
#include "ConvergenceTable.h"
#include "ParkMiller.h"
#include "SimpleMC.h"
#include<Vanilla1.h>
#include<AntiThetic.h>
using namespace std;
int main()
{
double Expiry;
double Strike;
double Spot;
double Vol;
double r;
unsigned long NumberOfPaths;
cout << "\nEnter expiry\n";
cin >> Expiry;
cout << "\nStrike\n";
cin >> Strike;
cout << "\nEnter spot\n";
cin >> Spot;
cout << "\nEnter vol\n";
cin >> Vol;
cout << "\nr\n";
cin >> r;
cout << "\nNumber of paths\n";
cin >> NumberOfPaths;
PayOffCall thePayOff(Strike);
VanillaOption theOption(thePayOff, Expiry);
ParametersConstant VolParam(Vol);
ParametersConstant rParam(r);
StatisticsMean gatherer;
ConvergenceTable gathererTwo(gatherer);
RandomParkMiller generator(1);
AntiThetic GenTwo(generator);
SimpleMonteCarlo6(theOption,
Spot,
VolParam,
rParam,
NumberOfPaths,
gathererTwo,
GenTwo);
vector<vector<double> > results =
gathererTwo.GetResultsSoFar();
cout <<"\nFor the call price the results are \n";
for (unsigned long i=0; i < results.size(); i++)
{
for (unsigned long j=0; j < results[i].size(); j++)
cout << results[i][j] << " ";
cout << "\n";
}
double tmp;
cin >> tmp;
return 0;
}
