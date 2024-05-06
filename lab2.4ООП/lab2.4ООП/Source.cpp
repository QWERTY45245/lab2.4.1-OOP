#include <iostream>
#include <cstdlib> 
#include <ctime>  
#include "Matrix.h"
#include<vector>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the matrix (n): ";
    cin >> n;

    srand(time(nullptr));

    vector<vector<int>> randomValuesA(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            randomValuesA[i][j] = rand() % 100; 
        }
    }

    vector<vector<int>> randomValuesB(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            randomValuesB[i][j] = rand() % 100; 
        }
    }

    Matrix A(n, randomValuesA);
    Matrix B(n, randomValuesB);

    cout << "Matrix A:\n" << A << endl;
    cout << "Matrix B:\n" << B << endl;

    Matrix C = A * B;
    cout << "Matrix C = A * B:\n" << C << endl;

    if (A == B) {
        cout << "Matrix A is equal to Matrix B\n";
    }
    else {
        cout << "Matrix A is not equal to Matrix B\n";
    }

    cout << "Norm of Matrix A: " << A.norm() << endl;
    cout << "Norm of Matrix B: " << B.norm() << endl;

    return 0;
}
