#include <iostream>
using namespace std;

// Ф-ия для обмена элементов в каждой паре
void swapPairs(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

// Ф-ия для обмена пар элементов в каждой строке двумерного массива
void swapingPairsInMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        swapPairs(matrix[i], cols);
    }
}

// Ф-ия для вывода двумерного массива
void Matrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix1[100][100], matrix2[100][100];
    int rows1, cols1, rows2, cols2;

    // Ввод размеров двумерных массивов
    cout << "Enter rows and cols of 1 massive: ";
    cin >> rows1 >> cols1;
    cout << "Enter rows and cols of 2 massive: ";
    cin >> rows2 >> cols2;

    // Проверка на четность длин строк
    if (cols1 % 2 != 0 || cols2 % 2 != 0) {
        cout << "Length of rows must be even!" << endl;
        return 0;
    }

    // Ввод элементов первого массива
    cout << "Enter elements of 1 massive:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Ввод элементов второго массива
    cout << "Enter elements of 2 massive:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Вывод исходных массивов
    cout << "Massives before switching:" << endl;
    cout << "1 massive:" << endl;
    printMatrix(matrix1, rows1, cols1);

    cout << "2 massive:" << endl;
    printMatrix(matrix2, rows2, cols2);

    // Меняем местами каждую пару в каждой строке каждого массива
    swapingPairsInMatrix(matrix1, rows1, cols1);
    swapingPairsInMatrix(matrix2, rows2, cols2);

    // Вывод результатов
    cout << "Results:" << endl;
    cout << "1 massive:" << endl;
    printMatrix(matrix1, rows1, cols1);

    cout << "2 massive:" << endl;
    printMatrix(matrix2, rows2, cols2);
<<<<<<< HEAD

=======
    
>>>>>>> test
    return 0;
}
