//
//  main.cpp
//  Magic Square
//
//  Created by Allen Moody on 9/10/14.
//  Copyright (c) 2014 FAMU. All rights reserved.
//
#include <iostream>
#include "square.h"
using namespace std;
int main()
{
    int vals1[9] = { 2, 7, 6, 9, 5, 1, 4, 3, 8};
    int vals2[] = { 2, 7, 6, 9, 5, 1, 3, 4, 8};
    square  x (vals1);
    if (x.isMagic())
        cout << " square 1 is magic" << endl;
    else
        cout << " square 1 is NOT magic" << endl;
   square y(vals2);
    if (y.isMagic())
     cout << " square 2 is magic" << endl;
    else
        cout << " square 2 is NOT magic" << endl;
    return 0;
}
