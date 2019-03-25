#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include <iostream>
#include <iomanip>
#include <string>


class Matrix
{
public:
    Matrix(int m, int n);
    Matrix(int n);
    Matrix(const Matrix &);
    Matrix(double* items, int m, int n);
    ~Matrix();
    static Matrix FromFile(std::string file);
    int getRowNum() const;
    int getColNum() const;

    Matrix Trans() const;

    double get(int i, int j) const;
    void set(int i, int j, double val);

    Matrix operator +(const Matrix &m);
    Matrix operator -(const Matrix &m);
    Matrix operator *(const Matrix &m);
    Matrix operator *(const double f);
    Matrix& operator=(const Matrix& m);
    Matrix Inverse();

    friend std::ostream& operator <<(std::ostream &os, const Matrix &m);

private:
    double *item;
    int rowNum;
    int colNum;

private:

    void RowSwap(int i, int j, double multiply);
    void RowSwap(int i, int j);
    void FlowOver();
};

#endif // MATRIX_H_INCLUDED
