//Program Name:         main.cpp
//Course:               CSE1301(C++)
//Student Name:         Joseph Brinkley Jr
//Assignment Number:    Project 2
//Due Date:             02/25/2015

/*Purpose: It generates a random number between 1-100. Then, it reads in the guess of the user and compares it to a randomly genereated number. If the user guesses the randomly generated number correctly, they win. Then, it prints out the number of guesses, and asks if they want to play again. If they type 'Y', the program runs again. iIf they type 'N', it prints out the number of guesses and quits. If the user types -1, it prints out the number of guesses and quits. Otherwise, they are told whether their guess is too high, too low, or out of range and told to guess again.*/

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
    int count;
    int guess;
    char answer;
    
    do {
        srand(time(0));
        count = 0;
        int computer = rand() % 100 + 1;
        
        do {
            cout << "Guess the number: \n";
            cin >> guess;
            count++;
            if (guess == -1){
                break;
            }
            else if (guess > 100 || guess < 1)
                cout<< "out of range - guess between 1-100 \n";
            else if (guess > computer)
                cout << "too high - try again \n";
            else if (guess < computer)
                cout << "too low - try again \n";
            else {
                cout << "You guessed it! Congratulations! \n";
                if (count == 1)
                    cout << "It took " << count << " guess. \n";
                else
                    cout << "It took " << count << " guesses. \n";
            }
        }
        while (guess != computer);
        if (guess == -1 && count != 1)
            cout << "You quit after " << count << " guesses. \n";
        else if (guess == -1)
            cout << "You quit after " << count << " guess. \n";
        
        cout << "Do you want to run again? Y = yes, N = no \n";
        cin >> answer;
    }
    while (toupper(answer) == 'Y');
    cout << "Goodbye! \n";
    
    cout << "Code by Joseph Brinkley Jr" << endl;
    return 0;
}
//Using Xcode because I have a Mac
