//
// Created by deant on 3/12/2020.
//

#include "triangle.h"
#include <iostream>

using namespace std;

// *****************************************************************
// * Function Name:  double triangle::perimeter()                  *
// * Description:  Calculates the perimeter of the triangle object *
// *      needed.                                                  *
// * Parameter Description: Used member variable length1, length2, *
// *                          and length3 to represent the sides   *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:  Assignment Description Algorithm Portion          *
// *                                                               *
// *
// *****************************************************************

double triangle::perimeter() {

    double perimeter = length1 + length2 + length3;

    return perimeter;

}

// *****************************************************************
// * Function Name:  double triangle::area()                       *
// * Description:  Calculates the area of the triangle object      *
// *      using Heron's Formula                                    *
// * Parameter Description: Used member variable length1, length2  *
// *       and length3 to represent the sides of the triangle      *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:  Assignment Description Algorithm Portion          *
// *                                                               *
// *
// *****************************************************************

double triangle::area() {

    double s = perimeter() / 2;
    double radicand = s * (s - length1) * (s - length2) * (s - length3);
    double area = sqrt(radicand);

    return area;

}

// *****************************************************************
// * Function Name:  double triangle:setlength()                    *
// * Description:  Innitializes the length of the triangle object    *
// *                                                               *
// * Parameter Description: double input: the value that the length*
// *                 will be initialized to, must be greater than 1*
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************

void triangle::setlength(double input, double input2, double input3)
{
    length1 = input;
    length2 = input2;
    length3 = input3;
}
// *****************************************************************
// * Function Name:  double triangle::getlength()                    *
// * Description:  Returns the length of the triangle object         *
// *      needed.                                                  *
// * Parameter Description:                                        *
// *                                                               *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************
double triangle::getlength(int index) {

    double array[3] = {length1, length2, length3};

    return array[index-1];

}

// *****************************************************************
// * Function Name:  triangle::triangle(double input1, double input2, double3)                  *
// * Description:  constructor for the triangle object, initialize   *
// *   initialized member variables to input value if > 1          *
// * Parameter Description:  double input: value  length will be   *
// *                           set to if >1                        *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************
triangle::triangle(double input1, double input2, double input3) {

    if(input1 > 1.0 && input2 > 1.0 && input3 > 1.0) {
        length1 = input1;
        length2 = input2;
        length3 = input3;
    }
    else {
        length1 = 1.0;
        length2 = 1.0;
        length3 = 1.0;
    }

}

// *****************************************************************
// * Function Name:  triangle::triangle()                          *
// * Description:  Default constructor for the triangle object      *
// *   initialized member variables to 1                           *
// * Parameter Description:                                        *
// *                                                               *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:          *
// *                                                               *
// *
// *****************************************************************
triangle::triangle() {
length1 = 1.0;
length2 = 1.0;
length3 = 1.0;
}

// *****************************************************************
// * Function Name:  triangle::printData()                          *
// * Description:  prints out area, perimeter, and member varibale *
// *   of object                                                   *
// * Parameter Description:                                        *
// *                                                               *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************
void triangle::printData() {

    cout << "Triangle " << endl<< "perimeter: " << perimeter() << "\n" <<
         "area:" << area() << "\n" << "length1: " << length1 << " length2: " << length2 << " length3: "
         << length3 << endl;

}

