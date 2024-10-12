#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void ex1(int** A, int n, int* size)
{
    int i;
    int* temp = A[n - 1];
    int tem = size[n - 1];
    for (i = n - 1; i > 0; i--) 
    {
        A[i] = A[i - 1];
        size[i] = size[i - 1];
    }
    A[0] = temp;
    size[0] = tem;
}

void printArray(int** A, int* size, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < size[i]; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 4;

    // יצירת מערכים לדוגמא
    int row1[] = { 0, 5, 12, 6, 9 };
    int row2[] = { 1 };
    int row3[] = { 2, 0, 3, 1, 29, 101 };
    int row4[] = { 3, 13, 14 };

    // יצירת מערך פוינטרים
    int* A[] = { row1, row2, row3, row4 };

    // יצירת מערך גדלים
    int size[] = { 5, 1, 6, 3 };

    printf("A \n");
    printArray(A, size, n);

    // קריאה לפונקציה
    ex1(A, n, size);

    printf("\nA \n");
    printArray(A, size, n);

    return 0;
}