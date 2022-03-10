//
// Created by deant on 3/12/2020.
//

#include "rectangle.h"
#include <iostream>

using namespace std;

// *****************************************************************
// * Function Name:  double rectangle::area()                      *
// * Description:  Calculates the area of the rectangle object     *
// *      needed.                                                  *
// * Parameter Description: Used member variable length1 and       *
// *                         length2 as the sides                 *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:  Assignment Description Algorithm Portion          *
// *                                                               *
// *
// *****************************************************************
double rectangle::area()
{

    double area = length1 * length2;

    return area;

}

// *****************************************************************
// * Function Name:  double rectangle::perimeter()                 *
// * Description:  Calculates the perimeter of the rectangle object*
// *                                                                *
// * Parameter Description: Used member variable length1 and length*
// *                         2 as as the measure of the sides      *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:  Assignment Description Algorithm Portion          *
// *                                                               *
// *
// *****************************************************************

double rectangle::perimeter() {

    double perimeter = (length1 * 2) + (length2 * 2);

    return perimeter;
}

// *****************************************************************
// * Function Name:  double rectangle::setlength()                    *
// * Description:  Innitializes the length of the rectangle object *
// *                                                               *
// * Parameter Description: double input: the value that the length*
// *                 will be initialized to, must be greater than 1*
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************
void rectangle::setlength(double input, double input2)
{
 length1 =  input;
 length2 = input2;
}

// *****************************************************************
// * Function Name:  double rectangle::getlength()                    *
// * Description:  Returns the length of the rectangle object         *
// *      needed.                                                  *
// * Parameter Description:                                        *
// *                                                               *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************
double rectangle::getlength(int i)
{
    double length[2] = {length1, length2};

    return length[i-1];
}

// *****************************************************************
// * Function Name:  rectangle::rectangle()                        *
// * Description:  Default constructor for the rectangle object    *
// *   initialized member variables to 1                           *
// * Parameter Description:                                        *
// *                                                               *
// * Date:  03/13/2020  (Date of function modification)            *
// * Author:   Deanta Pittman                                      *
// * Referenes:          *
// *                                                               *
// *
// *****************************************************************
rectangle::rectangle() {

    length1 = 1.0;
    length2 = 1.0;

}

// *****************************************************************
// * Function Name: rectangle::rectangle(double input1, double input2)
// * Description:  constructor for the rectangle object, initialize   *
// *   initialized member variables to input value if > 1             *
// * Parameter Description:  double input: value  length will be      *
// *                           set to if >1                           *
// * Date:  03/13/2020  (Date of function modification)               *
// * Author:   Deanta Pittman                                         *
// * Referenes:                                                       *
// *                                                                  *
// *
// *****************************************************************

rectangle::rectangle(double input1, double input2) {

    if(input1 > 1 && input2 > 1) {
        length1 = input1;
        length2 = input2;
    }
    else
    {
        length1 = 1.0;
        length2 = 1.0;
    }


}
// *****************************************************************
// * Function Name:  rectangle::printData()                        *
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

void rectangle::printData() {
    cout << "Rectangle " << endl << "perimeter: " << perimeter() << "\n" <<
    "area: " << area() << "\n" << "length1: " << length1 << " length2: " << length2 << endl;

}
