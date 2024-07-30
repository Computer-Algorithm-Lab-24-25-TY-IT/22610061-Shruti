#include <iostream>
using namespace std;
void getMatrix(int matrix[10][10], int rows, int cols) {
    cout << "Enter elements of the matrix (" << rows << "x" << cols << "):" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
}
void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < c1; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
void displayMatrix(int matrix[10][10], int rows, int cols) {
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int r1, c1, r2, c2;
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];
    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;
    while (c1 != r2) {
        cout << "Column of first matrix should be equal to row of second matrix. Please re-enter." << endl;
        cout << "Enter rows and columns for the first matrix: ";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for the second matrix: ";
        cin >> r2 >> c2;
    }
    getMatrix(firstMatrix, r1, c1);
    getMatrix(secondMatrix, r2, c2);
    multiplyMatrices(firstMatrix, secondMatrix, result, r1, c1, r2, c2);
    displayMatrix(result, r1, c2);
    return 0;
}
