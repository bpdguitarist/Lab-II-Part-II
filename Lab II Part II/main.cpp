//
//  main.cpp
//  Lab II Part II
//
//  Created by Edgar Esparza on 6/9/15.
//  Copyright (c) 2015 Edgar Esparza. All rights reserved.
//

#include <iostream>
using namespace std;

int main( ){
    int speed;
    cout << "Enter the wind speed of the Tropical Storm in MPH "<<endl;
    cout<< "Wind speed in MPH: ";
    cin >>speed;
    if (speed<(74)) cout <<"Not a hurricane" << endl;
    else if ((speed>=(74))&&(speed<=(95)))              cout << "It's a category 1 Hurricane." << endl;
    else if ((speed>=(96))&&(speed<=(110)))             cout << "It's a category 2 Hurricane." << endl;
    else if ((speed>=(111))&&(speed<=(130)))            cout << "It's a category 3 Hurricane." << endl;
    else if ((speed>=(131))&&(speed<(155)))             cout << "It's a category 4 Hurricane." << endl;
        else
cout << "It's a category 5 Hurricane."     << endl;
}