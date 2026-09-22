#include<stdio.h>
void transpose(int arr[][3], int result[][2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = arr[i][j];
        }
    }
}
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int result[3][2];
    int rows = 2;
    int cols = 3;
    transpose(arr, result, rows, cols);
    printf("Transposed array:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}