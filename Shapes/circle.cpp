//
// Created by deant on 3/12/2020.
//

#include "circle.h"
#include <iostream>

using namespace std;

// *****************************************************************
// * Function Name:  double circle::perimeter()                    *
// * Description:  Calculates the perimeter of the circle object   *
// *      needed.                                                  *
// * Parameter Description: Used member variable length as radius  *
// *                                                               *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:  Assignment Description Algorithm Portion          *
// *                                                               *
// *
// *****************************************************************

double circle::perimeter() {

    double circumference = M_PI * 2 * radius;

    return circumference;

}

// *****************************************************************
// * Function Name:  double circle::area()                         *
// * Description:  Calculates the area of the circle object        *
// *      needed.                                                  *
// * Parameter Description: Used member variable length as radius  *
// *                                                               *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:  Assignment Description Algorithm Portion          *
// *                                                               *
// *
// *****************************************************************
double circle::area() {

    double area = pow(radius,2) * M_PI;

    return area;

}

// *****************************************************************
// * Function Name:  double circle::setlength()                    *
// * Description:  Innitializes the length of the circle object    *
// *                                                               *
// * Parameter Description: double input: the value that the length*
// *                 will be initialized to, must be greater than 1*
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************
void circle::setlength(double input) {

    radius = input;
}

// *****************************************************************
// * Function Name:  double circle::getlength()                    *
// * Description:  Returns the length of the circle object         *
// *      needed.                                                  *
// * Parameter Description:                                        *
// *                                                               *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************
double circle::getlength() {

    return radius;
}

// *****************************************************************
// * Function Name:  circle::circle()                              *
// * Description:  Default constructure for the circle object      *
// *   initialized member variables to 1                           *
// * Parameter Description:                                        *
// *                                                               *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:          *
// *                                                               *
// *
// *****************************************************************
circle::circle() {

    radius = 1.0;

}

// *****************************************************************
// * Function Name:  circle::circle(double input)                  *
// * Description:  constructor for the circle object, initialize   *
// *   initialized member variables to input value if > 1          *
// * Parameter Description:  double input: value  length will be   *
// *                           set to if >1                        *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************
circle::circle(double input) : shapes(input) {

    if(input > 1)
     radius = input;
    else
        radius = 1.0;

}

// *****************************************************************
// * Function Name:  circle::printData()                           *
// * Description:  prints out area, perimeter, and member varibale *
// *   of object                                                  *
// * Parameter Description:                                        *
// *                                                               *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:          *
// *                                                               *
// *
// *****************************************************************
void circle::printData() {
    cout << "Circle" << endl << "perimeter: " << perimeter() << "\n" <<
         "area:" << area() << "\n" << "radius: " << radius << endl;

}

