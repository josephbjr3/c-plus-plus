//Program Name:         main.cpp
//Course:               CSE1301(C++)
//Student Name:         Joseph Brinkley Jr
//Assignment Number:    Lab 3
//Due Date:             01/28/2015
/*Purpose: It reads in the choice of the player. Then it generates a random number from 0 to 2 and assigns the value to either rock, paper, or scisscors, depending on the value, which is then assigned to the choice of the computer. Then, it prints out the choice of the computer. Then, it compares the computer's choice to the player's choice. Finally, it prints out whether the player won, lost, or tied.*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));
    
    char myChoice;
    cout << "Choose either R, P, or S\n";
    cin >> myChoice;
    
    char compPlay;
    int computer = (rand() % 3);
    
    if(computer == 0)
        compPlay = 'R';
    else if (computer == 1)
        compPlay = 'P';
    else
        compPlay = 'S';
    cout << "The cpu chooses " << compPlay << endl;
    
    if(myChoice == compPlay)
        cout << "Tie\n";
    else if(myChoice == 'R')
        if(compPlay == 'P')
            cout << "Computer wins. Paper covers rock.\n";
        else
            cout << "You win! Rock crushes scissors!\n";
    else if(myChoice == 'S')
        if(compPlay == 'R')
            cout << "Computer wins. Rock crushes scissors.\n";
        else
            cout << "You win! Scissors cut paper!\n";
    else
        if(compPlay == 'R')
            cout << "You win! Paper covers rock!\n";
        else
            cout << "Computer wins.Scissors cut paper.\n";
    
    cout << "Code by Joseph Brinkley Jr" << endl;
    return 0;
    
}