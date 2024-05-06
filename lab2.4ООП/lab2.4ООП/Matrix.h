#pragma once

#include <iostream>
#include <vector>
#include <cmath>

class Matrix {
private:
    std::vector<std::vector<int>> data;
    int size;

public:
    Matrix(int N);
    Matrix(int N, const std::vector<std::vector<int>>& values);
    Matrix();
    Matrix(const Matrix& other); 

    int getSize() const { return size; }
    int getElement(int i, int j) const { return data[i][j]; }
    void setElement(int i, int j, int value) { data[i][j] = value; }
    void setSize()const;

    Matrix& operator=(const Matrix& other); 
    Matrix operator+(const Matrix& other) const;
    Matrix operator-(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    bool operator==(const Matrix& other) const;
    bool operator!=(const Matrix& other) const;
    double norm() const;
    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix);
    friend std::istream& operator>>(std::istream& is, Matrix& matrix); 
    operator std::string() const; 
    std::vector<int>& operator[](int index); 
    std::string toString() const;
};
