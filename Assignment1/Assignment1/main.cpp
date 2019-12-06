//
//  main.cpp
//  Assignment1
//
//  Created by Akshay Joshi on 05/12/19.
//  Copyright © 2019 Akshay Joshi. All rights reserved.
//

#include <iostream>
using namespace std;

void calculate(int a, int b) {
    int count = 0;
    while (a != b) {
        count++;
        if (a > b) {
            a -= b;
            }
        else {
            b -= a;
            }
        cout << a << "," << b << endl;
    }

    cout << "The answer is " << a << " and it took " << count << " steps to calculate" << endl;
}

int main()
{
int a,b;
cout << "Please give me a positive integer: "; cin >> a;
cout << "Please give me another positive integer: "; cin >> b;
calculate(a,b);
return 0;
    
}
