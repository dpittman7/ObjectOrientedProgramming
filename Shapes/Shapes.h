//
// Created by deant on 3/12/2020.
//
#include <cmath>
#ifndef SHAPES_SHAPES_H
#define SHAPES_SHAPES_H


class shapes {

public:
    virtual double area();
    virtual double perimeter();
    void setlength();
    virtual double getlength();
    virtual void printData();

protected:
    shapes();
    shapes(double input);

};


#endif //SHAPES_SHAPES_H
