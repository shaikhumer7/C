#include "header.h"

int main() {
    int test = rand();
    int test2= rand();
    printf("this is the value of rand is %d\n",test);
    printf("This is the value of second rand %d\n",test2);
    printf("This is the value of RAND_MAX is %d",RAND_MAX);

    int age = 19;
    if (age > 18 )
    printf("You are Elgible to Vote");
    else 
    printf("You are not eligible to vote"); 
    return 0;
}   

