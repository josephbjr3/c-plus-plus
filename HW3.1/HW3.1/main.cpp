//
//  main.cpp
//  HW3.1
//
//  Created by Joseph Brinkley Jr on 4/22/15.
//  Copyright (c) 2015 Joseph Brinkley Jr. All rights reserved.
//

#include <iostream>

using namespace std;

int ordered(double [], int);

int main() {
    
    double angles[] = {30, 40 , 60, 50 , 70};
    
    int b = ordered(angles, 5);
    cout << b;
    return 0;
}

int ordered(double x[], int num_pts){
    for (int i=0; i < num_pts - 1;++i) {
        if(x[i] > x[i+1])
            return 0;
    }
    return 1;
}