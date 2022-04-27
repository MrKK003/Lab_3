//
//  main.cpp
//  Lab_3
//
//  Created by Kirill Kiptyk on 11/26/18.
//  Copyright © 2018 Кірілл Кіптик. All rights reserved.
//
#include <iostream>
#include "interface.h"

using namespace std;

int main(){
    int n;
    cout << "Put int method which you want use: " << endl;
    while (cin >> n){
        if (n == 0)
            break;
        work(n);
        cout << "Put in method which you want use: " << endl;
    }

    return 0;
}
