//
// Created by deant on 3/12/2020.
//

#ifndef SHAPES_TRIANGLE_H
#define SHAPES_TRIANGLE_H


#include "shapes.h"

class triangle : public shapes {

public:
    triangle();
    triangle(double input1, double input2, double input3);
    double perimeter() override;
    double area() override;
    void setlength(double input, double input2, double input3);
    double getlength(int index);
    void printData() override;

private:
    double length1 = 0.0, length2 = 0.0, length3 = 0.0;

};


#endif //SHAPES_TRIANGLE_H
