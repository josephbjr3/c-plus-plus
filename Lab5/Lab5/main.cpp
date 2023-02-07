//Program Name:         main.cpp
//Course:               CSE1301(C++)
//Student Name:         Joseph Brinkley Jr
//Assignment Number:    Lab 5
//Due Date:             02/25/2015

/*Purpose: It reads in a text file. Then it arranges the integers from least to greatest. Then, it creates a new text file with the arranged integers. Finally, it prints out the arranged integers. the */

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int x, y, z;
    
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    fin >> x >> y >> z;
    
    while(x != -1)
    {
        if(x < y && y < z)
            fout << x << " " << y << " " << z << endl;
        else if(y < x && x < z)
            fout << y << " " << x << " " << z << endl;
        else if(x < z && z < y)
            fout << x << " " << z << " " << y << endl;
        else if(y < z && z < x)
            fout << y << " " << z << " " << x << endl;
        else if(z < y && y < x)
            fout << z << " " << y << " " << x << endl;
        else
            fout << z << " " << x << " " << y << endl;
        fin >> x >> y >> z;
    }
    
    
    fin.close();
    fout.close();
    
    ifstream finout("output.txt");
    
    finout >> x >> y >> z;
    while(!finout.eof())
    {
        cout << x << " " << y << " " << z << endl;
        finout >> x >> y >> z;
    }
    finout.close();
    
    cout << "Code by Joseph Brinkley Jr" << endl;
    return 0;
}