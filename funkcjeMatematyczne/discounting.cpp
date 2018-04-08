#include "discounting.hpp"
#include <cmath>

double Discounting(double profit, double interest, double time)
{
    double a, b, deposit;
    b=interest/100+1;
    a=pow(b,time)-1;
    deposit=profit/a;

    return deposit;
}

