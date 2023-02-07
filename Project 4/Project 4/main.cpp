//Program Name:         main.cpp
//Course:               CSE1301(C++)
//Student Name:         Joseph Brinkley Jr
//Assignment Number:    Project 4
//Due Date:             04/22/2015
/*Purpose: First, it determines how many people can get on an elevator with a 1100 weight limit. Then, it determines how many can get on the elevator by arranging the weights in descending order. Then, it determines how many can get on the elevator by arranging the names in ascending order. Finally it determines which method allows the most people to get on the elevator.  */

#include <iostream>

using namespace std;

void print(string [], int [], int);
int howMany(int []);
void sortDsc(string [], int [], int);
void sortAlpha(int [], int size, string []);


int main() {
    string names[12] = {"Anne", "Bob", "Ralph", "Tim", "Barbara", "Jane", "Steve", "Tom", "Mike", "Shirley", "Pam", "Frank"};
    int wts[12] = {30, 150, 305, 225, 135, 160, 80, 200, 165, 90, 100, 120};
    
    print(names, wts, 12);
    
    int a = howMany(wts);
    print(names, wts, a);
    
    sortDsc(names, wts, 12);
    print(names, wts, 12);
    int b = howMany(wts);
    print(names, wts, b);
    
    sortAlpha(wts, 12, names);
    print(names, wts, 12);
    int c = howMany(wts);
    print(names, wts, c);
    
    if( a > b && a > c)
        cout << "The first method allowed the most people to get on the elevator" << endl;
    if( b > a && b > c)
        cout << "The second method allowed the most people to get on the elevator" << endl;
    if(c > a && c > b)
        cout << "The third method allowed the most people to get on the elevator" << endl;
    if(a == b && a > c)
        cout << "The first and second method allowed the most people to get on the elevator" << endl;
    if(a == c && a > b)
        cout << "The first and third method allowed the most people to get on the elevator" << endl;
    if(b == c && b > a)
       cout << "The second and third method allowed the most people to get on the elevator" << endl;
    if(a == b && a == c)
        cout << "All of the methods allowed the most people to get on the elevator" << endl;
       

    
    cout << endl << "Code by Joseph Brinkley Jr" << endl;
    return 0;
}

void print(string n[], int w[], int size) {
    cout << "Name\tWeight" << endl;
    for(int i = 0; i < size; ++i)
        cout << n[i]<< "\t" << w[i] << endl;
    cout << endl;
}
int howMany(int w[]){
    int sum = 0;
    int i = 0;
    while(sum <= 1100){
        sum += w[i];
        i++;
    }
    sum -= w[--i];
    cout << "Total weight: " << sum << endl;
    cout << i << " People got on the elevator." << endl;
    return i;
}

void sortDsc(string n[], int w[],  int size) {
    cout << "(Descending weight Order)" << endl;
    int hold;
    string holds;
    for(int i = 0; i < size - 1; i++)
        for(int j = i + 1; j < size; j++)
            if(w[i] < w[j]){
                hold = w[i];
                w[i] = w[j];
                w[j] = hold;
                holds = n[i];
                n[i] = n[j];
                n[j] = holds;
            }
}


void sortAlpha(int w[], int size, string n[]){
    cout << "(Ascending Name Order)" << endl;
    for(int i =0; i < size; i++){
        int key = w[i];
        string keys = n[i];
        int position = i;
        while(position > 0 && n[position - 1] > keys){
            w[position] = w[position - 1];
            n[position] = n[position - 1];
            position--;
        }
        w[position] = key;
        n[position] = keys;
    }
}

