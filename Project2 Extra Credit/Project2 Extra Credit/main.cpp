//Program Name:         main.cpp
//Course:               CSE1301(C++)
//Student Name:         Joseph Brinkley Jr
//Assignment Number:    Project 2 Extra Credit
//Due Date:             02/25/2015

/*Purpose: It prompts and reads in the principle amount and the rate. Then it adds the principle to the to the principle times the rate, which is then the new principle amount. Then it adds a year. It keeps doing this until the principle amount reaches one million. Finally, it prints out the number of years it took for the principle amoun to reach one million.  Then*/


#include <iostream>

using namespace std;

int main() {
    double prin, rate;
    
    cout << "What is the principle amount?\n";
    cin >> prin ;
    cout << "What is the rate?\n";
    cin >> rate;
    
    int year = 0;
    while (prin  <= 1000000.00)
    {
        prin += prin * rate;
        year++;
    }
    cout << "It took " << year << " years to reach one million dollars!" << endl;
    
    cout << "Code by Joseph Brinkley Jr" << endl;
    return 0;
}
//Using Xcode because I have a Mac
