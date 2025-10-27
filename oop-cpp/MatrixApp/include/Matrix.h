#pragma once

class Matrix {
private:
    int** data;
    int rows;
    int cols;

public:
    Matrix(int r, int c);
    ~Matrix();
    friend std::ostream& operator<<(std::ostream& os, const Matrix& m);
    friend std::istream& operator>>(std::istream& is, Matrix& m);
    void saveToFile(const std::string& filename);
    void loadFromFile(const std::string& filename);
};
