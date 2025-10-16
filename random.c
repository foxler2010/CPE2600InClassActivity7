/* 
* random.c
*  Bob Turney
*  10/13/2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int *array;
    int size = 1000;

    // Seed the random number generator
    srand((unsigned int)time(NULL));

    // Allocate memory dynamically
    array = (int *)malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Fill the array with random values between 0 and 100
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 101; // 0 to 100 inclusive
    }

    // Optionally print the array
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
        if ((i + 1) % 20 == 0) printf("\n"); // Print 20 values per line
    }

    // Free the allocated memory
    //free(array);

    return 0;
}