#include <stdio.h>
#define pi 3.14 // this is a macro
#define area(r) (pi*r*r) // this is macro function

int main(){
    printf("Value of pi = %f\n", pi);
    printf("Area of circle with radius 4 cm = %f", area(4));
    return 0;
}