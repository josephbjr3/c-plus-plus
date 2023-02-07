//Program Name:         main.cpp
//Course:               CSE1301(C++)
//Student Name:         Joseph Brinkley Jr
//Assignment Number:    Lab 6
//Due Date:             03/11/2015

/*Purpose: The program creates a menu, using a switch statement, for the user to either find all the prime number up to their inputted value, do a weighted coin toss, or find out if their inpu tvalue is even or odd. A function is created for each these scenearios and for the menu. */

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void printMenu();
void weightCoin(int);
bool evenOdd(int);
void primeNo(int);

int main(){
    int choice;
    double m;
    int tosses;
    double num;
    
    printMenu();
    cin >> choice;
    while(choice != 0){
        switch(choice){
            case 1: cout << "Type in a final number:" << endl;
                    cin >> m;
                    primeNo(m);
                    break;
            case 2: cout << "How many coin tosses?" << endl;
                    cin >> tosses;
                    weightCoin(tosses);
                    break;
            case 3: cout << "Type in a number:" << endl;
                    cin >> num;
                    if(evenOdd(num))
                        cout << num << " is even" << endl;
                    else
                        cout << num << " is odd" << endl;
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

void printMenu() {
    cout << "Type 1 to for Prime Numbers" << endl;
    cout << "Type 2 to for weighted coin toss" << endl;
    cout << "Type 3 to for even or odd" << endl;
}

void primeNo(int m){
    for(int i = 2; i < m; i++){
        for(int j = 2; j < i; j++) {
            if(i % j == 0)
                break;
            else if(i == j+1)
                cout << i << " ";
        }
        
    }
    cout << endl;
}

void weightCoin(int tosses) {
    double heads = 0;
    double tails = 0;
    srand(time(0));
    for(int i =1; i <= tosses; i++) {
        int ans = rand() % 100 + 1;
        if(ans <= 60)
            heads ++;
        else
            tails++;
    }
    cout << "Number of heads = " << heads << endl;
    cout << "Number of tails = " << tails << endl;
    cout << "Heads = " << heads / tosses * 100 << "%" << endl;
}

bool evenOdd(int m) {
    if(m % 2 == 0)
        return true;
    else
        return false;
}



