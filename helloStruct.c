#include <stdlib.h>

struct Point {
  double x;
  double y;
};

// Forward function declaration

void Point_print(const struct Point* self);

int main(){
// To do
// Print its values
}

void Point_print(const struct Point *self){

printf("(%f, %f)\n", (*self).x, (*self).y);

}
