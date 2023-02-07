//
//  main.cpp
//  HW3
//
//  Created by Joseph Brinkley Jr on 4/22/15.
//  Copyright (c) 2015 Joseph Brinkley Jr. All rights reserved.
//

#include <iostream>
#include<ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    double rolls;
    double count = 0;
    cout << "Type the number of rolls:\n";
    cin >> rolls;
    srand(time(0));
    for(int i = 0; i < rolls; i++){
        int pick = rand() % 6 + 1;
        pick += rand() % 6 + 1;
        cout << pick << " ";
        if(pick == 8)
            count++;
    }
    double percent = count/rolls * 100;
    cout << endl<< "It landed on eight " << percent << "% of the time.\n";
    
}
