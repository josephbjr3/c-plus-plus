//Program Name:         main.cpp
//Course:               CSE1301(C++)
//Student Name:         Joseph Brinkley Jr
//Assignment Number:    Lab 10
//Due Date:             04/14/2015

/*Purpose:  It creates a 6x6 array. Then it fills the aray with random integers. Then, it prints the array. Then, it find the highest integer in the array and prints it. Then, it finds th elowest integer in the aray and prints it. Finally, it transposes the array and prints it.  */

#include<iostream>
#include<ctime>

using namespace std;

const int col = 6;
const int row = 6;

void fillArray(int [][col]);
void printArray(int [][col]);
void findHighest(int [][col]);
void findLowest(int [][col]);
void transpose(int [][col]);

int main(){
    int someArray[row][col];
    
    //methods
    fillArray(someArray);
    printArray(someArray);
    findHighest(someArray);
    findLowest(someArray);
    transpose(someArray);
    printArray(someArray);
    
    cout << "code by Joseph Brinkley Jr" << endl;
    return 0;
}

void fillArray(int x[][col]){
    srand(time(0));
    for (int i = 0; i < row; ++i)
        for(int j =0; j < col; ++j)
            x[i][j] = rand() % 100 + 1;
}
          
void printArray(int x[][col]){
    cout << "Columns 1\t2\t3\t4\t5\t6\n"; //prints out "Columns 1 2 3 4 5" as the heading
    for(int i = 0; i < row; ++i){
        cout << "Row " << (i + 1) << "\t";
        for(int j = 0; j < col; ++j)
            cout << x[i][j] << "\t";
        cout << endl; //starts new row
    }

}
          
void findHighest(int x[][col]){
    int high = x[0][0];
    int saveI = 0;
    int saveJ = 0;
    for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j)
            if(x[i][j] > high){
                high = x[i][j];
                saveI = i;
                saveJ = j;
            }
    cout << "The highest is " << high << endl;
    cout<< "Found in position " << saveI << "," << saveJ << endl;
}
void findLowest(int x[][col]){
    int low= x[0][0];
    int saveI = 0;
    int saveJ = 0;
    for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j)
            if(x[i][j] <  low){
                low = x[i][j];
                saveI = i;
                saveJ = j;
                }
    cout << "The lowest is " << low<< endl;
    cout<< "Found in position " << saveI << "," << saveJ << endl;
}
          
void transpose(int x[][col]){
    int hold;
    int startc = 1;
    for (int i = 0; i < row; ++i){
        for (int j = startc; j < col; ++j){
            hold = x[i][j];
            x[i][j] = x[j][i];
            x[j][i] = hold;
        }
        startc++;
    }
}
