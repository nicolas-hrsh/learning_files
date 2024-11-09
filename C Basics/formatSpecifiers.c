#include <stdio.h>

int main(){
    printf("test Success\n");
    // Prices for fruits:
    float mango_price = 2.13;        
    float apple_price= 3.0;
    float guava_price= 3.17;
    float pineapple_price= 3.124;
    float dragonfruit_price= 7.000;     


    // Display_USER   
    printf("Price for 1 mango is: %7.2f \n", mango_price);
    printf("Price for 1 apple is: %7.2f \n", apple_price);
    printf("Price for 1 guava is: %7.2f \n", guava_price);
    printf("Price for 1 pineapple is: %7.2f \n", pineapple_price);
    printf("Price for 1 dragonfruit is: %7.2f \n", dragonfruit_price);
    
    printf("There are 4 main datatypes:\n"
           "1.Int:\n"
           // Info about DT-> Int
           // "\t Sample Line \n"
           "\t int var = 123, assigns an Integer without a decimal.\n"


           "2. Char:\n"
           // Info about DT-> Char
           "\t char var = \"a\". assigns a SINGLE charachter from Unicode to var. \n"
           "\t char var[]= \"Hello\"\n"

           "3. Float:\n"
           // Info about DT-> Float
           "\t float var = 1.23 Stores real numbers in decimal form Has precision of 6 decimal places.\n"

           "4. Double:\n"
           // Info about DT-> Double
           "\t double var = 1.234567 Stores real numbers same as float but with greater precision of 15 decimal places.\n"
        
           "\n");


    return 0;
}