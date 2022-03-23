//
// Created by deant on 3/18/2020.
//

#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H
#include <iostream>
#include <new> // Needed for bad-alloc exception
#include <cstdlib> // Needed for the exit function
using namespace std;

template <class T>
class SimpleVector {

public:
// Default constructor
    SimpleVector() { aptr = 0; arraysize = 0;
    }

// Constructor declaration
    SimpleVector(int);

// Copy Constructor declaration
    SimpleVector(const SimpleVector &);

// Destructor - check to see if the size > zero.
    ~SimpleVector();

// Accessor to return the array size
    int size() const { return arraysize; }

// Accessor to return a specific element
    T getElementAt(int sub);

// Overload [] operator declaration
    T &operator[](const int &);

private:
    T *aptr; // To point to the allocated array
    int arraysize; // Number of elements in the array
    void memError(); // Handles memory allocation errors
    void subError(); // Handles subscripts out of range
};


// *****************************************************************
// * Function Name: SimpleVector(int input)                        *
// * Description:  Constructor for the SimpleVector object         *
// *             confirmed by a bound and memory check             *
// * Parameter Description: int input - passed value initializes   *
// *                the size of the vector                         *
// * Date:  03/20/2020                                             *
// * Author: Deanta Pittman                                        *
// * Referenes:  David Gaitros COP3330 Course Material             *
// *                                                               *
// *
// *****************************************************************
template <class T>
SimpleVector<T> ::SimpleVector(int input) {
    //bound check
     if (input<1)
         arraysize=1;
     else
         arraysize = input;

     //memory allocation check
     try {
         aptr = new T[arraysize];
     }
     catch (bad_alloc)
     {memError();}

     //object array initialization
     for (int i = 0; i < arraysize; i++)
         aptr[i] = 0;
}

// *****************************************************************
// * Function Name: SimpleVector(const SimpleVector & o)           *
// * Description:  Copy constructor for the SimpleVector object    *
// *             confirmed by a memory check                       *
// * Parameter Description: SimpleVector &o - passes a reference   *
// *              to an existing  SimpleVector object.             *
// * Date:  03/20/2020                                             *
// * Author: Deanta Pittman                                        *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************

template <class T>
SimpleVector<T> ::SimpleVector(const SimpleVector & o) {

    //bound check
    // - implied by the boundcheck of the parameter object
    arraysize = o.arraysize;

    //memory allocation check
    try {
        aptr = new T[arraysize];
    }
    catch (bad_alloc) {
        memError();
    }
    //initialize the array

    for (int i = 0; i < o.arraysize; i++)
    {
        aptr[i] = *(o.aptr + i);
    }

}

// *****************************************************************
// * Function Name: ~SimpleVector()                                *
// * Description:  destructor for the SimpleVector object          *
// *             confirmed by a memory check                       *
// * Parameter Description:                                        *
// *                                                               *
// * Date:  03/20/2020                                             *
// * Author: Deanta Pittman                                        *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************

template <class T>
SimpleVector<T> :: ~SimpleVector(){

    if(arraysize != 0)
    delete[] aptr;

}

// *****************************************************************
// * Function Name: getElementAt(int sub)                          *
// * Description:  returns the value of the vector at the
// *               element passed
// *                                                               *
// * Parameter Description:  int sub: indicates the element to     *
// *                           return                              *
// * Date:  03/20/2020                                             *
// * Author: Deanta Pittman                                        *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************

template  <class T>
T SimpleVector<T> ::getElementAt(const int sub) {

    //error bound check
    T value = 0;
    if(sub > arraysize)
        subError();
    else
        value = aptr[sub];

    return value;
}

// *****************************************************************
// * Function Name: memError()                                     *
// * Description: outputs an error message to the os and
//                returns an exit failure to the program           *
//                only triggered with balloc is true               *
// *
// *                                                               *
// * Parameter Description:                                        *
// *                                                               *
// * Date:  03/20/2020                                             *
// * Author: Deanta Pittman                                        *
// * Referenes: David Gaitros COP 3330 Course Material             *
// *                                                               *
// *
// *****************************************************************

template <class T>
void SimpleVector<T> ::memError() {
    cout << "Error: cannot allocate memory." << endl;
    exit (EXIT_FAILURE);
}

// *****************************************************************
// * Function Name: subError()                                     *
// * Description: outputs an error message to the os and
//                returns an exit failure to the program           *
//                only triggered with balloc is true               *
// *
// *                                                               *
// * Parameter Description:                                        *
// *                                                               *
// * Date:  03/20/2020                                             *
// * Author: Deanta Pittman                                        *
// * Referenes: David Gaitros COP 3330 Course Material             *
// *                                                               *
// *
// *****************************************************************

template <class T>
void SimpleVector<T> ::subError() {
    cout << "Error: segmentation error." << endl;
    exit (EXIT_FAILURE);
}

// *****************************************************************
// * Function Name: memError()                                     *
// * Description: outputs an error message to the os and
//                returns an exit failure to the program           *
//                only triggered with balloc is true               *
// *
// *                                                               *
// * Parameter Description:                                        *
// *                                                               *
// * Date:  03/20/2020                                             *
// * Author: Deanta Pittman                                        *
// * Referenes: David Gaitros COP 3330 Course Material             *
// *                                                               *
// *
// *****************************************************************


// *****************************************************************
// * Function Name: operator[](const int &index)                   *
// * Description:   overloads the bracket operator to return the   *
// *               value at the indexed element of the object array*
// *                                                               *
// * Parameter Description: const int &index: a value passed by    *
// *                reference to indicate the element of the       *
// *                targeted element                               *
// * Date:  03/20/2020                                             *
// * Author: Deanta Pittman                                        *
// * Referenes:                                                    *
// *                                                               *
// *
// *****************************************************************

template<class T>
T &SimpleVector<T>::operator[](const int &index) {

    if(index > arraysize)
        subError();
  return aptr[index];

}









#endif //SIMPLEVECTOR_H