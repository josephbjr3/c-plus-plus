//Program Name: main.cpp
//Course: CSE1301(C++)
//Student Name: Joseph Brinkley Jr
//Assignment Number: Project 1
//Due Date: 01/28/2015
/*Purpose: It reads in the length of the yard, width of the yard, length of house, and width of the house. Then it calculates the area of the house, area of the yard, area to cut, and the time it takes to cut. Finally, it prints out the length and width of the yard, length and width of the house, the area to be cut in square feet, and the time it takes to cut it in minutes.*/

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;


int main() {
    
    double ly, wy, lh, wh, areaOfHouse, areaOfYard, areaToCut, timeToCut;
    
    cout << "Type in length of yard:\n";
    cin >> ly;
    cout << "Type in width of yard:\n";
    cin >> wy;
    cout << "Type in length of house:\n";
    cin >> lh;
    cout << "Type in width of house: \n";
    cin >> wh;
    
    areaOfHouse = lh * wh;
    areaOfYard = ly * wy;
    areaToCut = areaOfYard - areaOfHouse;
    timeToCut = areaToCut / 120;
    
    cout << "The length of the yard is " << ly << ".\n";
    cout << "The width of the yard is " << wy << ".\n";
    cout << "The length of the house is " << lh << ".\n";
    cout << "The width of the house is " << wh << ".\n";
    cout << "The area to be cut is " << areaToCut << " sq. feet.\n";
    cout << "The time it takes to cut it is " << timeToCut << " minutes.\n";
    
    cout << "Code by Joseph Brinkley Jr" << endl;
    return 0;
}
