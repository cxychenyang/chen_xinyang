#include <iostream>
#include<iomanip>
#include<cmath>
#include <string>
#include <Polynomial.h>
using namespace std;
Polynomial::Polynomial(int elements)
{
 z=elements;
 x=new int[z]();
 for(int i=0;i<z;++i)
    x[i]=0;

}

Polynomial::~Polynomial()
{
   delete[]x;
}
istream&operator>>(istream&input,Polynomial&elements)
{
     for(int i=0;i<elements.z;++i)
    cin>>elements.x[i];
    return input;
}
ostream&operator<<(ostream&output,const Polynomial&elements)
{
    for(int i=0;i<elements.z;++i)
    {
       if(i==0)
    cout<<elements.x[i]<<"*"<<"x^"<<i;
    else
    cout<<"+"<<elements.x[i]<<" "<<"x^"<<i;
    }
    cout<<endl;
    return output;
}
 Polynomial operator+(Polynomial& a,Polynomial& b)
 {
      Polynomial c(b.z);
     if(a.z>b.z)
      Polynomial c(a.z);

      for(int i=0;i<c.z+1;i++)
      c.x[i]=a.x[i]+b.x[i];
      return c;
 }

     const Polynomial& Polynomial::operator=( const Polynomial&elements)
     {
      if(z!=elements.z)
      {
          delete[]x;
          x=new int[a.z+1]();
      }
       for(int i=0;i<elements.z+1;i++)
      x[i]=elements.x[i];
        return *this;
     }
   const  Polynomial& Polynomial::operator+=( const Polynomial& elements)
     {
         for(int i=0;i<z+1;++i)
         x[i]=x[i]+elements.x[i];


         return *this;
     }
