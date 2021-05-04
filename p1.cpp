//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "global.h"
#include "p1.h"
using namespace std;

void question_1_1(){
#ifdef ENABLE_TEST
    auto text = input();
    cout << text << endl;
#endif
}

void question_1_2(){
#ifdef ENABLE_TEST
    auto text = input("Ingrese Texto");
    cout << text << endl;
#endif
}

void question_1_3(){
#ifdef ENABLE_TEST
    auto entero = input<int>();
    cout << entero << endl;
#endif
}

void question_1_4(){
#ifdef ENABLE_TEST
    auto real = input<double>();
    cout << real << endl;
#endif
}
