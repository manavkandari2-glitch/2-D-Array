#include<stdio.h>
void subtract(int arr1[][3], int arr2[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}
int main() {
    int arr1[2][3] = {{10, 20, 30}, {40, 50, 60}};
    int arr2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int result[2][3];
    int rows = 2;
    int cols = 3;
    subtract(arr1, arr2, result, rows, cols);
    printf("Resultant array after subtraction:\n");
    for (int i = 0; i < rows; i++) {    
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}   