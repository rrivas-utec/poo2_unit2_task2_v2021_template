//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "global.h"
#include "p2.h"
#include <vector>
#include <list>
#include <fstream>
using namespace std;


void question_2_1(){
#ifdef ENABLE_TEST
    vector<int> vec = {10, 20, 40, 11, 22, 54};
    print(begin(vec), end(vec), cout, "-");
#endif
}

void question_2_2(){
#ifdef ENABLE_TEST
    vector<int> vec = {10, 20, 40, 11, 22, 54};
    ofstream in ("result.txt");
    print(begin(vec), end(vec), in, "|");
    in.close();
    ifstream out ("result.txt");
    string result;
    getline(out, result);
    cout << result;
#endif
}

void question_2_3(){
#ifdef ENABLE_TEST
    vector<int> vec = {11, 22, 33, 44, 55, 66};
    auto last_it = next(begin(vec), static_cast<int>(vec.size() / 2));
    print(begin(vec), last_it, std::cout, "-");
#endif
}

void question_2_4(){
#ifdef ENABLE_TEST
    list<int> lst = {};
    ofstream in ("result.txt");
    print(begin(lst), end(lst), in, "|");
    in.close();
    ifstream out ("result.txt");
    string result;
    getline(out, result);
    cout << result;
#endif
}
