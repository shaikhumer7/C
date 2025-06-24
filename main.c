// #include <stdio.h>
// #include <string.h>
// unsigned long long int Factorial(int number) {
//     if (number == 0 || number == 1) {
//         return 1;
//     } else {
//          return (number * Factorial(number-1));
//     }
// }

// int main() {
//     int number;
//     printf("Enter the Number: ");
//     scanf("%d",&number);
//     printf("The Factorial of the Number is %d is %lld\n",number,Factorial(number));
//     return 0;
// }

// #include <stdio.h>
// #define PI 3.1415926535897932384626433832795
// #define name "ShaikhUmer"
// int main(void) {
//     int n;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     printf("Entered Number: %f\n",n*PI);
//     printf("My Name is %s",name);
//     return 0;
// }



// Buffer Overflow
// #include <stdio.h>

// int main() {
//     FILE * fp = fopen("hallo.txt", "w");

//     fputc('A', fp);
//     getchar();
//     fputc('A', fp);
//     getchar();

// }

// #include <stdio.h>
// #define length 40
// #define breath 40

// int main(void){
// int area;

// area= length * breath;

// printf("Area of Rectangle is %d",area);

// return 0;
// }



// #include <stdio.h>

// int main() {
//     int age = 16;
//     char* message = (age >= 18) ? "Eligible to Vote" : "Not Eligible to Vote";
//     printf("the person is %s"message);
//     return 0;
// }


// int main() {
//     int *array = NULL;
//     int target , n = 0;
//     int capacity = 10;


//     // Allocating Initial Memory
//     array = (int*)malloc(capacity * sizeof(int));
//     if (array == NULL) {
//         printf("Memory Allocation Failed\n");
//         return 1;
//     }
//     printf("Enter Your Number;s: ");
//     int num;

//     while(scanf("%d", &num) == 1) {
//         if(n >= capacity) {
//             capacity *=2;
//             array  = (int*)realloc(array, capacity * sizeof(int));
//             if(array == NULL) {
//                 printf("Memory Allocation Failed\n");
//                 return 1;
//             }
//         }
//         array[n] = num;
//         n++;
//     }
// }

#include "header.h"

typedef struct 
{
    double alive_ampltitude;
    double dead_amplitude;
    int collapsed;
    int final_state;
} Quantum_Cat;

void observe_cat(Quantum_Cat *cat) {
    if (cat -> collapsed) return;

    double prob_alive = cat -> alive_ampltitude * cat -> alive_ampltitude;
    double r = (double)rand() / RAND_MAX;
    
    if (r < prob_alive) 
    cat -> final_state  = 1;
    else 
        cat -> final_state = 0; 
    cat -> collapsed = 1;
    } 

int main() {
    srand(time(NULL));

    Quantum_Cat cat = {0.707, 0.707, 0 , -1};

    observe_cat(&cat);

    if (!cat.collapsed)
        printf("The cat is in quantum superposition\n");
     else if (cat.final_state == 1)
        printf("The cat is Alive.\n");
    else 
        printf("The cat is dead\n");

    return 0;
}

