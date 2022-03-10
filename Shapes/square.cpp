//
// Created by deant on 3/12/2020.
//
#include "shapes.h"
#include "square.h"
#include <iostream>
using namespace std;

// *****************************************************************
// * Function Name:  double square::area()                         *
// * Description:  Calculates the area of the square object        *
// *      needed.                                                  *
// * Parameter Description: Used member variable length as the side*
// *                                                               *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:  Assignment Description Algorithm Portion          *
// *                                                               *
// *
// *****************************************************************
double square::area() {

    double side = getlength();
    double area = pow(side,2);

    return area;
}

// *****************************************************************
// * Function Name:  double square::perimeter()                         *
// * Description:  Calculates the area of the square object        *
// *      needed.                                                  *
// * Parameter Description: Used member variable length as side  *
// *                                                               *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:  Assignment Description Algorithm Portion          *
// *                                                               *
// *
// *****************************************************************

double square::perimeter() {
    double side = getlength();
    double perimeter = 4 * side;

    return perimeter;
}

// *****************************************************************
// * Function Name:  double square::getlength()                    *
// * Description:  Returns the length of the square object         *
// *      needed.                                                  *
// * Parameter Description:                                        *
// *                                                               *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************

double square::getlength()
{
    return length;
}

// *****************************************************************
// * Function Name:  double square::setlength()                    *
// * Description:  Innitializes the length of the square object    *
// *                                                               *
// * Parameter Description: double input: the value that the length*
// *                 will be initialized to, must be greater than 1*
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************
void square::setlength(double input)
{
    if (input > 1.0)
        length = input;
    else
        length = 1.0;
}

// *****************************************************************
// * Function Name:  square::square()                              *
// * Description:  Default constructure for the square object      *
// *   initialized member variables to 1                           *
// * Parameter Description:                                        *
// *                                                               *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:          *
// *                                                               *
// *
// *****************************************************************

square::square() {
    length = 1.0;
}

// *****************************************************************
// * Function Name:  square::square(double input)                  *
// * Description:  constructor for the square object, initialize   *
// *   initialized member variables to input value if > 1          *
// * Parameter Description:  double input: value  length will be   *
// *                           set to if >1                        *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************

square::square(double input)
{
    if(input > 1)
    length = input;
    else
        length = 1.0;
}

// *****************************************************************
// * Function Name:  square::printData()                           *
// * Description:  prints out area, perimeter, and member varibale *
// *   of objects                                                  *
// * Parameter Description:                                        *
// *                                                               *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:          *
// *                                                               *
// *
// *****************************************************************


void square::printData() {

    cout << "Square" << endl << " perimeter: " << perimeter() << "\n" <<
    " area: " << area() << "\n" << "length: " << length << endl;

}



