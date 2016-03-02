#include <iostream>
#include "vector.h"


using namespace std;

int main () {
   vector k;

   k.x = 4;
   k.y = 5;

   cout << "Surface: " << k.surface() << endl;

   return 0;
}