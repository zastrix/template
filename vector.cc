#include "vector.h"

using namespace std;

double vector::surface() {
   double s = 0;

   for (double i = 0; i < x; i++) {
      s = s + y;
   }

   return s;
}