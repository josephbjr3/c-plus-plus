//Program Name:         main.cpp
//Course:               CSE1301(C++)
//Student Name:         Joseph Brinkley Jr
//Assignment Number:    Lab 9
//Due Date:             04/7/2015

/*Purpose: It reads the choie of the user. If they type 1, they can set the size. If they type 2, the array is filled with random ints between 1 and 100. If they type 3, the array it printed. If they type 4, the array is sorted in ascending order. If they type 5, the array is sorted in descending order.If they type 6, the program sequentially searches for a number given by the user. If they type 7, the program binarily searches for a number given by the user. If they type 0, the program quits. If they type anything else, an error message is printed.  */

#include<iostream>
#include<ctime>

using namespace std;

int seqSearch(int);
int binSearch(int);
void descendSort();
void ascendSort();
void fillArray();
void printArray();
void dispatch(int);
void printMenu();
void found(int);

int x[100];
int size;

int main()
{
    int choice;
    
    printMenu();
    cin >> choice;
    while (choice < 8)
    {
        dispatch(choice);
        printMenu();
        cin >> choice;
    }
    cout << "Error" << endl;
    
    cout << endl << "Code by Joseph Brinkley Jr" << endl;
    return 0;
}

void printMenu(){
    cout << "Type 1 to set the size of the array\n";
    cout << "Type 2 fill the array with random integers(1-100)\n";
    cout << "Type 3 to print the array\n";
    cout << "Type 4 to sort the array in ascending order\n";
    cout << "Type 5 to sort the array in descending order\n";
    cout << "Type 6 to sequentially search the array for a target\n";
    cout << "Type 7 to binarily search the array for a target\n";
    cout << "Type 0 to exit\n";
}
void dispatch(int choice){
    int target;
    int pos;
    
    switch(choice){
        case 1: cout << "What is the size of the array? It cannot be over 100." << endl;
            cin >> size;
            break;
        case 2: fillArray();
            break;
        case 3: printArray();
            break;
        case 4: ascendSort();
            break;
        case 5: descendSort();
            break;
        case 6: cout << "Type in a target: " << endl;
            cin >> target;
            pos = seqSearch(target);
            found(pos);
            break;
        case 7: cout << "Type in a target: " << endl;
            cin >> target;
            pos = binSearch(target);
            found(pos);
            break;
        case 0: cout << "Goodbye\n";
            exit(0);
    }
}

void fillArray(){
    srand(time(0));
    for(int i = 0; i < size; ++i)
        x[i] = rand()%100 + 1;
}
void printArray(){
    for(int i = 0; i < size; ++i) {
        cout << "position: "<< i << "\t" << "value: " << x[i] << endl;
    }
}

void descendSort(){
    for(int i = 0; i < size - 1; ++i){
        for(int j = 1; j < size; ++j){
            if(x[i] < x[j]){
                int hold = x[i];
                x[i] = x[j];
                x[j] = hold;
            }
        }
    }
}
void ascendSort(){
    int m;
    double hold;
    for (int i=0; i<=size-2; ++i) {
        m = i;
        for (int j=i+1; j<=size-1; ++j){
            if (x[j] < x[m])
                m = j;
        }
        hold = x[m];
        x[m] = x[i];
        x[i] = hold;
    }
}
int seqSearch(int target){
    for(int i = 0; i < size; i++)
        if(x[i] == target)
            return i;
    return -1; // target not found
}
int binSearch(int target){
    int first = 0;
    int middle;
    int last = size - 1;
    while(first <= last){
        middle = (first + last)/ 2;
        if(x[middle] == target){
            return middle;
        }
        else if(x[middle] < target)
            first = middle + 1;
        else
            last = middle - 1;
    }
    return -1; // target not found
}
void found(int pos){
    if(pos == -1)
        cout << "Target not found\n";
    else
        cout << "Found at position "<< pos << endl;
}