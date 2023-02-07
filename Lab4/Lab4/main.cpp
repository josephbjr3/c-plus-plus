//Program Name:         main.cpp
//Course:               CSE1301(C++)
//Student Name:         Joseph Brinkley Jr
//Assignment Number:    Lab 4
//Due Date:             02/18/2015
/*Purpose: It reads in the choice of the player. Then it generates a random number from 0 to 2 and assigns the value to either rock, paper, or scisscors, depending on the value, which is then assigned to the choice of the computer. Then, it prints out the choice of the computer. Then, it compares the computer's choice to the player's choice. Finally, it prints out whether the player won, lost, or tied.*/

#include<iostream>

using namespace std;

int main() {
    double total = 0;
    int choice;
    double number;
    char answer;
    do {
        cout << "Type in a number:\n";
        cin >> number;
        
        cout << "Enter 0 to exit\n";
        cout << "Enter 1 to add the number to total\n";
        cout << "Enter 2 to subtract the number from total\n";
        cout << "Enter 3 to multiply total by the number\n";
        cout << "Enter 4 to divide the total by the number\n";
        cin >> choice;
    
        switch(choice)
        {
            case 0: break;
            case 1: total += number; break;
            case 2: total -= number; break;
            case 3: total *= number; break;
            case 4: total /= number; break;
            default: cout << "Error\n";
        }
        
        cout << "The sub total is: " << total << endl;
    
        cout << "Do you want to run again? Y = yes, N = no\n";
        cin >> answer;
    }
    while (answer == 'Y');
    
    cout << "The total is: " << total <<endl;;

    cout << "Code by Joseph Brinkley Jr" << endl;
    return 0;
}
