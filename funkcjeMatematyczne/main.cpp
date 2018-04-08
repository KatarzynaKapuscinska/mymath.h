#include <iostream>
#include <conio.h>
#include "FibonacciSequence.hpp"
#include "Currency.hpp"
#include "ReplaceUnits.hpp"
#include "capitalization.hpp"
#include "discounting.hpp"

using namespace std;
int main()
{
    cout << "What would you like to do?" << endl << "1. Find term of a Fibonacci sequence." << endl << "2. Exchange the currency." << endl << "3. Replace units of measurement." << endl;
    cout << "4. Finding out how much you will gain from bank deposit." << endl << "5. Calculating how much you have to invest." << endl;
    int g;
    cin >> g;


    if (g==1){
        cout << "Which term of a sequence from Fibonacci sequence do you want to see?" << endl;
        long long m;
        cin >> m;
        cout << m << " term of a sequence is: " << Fibonacci(m) << endl;
    }


    if (g==2){
        double c1, c2, money;
        cout << "Which currency you want to exchange?" << endl << "1. PLN" << endl << "2. EUR" << endl << "3. USD" << endl << "4. GBP" << endl;
        cin >> c1;
        cout << "Which currency you want to receive?" << endl << "1. PLN" << endl << "2. EUR" << endl << "3. USD" << endl << "4. GBP" << endl;
        cin >> c2;
        cout << "How much money do you want to exchange?" << endl;
        cin >> money;

        cout << Exchange(c1, c2, money) << endl;
    }


    if (g==3){
        cout << "Length in kilometers: " << endl;
        double km;
        cin >> km;

        cout << endl << "Length in inch: " << inch(km) << "''" << endl;
        cout << "Length in foot: " << foot(km) << "ft" << endl;
        cout << "Length in yard: " << yard(km) << "yd" << endl;
        cout << "Length in land mile: " << landMile(km) << "mi" << endl;
        cout << "Length in nautical mile: " << nauticalMile(km) << "nmi" << endl;
    }


    if (g==4){
        cout << "How much money do you want to deposit in the bank?" << endl ;
        int deposit;
        cin >> deposit;
        cout << "What is your interest rate? " << endl;
        int interest;
        cin >> interest;
        cout << "For how long do you want to deposit money? " << endl;
        double time;
        cin >> time;

        cout << "After " << time << " years you will gain " << Capitalization(deposit, interest, time) << "." << endl;
    }


    if (g==5){
        cout << "How much money would you like to gain?" << endl;
        double profit;
        cin >> profit;
        cout << "What is the annual percentage of profit ?" << endl;
        double interest;
        cin >> interest;
        cout << "What is the investment time?" << endl;
        double time;
        cin >> time;

        cout << "You have to invest " << Discounting(profit, interest, time) << "." << endl;

    }
    return( 0 );
}
