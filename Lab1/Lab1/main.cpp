//Program Name: main.cpp
//Course: CSE1301(C++)
//Student Name: Joseph Brinkley Jr
//Assignment Number: Lab 1
//Due Date: 01/14/2015
/*Purpose: It reads in sides and height of the trapezoid. Then, it calculates the perimeter and area of the trapezoid. Finally, it prints out sides, height, area, and perimeter.*/

#include<iostream>

using namespace std;


int main()
{
    double topS, rightS, bottomS, leftS, h, area, perimeter;
    cout << "Type in the length of the top side. " << endl;
    cin >> topS;
    cout << "Type in the length of the right side. " << endl;
    cin >> rightS;
    cout << "Type in the length of the bottom side. " << endl;
    cin >> bottomS;
    cout << "Type in the length of the left side. " << endl;
    cin >> leftS;
    cout << "Type in the height of the trapezoid. " << endl;
    cin >> h;
    area = h/2 *(topS+ bottomS);
    perimeter = topS + rightS + bottomS + leftS;
    cout << "The top side is: " << topS << endl;
    cout << "The right side is: " << rightS << endl;
    cout << "The bottom side is: " << bottomS << endl;
    cout << "The left side is: " << leftS << endl;
    cout << "The height is: " << h << endl;
    cout << "The area is: " << area << endl;
    cout << "The perimeter is: " << perimeter << endl;
    
    cout << "Code by Joseph Brinkley Jr" << endl;
    return 0;
}