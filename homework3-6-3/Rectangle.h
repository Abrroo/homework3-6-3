#pragma once
#include "Quadrangle.h"

class Rectangle : public Quadrangle
{
private:
    int a = 0, b = 0, c = 0, d = 0;
    int A = 0, B = 0, C = 0, D = 0;
public:
    Rectangle();
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D);
    std::string get_name_figure();

};