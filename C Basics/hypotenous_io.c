#include <stdio.h>
#include <math.h>

int main(){
    // initialization of required var(s)
    float base;
    float height;

    // Seeking input:
    printf("Please enter base: ");
    scanf("%f",&base);
    printf("\nPlease enter height: ");
    scanf("%f",&height);

    // Logic:
    double hypo = sqrt((pow(base,2)+(pow(height,2))));
    printf("The calculated hypotenous is: %.9lf", hypo ); // ensuring precision upto 9 decimals

    return 0;
}