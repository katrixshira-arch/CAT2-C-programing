#include <stdio.h>
/*
NAME: Shiphrah Miroya
REG NO: PA106/G/28756/25
DESCRIPTION: This program defines two 2D arrays to store scores and prints their elements.
*/

int main() {
    // Definition: An array is a collection of elements of the same data type
    // stored in contiguous memory locations and accessed using an index.

    // Declare and initialize two 2D arrays
    int scores1[2][2] = {
        {65, 92},
        {84, 72}
    };

    int scores2[2][2] = {
        {35, 70},
        {59, 67}
    };

    // Print the elements of the first array
    printf("Elements of scores1 array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Print the elements of the second array
    printf("Elements of scores2 array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
