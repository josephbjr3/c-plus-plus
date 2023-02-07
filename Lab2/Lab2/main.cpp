//Program Name: main.cpp
//Course: CSE1301(C++)
//Student Name: Joseph Brinkley Jr
//Assignment Number: Lab 2
//Due Date: 01/28/2015
/*Purpose: It reads in the principal, annual rate or interest, number of time the interest is compounded per year, and the number of years the amount is borrowed. Then it calculates the  amount of money paid back after n years, including interest. Then, it prints out the input, and the amount of money paid back after n years, including interest. Finally it prints out the same thing with fixed formattting, fixed formatting with two deimcals, and scietntific notation with four decimal places.*/

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
    
    double p, n, t;
    double r, a;
    cout << "Type the principle amount:\n";
    cin >> p;
    cout << "Type the annual rate of interest:\n";
    cin >> r;
    cout << "Type the number of times the interest is compounded per year:\n";
    cin >> n;
    cout << "Type number of years the amount is borrowed for:\n";
    cin >> t;
    
    a = p * pow(1.0 + (r/n), n * t);
    
    cout << "No Formatting:" << endl;
    cout << "==============" << endl;
    cout << "P = " << p << endl;
    cout << "r = " << r << endl;
    cout << "n = " << n << endl;
    cout << "t = " << t << endl;
    cout << "A = " << a << endl;
    
    cout << endl << endl;
    
    cout << "Fixed Formatting: " << endl;
    cout << "================" << endl;
    cout << fixed;
    cout << "P = " << p << endl;
    cout << "r = " << r << endl;
    cout << "n = " << n << endl;
    cout << "t = " << t << endl;
    cout << "A = " << a << endl;
    
    cout << endl << endl;
    
    cout << "Fixed Formatting with two decimal places: " << endl;
    cout << "========================================" << endl;
    cout << fixed;
    cout << setprecision(2);
    cout << "P = " << p << endl;
    cout << "r = " << r << endl;
    cout << "n = " << n << endl;
    cout << "t = " << t << endl;
    cout << "A = " << a << endl;
    
    cout << endl << endl;
    
    cout << "Scientific Notation with four decimal places: " << endl;
    cout << "=============================================" << endl;
    cout << scientific;
    cout << setprecision(4);
    cout << "P = " << p << endl;
    cout << "r = " << r << endl;
    cout << "n = " << n << endl;
    cout << "t = " << t << endl;
    cout << "A = " << a << endl;
    
    cout << "Code by Joseph Brinkley Jr" << endl;
    return 0;
}
