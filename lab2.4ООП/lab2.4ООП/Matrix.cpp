#include "Matrix.h"

Matrix::Matrix(int N) : size(N) {
    data.resize(N, std::vector<int>(N, 0));
}

Matrix::Matrix(int N, const std::vector<std::vector<int>>& values) : size(N) {
    data = values;
}

Matrix::Matrix()
{
}

Matrix::Matrix(const Matrix& other)
{
}

void Matrix::setSize() const
{
}

Matrix& Matrix::operator=(const Matrix& other)
{
}

Matrix Matrix::operator+(const Matrix& other) const {
    Matrix result(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            result.data[i][j] = data[i][j] + other.data[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator-(const Matrix& other) const {
    Matrix result(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            result.data[i][j] = data[i][j] - other.data[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator*(const Matrix& other) const {
    Matrix result(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int k = 0; k < size; ++k) {
                result.data[i][j] += data[i][k] * other.data[k][j];
            }
        }
    }
    return result;
}

bool Matrix::operator==(const Matrix& other) const {
    return data == other.data;
}

bool Matrix::operator!=(const Matrix& other) const {
    return !(*this == other);
}

double Matrix::norm() const {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            sum += data[i][j] * data[i][j];
        }
    }
    return std::sqrt(sum);
}

Matrix::operator std::string() const
{
}

std::vector<int>& Matrix::operator[](int index)
{
}

std::string Matrix::toString() const
{
    return std::string();
}

std::ostream& operator<<(std::ostream& os, const Matrix& matrix) {
    for (int i = 0; i < matrix.size; ++i) {
        for (int j = 0; j < matrix.size; ++j) {
            os << matrix.data[i][j] << " ";
        }
        os << std::endl;
    }
    return os;
}

std::istream& operator>>(std::istream& is, Matrix& matrix)
{
}
