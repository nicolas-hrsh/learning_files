#include <stdio.h>
#include <math.h>
int main(){
    //constants;
    const double pi = 3.1415;

    double r;
    printf("Please enter the radius r: ");
    scanf("%lf",&r);

    double peri;
    peri = 2*pi*r;
    printf("The perimeter of radius %lf is: %lf", r ,peri);

}