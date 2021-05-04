//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "global.h"
#include "p4.h"
using namespace std;

void question_4_1(){
#ifdef ENABLE_TEST
    // puntero inteligente no inicializado
    smart_ptr<int> sp1;
    sp1 = make_smart_ptr<int>(10);
    cout << *sp1 << endl;   // Imprimiendo el contenido

    // puntero inteligente inicializado
    smart_ptr<string> sp2 = make_smart_ptr<string>("Hola");
    cout << *sp2 << endl;   // Imprimiendo el contenido
#endif
}

void question_4_2(){
#ifdef ENABLE_TEST
    // puntero inteligente no inicializado
    smart_ptr<point> sp1;
    sp1 = make_smart_ptr<point>(20, 30);
    cout << *sp1 << endl;   // Imprimiendo el contenido

    // puntero inteligente inicializado
    smart_ptr<point> sp2 = make_smart_ptr<point>(10, 40);
    cout << sp2->get_x() << endl;
    cout << sp2->get_y() << endl;
#endif
}
