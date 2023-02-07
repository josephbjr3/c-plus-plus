//Program Name:         main.cpp
//Course:               CSE1301(C++)
//Student Name:         Joseph Brinkley Jr
//Assignment Number:    Project 3
//Due Date:             03/29/2015

/*Purpose: It reads in the arrival and departure time of parking. Then, it calculates the time passed by finding the difference between the hours and minutes of arrival and departure. Then, it calculates the cost of parking by comapring difference between the hours and minutes of arrival and departure to the times according to rate table.Finally, if they don't have a parking pass, it prints out the arrival time, departure time (if they didn't lose their ticket), the time passed ((if they didn't lose their ticket), and the cost of parking.  */

#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;

void times();
void receipt();
void timePass(int, int, int, int);
void payment(int, int, int, int);

int hourIn, hourOut, minuteIn, minuteOut, hour, minute;
double cost;

int main(){
    times();
    receipt();
    
    cout << endl << "Code by Joseph Brinkley Jr" << endl;
    return 0;
}

void times() {
    cout << "What is the hour and minute of your arrival?" << endl;
    cout << "(If you have a special parking pass, input 99 99.)" << endl;
    cin >> hourIn >> minuteIn;
    cout << "What is the hour and minute of your departure?" << endl;
    cout << "(If you have a special parking pass, input 99 99.)" << endl;
    cout << "(If you lost your ticket, input 55 55.)" << endl;
    cin >> hourOut >> minuteOut;
}

void receipt(){
    timePass(hourIn, minuteIn, hourOut, minuteOut);
    payment(hourIn, minuteIn, hourOut, minuteOut);
    
}

void timePass(int hourIn, int minuteIn, int hourOut, int minuteOut){
    if((hourOut != 55 && minuteOut != 55) && (hourIn != 99 && minuteIn != 99)){
        cout << "Arrival Time - " << hourIn << ":" << minuteIn << endl;
        cout << "Departure Time - " << hourOut << ":" << minuteOut<< endl;
        hour = abs(hourOut - hourIn);
        minute = abs(minuteOut - minuteIn);
        cout << "Time passed: " << hour << " hours and  " << minute << " minutes" <<endl;
    }
}

void payment(int hourIn, int minuteIn, int hourOut, int minuteOut){
    if(hourIn == 99 && minuteIn == 99){
        cost = 5.00;
        cout << "You have a special parking pass!" << endl;
    }
    else if(hourOut == 55 && minuteOut == 55){
        cost = 110.00;
        cout << "Arrival Time - " << hourIn << ":" << minuteIn << endl;
        cout << "You lost your ticket." << endl;
        cout << "Time passed: n/a" << endl;
    }
    else{
        if(hour == 0 && minute < 30)
            cost = 3.00;
        else if(hour == 0 && minute <= 59)
            cost = 5.00;
        else if(hour == 1  && minute <= 59)
            cost = 10.00;
        else if(hour == 2  && minute <= 59)
            cost = 15.00;
        else if(hour == 3  && minute <= 59)
            cost = 30.00;
        else if(hour  == 4  && minute == 00)
            cost = 30.00;
        else if(hour  >=  4 && hour  < 12 && minute  <= 59)
            cost = 30.00 + (10.00 * (hour - 4) ) + 5.00 * (abs(minute / 31 +1));
        else{
            cout << "Error" << endl;
            exit(1);
        }
    }
    cout << fixed;
    cout << setprecision(2);
    cout << "Amount Due: $" << cost << endl;
}


//used xcode becuase I have Mac





