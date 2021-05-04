//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT2_TASK2_V2021_P4_H
#define POO2_UNIT2_TASK2_V2021_P4_H

template <typename T>
class smart_ptr {
    // Completar
};

template<typename T, typename ...Params>
smart_ptr<T> make_smart_ptr(Params ...params) {
    // Completar
}

class point {
    int x;
    int y;
public:
    point(int x, int y): x{x}, y{y} {}
    point() = default;

    friend ostream& operator<< (ostream& os, const point& p) {
        os << "{" << p.x <<", " << p.y << "}" << endl;
        return os;
    }

    [[nodiscard]] int get_x() const { return x; }
    [[nodiscard]] int get_y() const { return y; }
};

void question_4_1();
void question_4_2();

#endif //POO2_UNIT2_TASK2_V2021_P4_H
