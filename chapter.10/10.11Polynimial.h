#ifndef POLYNIMIAL_H_INCLUDED
#define POLYNIMIAL_H_INCLUDED
#include<iostream>

class Polynomial
{
    friend std::istream & operator>>(std::istream&,Polynomial&);
    friend std::ostream & operator<<(std::ostream&,const Polynomial&);
    friend Polynomial operator+(Polynomial&,Polynomial&);


public:
   Polynomial(int );
   virtual ~Polynomial();
   const Polynomial& operator=(const Polynomial&);
   const Polynomial& operator+=(const Polynomial&);

private:

    int z;
    int* x;
};


#endif // POLYNIMIAL_H_INCLUDED
