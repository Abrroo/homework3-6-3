#pragma once
#include <string>
#include "Figure.h"


class Triangle : public Figure
{
private:
    int a, b, c;
    int A, B, C;
    const int count_side_triangle = 3;
public:
    Triangle();
    Triangle(int a, int b, int c, int A, int B, int C) : Figure(a, b, c, A, B, C){};
    std::string get_name_figure() override;

    int get_count_sides();

};
