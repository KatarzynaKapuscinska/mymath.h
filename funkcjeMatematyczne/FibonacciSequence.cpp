#include "FibonacciSequence.hpp"

double Fibonacci( long long m )
{
    long long a=1, b=1, c=1;
    for(int i=3; i<=m; i++){
        b=b+a;
        a=c;
        c=b;
    }
    return b;
}
