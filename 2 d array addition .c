#include<stdio.h>
void add(int arr1[][3], int arr2[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}
int main() {
    int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int arr2[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int result[2][3];
    int rows = 2;
    int cols = 3;

    add(arr1, arr2, result, rows, cols);

    printf("Resultant array after addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}