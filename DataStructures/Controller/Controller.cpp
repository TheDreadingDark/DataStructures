//
//  Controller.cpp
//  DataStructures
//
//  Created by Woolsey, Adam on 1/31/18.
//  Copyright © 2018 Woolsey, Adam. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
//    Timer codeTimer;
//    codeTimer.startTimer();
//    cout << "Look code on the screen" << endl;
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
//    codeTimer.resetTimer();
//    codeTimer.startTimer();
    
//    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/awoo9855/Documents/Swift Projects/DataStructures/DataStructures/Data/crime.csv");
    
//    for (int index = 200; index < 216; index ++)
//    {
//        cout << index << " is " << myData[index] << endl;
//    }
    
    findMaxAndMin();
    
    testArray();
}
    
void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/awoo9855/Documents/Swift Projects/DataStructures/DataStructures/Data/crime.csv");
        
    int minIndex = 0;
    int maxIndex = 0;
        
    for (int index = 1; index < myData.size(); index++)
    {
        if (myData [minIndex] < myData[index])
        {
            minIndex = index;
        }
            
        if (myData [maxIndex] < myData[index])
        {
            maxIndex = index;
        }
    }
    
    searchTimer.stopTimer();
    cout << "The smallest Crime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
    cout << "The largest Crime stat is at " << maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation();
}

void Controller :: testArray()
{
    Array<int> ajArray(45);
    
    ajArray[0] = 123;
    ajArray.setAtIndex(0, 321);
    
    cout << ajArray[0] << endl;
}
