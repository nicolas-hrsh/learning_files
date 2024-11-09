
#include <stdio.h>

int main(){

    // Storing First and last name togeather with whitespace.
    char name[21];
    printf("Please enter your full name: ");
    fgets(name, 21, stdin);

    printf("Your full name is: %s", name);

    // Taking input for age.
    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("Your age is: %d", age);

    // Storing a first name.

    char fname[25];

    printf("Please enter your first name: ");
    scanf("%s", &fname);
    printf("Your first name is: %s", fname);


    return 0;
}