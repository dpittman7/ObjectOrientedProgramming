//
// Created by deant on 3/12/2020.
//

#ifndef SHAPES_CIRCLE_H
#define SHAPES_CIRCLE_H

#include "shapes.h"

class circle : public shapes{

public:
    circle();
    circle(double radius);

    double perimeter() override;
    double area() override;
    void setlength(double input);
    double getlength() override;
    void printData() override;

private:
    double radius;

};


#endif //SHAPES_CIRCLE_H
