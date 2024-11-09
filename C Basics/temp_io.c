#include <stdio.h>
//#include <ctype.h>


int main(){
    float temp;
    char c;
    char result[50];
    // May put printf here for better undrstdng.
    scanf("%c", &c);
    c = toupper(c);


    if (c == 'F'){
        printf("Please enter the temp: ");
        scanf("%f",&temp);
    }
    
    else if(c == 'C'){
        printf("Please enter the temp: ");
        scanf("%f", &temp);
    }

    else{
        printf("Invalid Entry");
    }
    snprintf(result, 50, "The temp is %f %c.", temp, c);
    printf(result);


    return 0;
}