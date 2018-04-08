#include "ReplaceUnits.hpp"

double inch(double km )
{
    double cal=km*39370.50787;

    return cal;
}

double foot(double km )
{
    double ft=km*39370.50787;

    return ft;
}

double yard(double km )
{
    double yd=km*1093.6132983377;

    return yd;
}

double landMile(double km )
{
    double mi=km*0.6213711922;

    return mi;
}

double nauticalMile(double km )
{
    double nmi=km*0.5399568035;

    return nmi;
}
