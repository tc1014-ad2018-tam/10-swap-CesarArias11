/*
 * This program will accommodate 3 numbers given by the user from the lowest to the highest.
 *
 * Author: Cesar Alejandro Arias Perales
 * Date: September 13th, 2018
 * Mail: a01411995@itesm.mx
 */

#include <stdio.h>

// Here is were the variables will be located.
void swap(int *A, int *B){

    int n;

    if(*A > *B){
        n = *A;
        *A = *B;
        *B = n;
    }
}

    int main() {
    // These are my variables.
    int A;
    int B;
    int C;

    // This is were the program asks for the numbers.
    printf("Give me a number:");
    scanf("%d", &A);
    printf("Give me another a number:");
    scanf("%d", &B);
    printf("Give me one more number:");
    scanf("%d", &C);

    // Here is were the swapping occurs.
    swap(&A, &B);
    swap(&A, &C);
    swap(&B, &C);

    // Here is were I give the new order.
    printf("The lowest number is: %d\n", A);
    printf("The number in the meddle is: %d\n", B);
    printf("The highest number is: %d\n", C);

    return 0;
}