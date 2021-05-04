//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "global.h"
#include "p3.h"
#include <list>
#include <vector>
using namespace std;


void question_3_1(){
#ifdef ENABLE_TEST
    list<double> lst = {10.5, 20.4, 30.2, 40.5, 50.9, 60.5};
    cout << "Total: " << sumarizar(begin(lst), end(lst), 0) << endl;
#endif
}

void question_3_2(){
#ifdef ENABLE_TEST
    list<double> lst = {10.5, 20.4, 30.2, 40.5, 50.9, 60.5};
    // Calcular la mitad de valores inferior
    auto last_it = next(begin(lst), static_cast<int>(size(lst) / 2));
    cout << "Sumatoria de la mitad: " << sumarizar(begin(lst), last_it, 0) << endl;
#endif
}

void question_3_3(){
#ifdef ENABLE_TEST
    vector<double> vec = {10.5, 20.4, 30.2, 40.5, 50.9, 60.5};
    cout << "Total: " << sumarizar(begin(vec), end(vec), 0) << endl;
#endif
}

void question_3_4(){
#ifdef ENABLE_TEST
    vector<double> vec = {10.5, 20.4, 30.2, 40.5, 50.9, 60.5};
    // Calcular la mitad de valores inferior
    auto last_it = next(begin(vec), static_cast<int>(size(vec) / 2));
    cout << "Sumatoria de la mitad: " << sumarizar(begin(vec), last_it, 0) << endl;
#endif
}
