//Program Name:         main.cpp
//Course:               CSE1301(C++)
//Student Name:         Joseph Brinkley Jr
//Assignment Number:    Lab 11
//Due Date:             04/22/2015

/*Purpose: It reads in a file of arrays. Then it finds the sum of each row, column, the main diagonal, and the reverse diagonal.If all of those sums are equal, it is a magic box. If not, it is not a magic box. */

#include<iostream>
#include<fstream>
#include<ctime>

using namespace std;


int size;
int box[10][10];

void readData(ifstream &fin);
void printArray();
int sumRow(int);
int sumCol(int col);
int mainDiagonal();
int revDiagonal();
bool isMagic();


int main(){
    ofstream fout("input.txt");
    fout << "3" << endl;
    fout << "8 1 6" << endl;
    fout << "3 5 7" << endl;
    fout << "4 9 2" << endl;
    fout << "7" << endl;
    fout << "30 39 48 1 10 19 28" << endl;
    fout << "38 47 7 9 18 27 29" << endl;
    fout << "46 6 8 17 26 35 37" << endl;
    fout << "5 14 16 25 34 36 45" << endl;
    fout << "13 15 24 33 42 44 4" << endl;
    fout << "21 23 32 41 43 3 12" << endl;
    fout << "22 31 40 49  2 11 20" << endl;
    fout << "4" << endl;
    fout << "48 9 6 39" << endl;
    fout << "27 18 21 36" << endl;
    fout << "15 30 33 24" << endl;
    fout << "12 45 42 3" << endl;
    fout << "3" << endl;
    fout << "6 2 7" << endl;
    fout << "1 5 3" << endl;
    fout << "2 9 4" << endl;
    fout << "4" << endl;
    fout << "3 16 2 13" << endl;
    fout << "6 9 7 12" << endl;
    fout << "10 5 11 8" << endl;
    fout << "15 4 14 1" << endl;
    fout << "5" << endl;
    fout << "17 24 15 8 1" << endl;
    fout << "23 5 16 14 7" << endl;
    fout << "4 6 22 13 20" << endl;
    fout << "10 12 3 21 19" << endl;
    fout << "11 18 9 2 25" << endl;
    fout << "7" << endl;
    fout << "30 39 48 1 10 28 19" << endl;
    fout << "38 47 7 9 18 29 27" << endl;
    fout << "46 6 8 17 26 37 35" << endl;
    fout << "5 14 16 25 34 45 36" << endl;
    fout << "13 15 24 33 42 4 44" << endl;
    fout << "21 23 32 41 43 12 3" << endl;
    fout << "22 31 40 49 2 20 11" << endl;
    fout << "-1" << endl;
    
    
    
    ifstream fin("input.txt");
    fin >> size;
    while(size != -1){
        readData(fin);
        printArray();
        for(int i = 0; i < size; ++i){
            cout << "The sum of row " << i << " is " << sumRow(i) << endl;
        }
        for(int i = 0; i < size; ++i){
            cout << "The sum of column " << i << " is " << sumCol(i) << endl;
            
        }
        cout << "The sum of the main diagonal is " << mainDiagonal() << endl;
        cout << "The sum of the reverse diagonal is " << revDiagonal() << endl;
        if(isMagic())
            cout << "Magic" << endl;
        else
            cout << "Not Magic" <<endl;
        fin >> size;
    }
    cout << "code by Joseph Brinkley Jr" << endl;
    return 0;
}
void readData(ifstream &fin){
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            fin >> box[i][j];
        }
    }
}
void printArray(){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; ++j)
            cout << box[i][j] << "\t";
        cout << endl;
    }
}
int sumRow(int row){
    int total = 0;
    for(int col = 0; col < size; ++col)
        total += box[row][col];
    return total;
}
int sumCol(int col){
    int total = 0;
    for(int row = 0; row < size; ++row)
        total += box[row][col];
    return total;
}
int mainDiagonal(){
    int total = 0;
    for(int row = 0; row < size; ++row){
        total += box[row][row];
    }
    return total;
}
int revDiagonal(){//not sure if this works
    int total = 0;
    int col = size -1;
    for(int row = 0; row < size; ++row)
        total += box[row][col];
    col--;

    return total;
    
}
bool  isMagic(){
    int save = mainDiagonal();
    for(int i = 0; i < size; ++i){
        if(save != sumRow(i))
            return false;
        if(save != sumCol(i))
            return false;
        if(save != revDiagonal())
           return false;
    }
    return true;
}


