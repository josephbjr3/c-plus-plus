//
//  main.cpp
//  Mode Problem
//
//  Created by Joseph Brinkley Jr on 3/24/17.
//  Copyright © 2017 Joseph Brinkley. All rights reserved.
//

#include<iostream>

using namespace std;

int main(){
    //creates a histogram with x-axis value 1-10
    int histogram_Xaxis = 10;
    int histogram[histogram_Xaxis];
    
    //creates survey data input ranging from 1-10
    int number_Of_Surveys = 20;
    int survey_Data[] = {2,3,7,4,8,1,6,9,3,2,5,7,1,8,9,2,5,8,8,5};
    
    //creates variable that keeps track of most frequent number in the histogram, which is the mode of the survey data
    int most_Frequent = 0;
    
    //sets all the frequencies in the histogram equal to 0
    for(int i = 0; i < histogram_Xaxis; i++){
        histogram[i] = 0;
    }
    
    //creates the actual histogram for the survey data, we use -1 b/c histrogram[0] is actually 1 on the x-axis, also it tracks the frequency of each number by incrementing the frequency count of particular number in the survey data
    for(int i = 0; i < number_Of_Surveys; i++){
        histogram[survey_Data[i] - 1]++;
    }
    
    //finds the most frequent number in the histogram
    for(int i = 1; i < histogram_Xaxis; i++){
        if(histogram[i] > histogram[most_Frequent]){
            most_Frequent = i;
        }
    }
    
    //corrects it to the actual x-axis value
    most_Frequent++;
    
    //prints out the mode of the survey data
    cout<< "The mode is " << most_Frequent << ". \n";
    
    return 0;
}
