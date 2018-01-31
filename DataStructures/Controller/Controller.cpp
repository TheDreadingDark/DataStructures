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
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "Look code on the screen" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    codeTimer.resetTimer();
    codeTimer.startTimer();
    
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/awoo9855/Documents/Swift Projects/DataStructures/DataStructures/Data/crime.csv");
    
    for (int index = 200; index < 216; index ++)
    {
        cout << index << " is " << myData[index] << endl;
    }
    
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}
