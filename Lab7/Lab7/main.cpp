//Program Name:         main.cpp
//Course:               CSE1301(C++)
//Student Name:         Joseph Brinkley Jr
//Assignment Number:    Lab 7
//Due Date:             03/18/2015

/*Purpose:  It reads whether the user wants to run function 1, function 2, or the cosine function. Then, it reads in the angle in radians from the user. If the users chooses function 1, then it calcutlates the cosine of the angle using the first five terms of the taylor series. If the user chooses function 2, then it calculates the cosine of the angle by using the taylor series while each term is greater than 0.0001. If the user chooses the cosine function, then the cosine of the angle is calculated using the math library of the cosine function.*/

#include <iostream>
#include <cmath>

using namespace std;

double power(double, int);
double fact(double);
void printMenu();
void Taylor1(int);
void Taylor2(int);

int main() {
    int angle;
    int choice;
    printMenu();
    cin >> choice;
    while(choice) {
        switch(choice){
            case 0: break;
            case 1: cout << "Type the angle in radians: \n";
                    cin >> angle;
                    Taylor1(angle);
                    break;
            case 2: cout << "Type the angle in radians: \n";
                    cin >> angle;
                    Taylor2(angle);
                    break;
            case 3: cout << "Type the angle in radians: \n";
                    cin >> angle;
                    cout <<"The cosine of " << angle << " is " << cos(angle) << endl;
                    break;
            default: cout << "Error" << endl;
                    break;
        }
        printMenu();
        cin >> choice;
    }
            
    cout << "Code by Joseph Brinkley Jr" << endl;
    return 0;
}

void printMenu(){
    cout << "Type 1 for function 1 \n";
    cout << "Type 2 for function 2 \n";
    cout << "Type 3 for cosine function \n";
    cout << "Type 0 to exit. \n";
}
    
void Taylor1(int angle){
    double total = 1;
    for(int i = 1; i <= 5; ++i){
        if(i % 2 != 0)
            total -= power(angle, 2 * i) / fact(2 * i);
        else
            total += power(angle, 2 * i) / fact(2 * i);
    }
    cout << "The total is " << total << endl;
}

void Taylor2(int angle){
    double total = 1;
    int count = 1;
    while((power(angle, 2 * count) / fact(2 * count)) > 0.0001){
        if(count % 2 != 0){
            total -= power(angle, 2 * count) / fact(2 * count);
            count++;
        }
        else {
            total += power(angle, 2 * count) / fact(2 * count);
            count++;
        }
    }
    cout << "The total is " << total << endl;
    cout << "The number of terms used is " << count << endl;
}

double power(double x, int m){
    double result = 1;
    for(int i = 1; i <= m; ++i)
        result *= x;
    return result;
}

double fact(double m){
    double result = 1;
    for(int i = 1; i <= m; i++)
        result *= i;
    return result;
}