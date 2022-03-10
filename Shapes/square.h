//
// Created by deant on 3/12/2020.
//

#include "shapes.h"
#ifndef SHAPES_SQUARE_H
#define SHAPES_SQUARE_H


class square : public shapes{

public:
    square();
    double area() override ;
    double perimeter() override;
    void setlength(double);
    double getlength();
    square(double);
    void printData() override;

private:
    double length;


};


#endif //SHAPES_SQUARE_H
