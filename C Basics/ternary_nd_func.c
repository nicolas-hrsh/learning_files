#include <stdio.h>
#include <stdbool.h>

// This program explains basic usage of ternary op. as well as usage of func(s).

// main

void testFunc(){
    printf("Test Function is running well.");
}

char* printStr(char a[], char b[]){
    static char result[222];
    snprintf(result, strlen(a)+strlen(b)+1,"%s %s", a,b);
    return result;
}

int main(){
    testFunc();
    char part1[] = "Hello,";
    char part2[] = "World!";

    printf(printStr(part1, part2));

    return 0;
}