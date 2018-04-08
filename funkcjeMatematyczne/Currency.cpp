#include "Currency.hpp"

double Exchange(double c1 ,double c2, double money)
{

    if(c1==1){
        if(c2==2){
            return money*0.24;
        }
        else{
            if(c2==3){
                return money*0.29;
            }
            else{
                return money*0.21;
            }
        }
    }
    if(c1==2){
        if(c2==1){
            return money*4.20;
        }
        else{
            if(c2==3){
                return money*1.22;
            }
            else{
                return money*0.87;
            }
        }
    }
    if(c1==3){
        if(c2==1){
            return money*3.43;
        }
        else{
            if(c2==2){
                return money*0.82;
            }
            else{
                return money*0.71;
            }
        }
    }
    if(c1==4){
        if(c2==1){
            return 4.81;
        }
        else{
            if(c2==3){
                return money*1.40;
            }
            else{
                return money*1.14;
            }
        }
    }
}
