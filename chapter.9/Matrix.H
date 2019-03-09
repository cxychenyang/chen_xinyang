#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
class Matrix
{
    friend std::ostream &operator<<( std::ostream&, const Matrix &);
    friend std::istream &operator>>( std::istream&, Matrix &);
    private:
         int elements1;
         int elements2;
         int elements3;
         int elements4;
         int elements5;
         int elements6;
         int elements7;
         int elements8;
         int elements9;
};

#endif // MATRIX_H_INCLUDED
