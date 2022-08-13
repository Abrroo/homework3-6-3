#pragma once
#include <string>
#include "Triangle.h"

class Figure
{
private:
    const int count_side_none = 0;
    int a = 0, b = 0, c = 0, d = 0;
    int A = 0, B = 0, C = 0, D = 0;
public:
    Figure();
    Figure(int a, int b, int c, int A, int B, int C);
    Figure(int a, int b, int c, int d, int A, int B, int C, int D);
    virtual std::string get_name_figure();
    void print();
};