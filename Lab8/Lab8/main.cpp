//Program Name:         main.cpp
//Course:               CSE1301(C++)
//Student Name:         Joseph Brinkley Jr
//Assignment Number:    Lab 8
//Due Date:             04/1/2015

/*Purpose: It reads in temperature from the temps.txt file and puts them in a array. Then, it calculates the average of the temperatures by adding up all of the tempuratures in the array, using a for loop, and dividing by the number of temperatures, using a counter that is incremented each iteration. Then,it prints out the hour, temperature, and the difference between the temperature from the average with tabs between them. Then, a for loop prints out the actual hour, temperature, and the diffrence from the average with tabs between the three values, and new for every three values.Then, the lowest temperature is found by using a for loop to see if the current temperature is lower than the temperature stored in low, and return the lowest temperature. Then, the highest temperature is found by doing the same thing as the lowest temperature function, except it sees if the cureent temperature is greater than the temperature stored in high. Finally, the array put in descending order by selection sorting and print out in a single line by a for loop.   */

#include<iostream>
#include<fstream>

using namespace std;

void readData(int[], int);
void avg(int[], int);
void tableFormat(int[], int);
int lowest(int[], int);
int highest(int[], int);
void descendSort(int[], int);

double average;

int main()
{
    int temps[24];
    readData(temps, 24);
    avg(temps, 24);
    tableFormat(temps, 24);
    cout << lowest(temps, 24) << " is the lowest" << endl;
    cout << highest(temps, 24) << " is the highest" << endl;
    descendSort(temps, 24);
    
    cout << endl << "Code by Joseph Brinkley Jr" << endl;
    return 0;
}
void readData(int x[], int size){
    ifstream fin("temps.txt");
    for(int i = 0; i < size; i++)
        fin >> x[i];
    fin.close();
}
void avg(int x[], int size){
    int total = 0;
    int count = 0;
    for(int i = 0; i < size; i++) {
        count++;
        total += x[i];
    }
    average = (double)total/ count;
    cout << "Avg. = " << average << endl;
}
void tableFormat(int x[], int size){
    cout << "Hour" << "\t" << "Temperature" << "\t" << "Difference from the Average" << endl;
    for(int j = 0; j < size; ++j)
        cout << j << "\t" << x[j] << "\t" << x[j] - average << endl;
}
int lowest(int x[], int size){
    int low = x[0];
    for(int i = 0; i < size; ++i){
        if(x[i] < low)
            low = x[i];
    }
    return low;
}

int highest(int x[], int size){
    int high= x[0];
    for(int i = 0; i < size; ++i){
        if(x[i] > high)
            high = x[i];
    }
    return high;
}
void descendSort(int x[], int n){
    int m;
    double hold;
    for (int i=0; i<=n-2; ++i) {
        m = i;
        for (int j=i+1; j<=n-1; ++j){
            if (x[j] > x[m])
                m = j;
        }
        hold = x[m];
        x[m] = x[i];
        x[i] = hold;
    }

    for(int k = 0; k < n ; ++k)
        cout << x[k] << " ";
    
}