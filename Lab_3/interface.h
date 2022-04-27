//
//  interface.h
//  Lab_3
//
//  Created by Kirill Kiptyk on 11/26/18.
//  Copyright © 2018 Кірілл Кіптик. All rights reserved.
//

#ifndef interface_h
#define interface_h

#include <iostream>
#include "factorization.h"
#include "d_logarifm.h"
using namespace std;

void work(int n){
    switch (n){
        case 1:{
            Factorize a;
            cout << "put in n: "<< endl;
            cin >> a.n;
            if (a.is_prime(a.n))
                cout << "n is prime" << endl;
            else
                if (a.n % 2 == 0)
                    cout << 2 << endl;
                else
                    cout << a.ferma() << endl;
            break;
        }
        case 2:{
            Factorize a;
            cout << "put in n: "<< endl;
            cin >> a.n;
            if (a.is_prime(a.n))
                cout << "n is prime" << endl;
            else
                if (a.n % 2 == 0)
                    cout << 2 << endl;
                else
                    cout << a.polard(50) << endl;
            break;
        }
        case 3:{
            Factorize a;
            cout << "put in n: "<< endl;
            cin >> a.n;
            if (a.is_prime(a.n))
                cout << "n is prime" << endl;
            else
                if (a.n % 2 == 0)
                    cout << 2 << endl;
                else
                    cout << a.square() << endl;
            break;
        }
        case 4:{
            Factorize a;
            cout << "put in n: "<< endl;
            cin >> a.n;
            if (a.is_prime(a.n))
                cout << "n is prime" << endl;
            else
                if (a.n % 2 == 0)
                    cout << 2 << endl;
                else
                    cout << a.quadroSieve() << endl;
            break;
        }
        case 5:{
            Factorize a;
            cout << "put in n: "<< endl;
            cin >> a.n;
            if (a.is_prime(a.n))
                cout << "n is prime" << endl;
            else
                if (a.n % 2 == 0)
                    cout << 2 << endl;
                else
                    cout << a.Lenstra() << endl;
            break;
        }
        case 6:{
            int b, g, x, n;
            cout << "put in n, b, g:" << endl;
            cin >> n >> b >> g;
            x = naive(n, b, g);
            cout << x << endl;
            break;
        }
        case 7:{
            int b, g, x, n;
            cout << "put in n, b, g:" << endl;
            cin >> n >> b >> g;
            x = Shank(n, b, g);
            cout << x << endl;
            break;
        }
        case 8:{
            int b, g, x, n;
            cout << "put in n, b, g:" << endl;
            cin >> n >> b >> g;
            x = rhoPoll(n, b, g);
            cout << powmod(g, x, n) << " " << b << endl;
            cout << x << endl;
            break;
        }
        case 9:{
            int b, g, x, n;
            cout << "put in n, b, g:" << endl;
            cin >> n >> b >> g;
            x = AdelmanIndex(n, b, g);
            cout << x << endl;
            break;
        }
        case 10:{
            int b, g, x, n;
            cout << "put in n, b, g:" << endl;
            cin >> n >> b >> g;
            x = PohlHell(n, b, g);
            cout << x << endl;
            break;
        }

        default : break;
    }
}
/*
 cout << "Put in which method you want use:" << endl;
 /*Factorize a;
 cin >> a.n;
 cout << a.Lenstra() << endl;
 int b, g, x, n;
 cin >> n >> b >> g;
 x = AdelmanIndex(n, b, g);
 cout << x << endl;
 system("pause");*/

#endif /* interface_h */
