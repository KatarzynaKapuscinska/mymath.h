#include "capitalization.hpp"
#include <cmath>

double Capitalization(int deposit, int interest, double time)
{
    double c, a, b, capital;
    c=interest/100;
    a=1+c;
    capital=deposit*pow(a,time);
    b=capital-deposit;

    return b;
}

