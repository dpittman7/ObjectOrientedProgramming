#include <iostream>
#include "shapes.h"
#include "square.h"
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"


using namespace std;
int main() {

    //Square Test
   square a;
    a.printData();
   square b(3.0);
   b.setlength(4.0);
   cout << "getlength test: "  << b.getlength() << endl;
   b.printData();

   //Triangle Test
   triangle t;
   cout << "Default Test: " << endl;
   t.printData();
   triangle e(9.0,11,8.0);
   e.setlength(2.0,2.0,3.4);
   e.printData();

    //Rectangle Test
    rectangle q;
    cout << "Default Test: " << endl;
    q.printData();
    rectangle r(0.5,7.8);
    r.setlength(9.0,3.4);
    r.printData();

    //Circle Test
   circle o;
   o.printData();
   circle c(9.0);
   c.setlength(3.0);
   c.printData();

}
