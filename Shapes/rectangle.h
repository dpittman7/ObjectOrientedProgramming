//
// Created by deant on 3/12/2020.
//
#include "shapes.h"
#ifndef SHAPES_RECTANGLE_H
#define SHAPES_RECTANGLE_H


class rectangle : public shapes
    {
public:
    rectangle();
    rectangle(double length1, double length2);
        double perimeter() override;
        double area() override;
        void setlength(double input, double input2);
        double getlength(int index);
        void printData() override;

private:
    double length1 = 0.0, length2 = 0.0;
};


#endif //SHAPES_RECTANGLE_H
