//
//  main.cpp
//  Assignment2
//
//  Created by Akshay Joshi on 06/12/19.
//  Copyright © 2019 Akshay Joshi. All rights reserved.
//

#include <iostream>

using namespace std;

double calculateCallIntrinsicValue(double spot, double strike) {
    if (spot > strike){
        return (spot-strike);
    }
    else{
        return 0;
    }
}

double calculatePutIntrinsicValue(double spot, double strike) {
    if (spot > strike){
        return 0;
    }
    else{
        return (strike-spot);
    }
}

int main() {
    
    cout << "\n";
    cout << "Part (i) solution: " << endl;
    
    double spot, strike;
    
    cout << "Please give me spot: ";
    cin >> spot;
    
    cout << "Please give me strike: ";
    cin >> strike;
    
    cout << "Intrinsic value of a call option is: " << calculateCallIntrinsicValue(spot, strike) << endl;
    cout << "Intrinsic value of a put option is: " << calculatePutIntrinsicValue(spot, strike) << endl;

    cout << "\n";
    cout << "Part (ii) solution: " << endl;
    
    strike = 100;
    spot = 85;
    
    while (spot <= 115){
        cout << "Intrinsic value of a call option with spot " << spot << ", strike " << strike << " is: " << calculateCallIntrinsicValue(spot, strike) << endl;
        cout << "Intrinsic value of a put option with spot " << spot << ", strike " << strike << " is: " << calculatePutIntrinsicValue(spot, strike) << endl;
        spot += 1;
    }
    
    cout << "\n";
    cout << "Part (iii) solution: " << endl;
    
    strike = 90;
    spot = 105;
    
    while (strike <= 110){
        cout << "Intrinsic value of a call option with spot " << spot << ", strike " << strike << " is: " << calculateCallIntrinsicValue(spot, strike) << endl;
        cout << "Intrinsic value of a put option with spot " << spot << ", strike " << strike << " is: " << calculatePutIntrinsicValue(spot, strike) << endl;
        strike += 1;
    }
    
    cout << "\n";
    cout << "Part (iv) solution: " << endl;
    
    int a;
    
    cout << "Please give me 0 or 1: ";
    cin >> a;
    
    if (a == 0){
        strike = 100;
        cout << "Please give me spot price for a strike of " << strike << ": ";
        cin >> spot;
        cout << "Intrinsic value of a put option with spot " << spot << ", strike " << strike << " is: " << calculatePutIntrinsicValue(spot, strike) << endl;
    }
    else if (a == 1){
        spot = 63.50;
        cout << "Please give me strike price for a spot of " << spot << ": ";
        cin >> strike;
        cout << "Intrinsic value of a call option with spot " << spot << ", strike " << strike << " is: " << calculateCallIntrinsicValue(spot, strike) << endl;
    }
    else {
        cout << "ERROR :: Please enter either 0 or 1" << endl;
    }
    
    return 0;
}
