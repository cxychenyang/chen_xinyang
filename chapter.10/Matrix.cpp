#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include"Matrix.H"
ostream &operator<<( ostream &output,const Matrix &number )
{
    output<<number.elements1<<number.elements2<<number.elements3<<"\n"<<number.elements4<<number.elements5<<number.elements6
    <<"\n"<<number.elements7<<number.elements8<<number.elements9<<endl;
     return output;
}
istream &operator>>(istream &input,Matrix &number)
{
     input>>setw(1)>>number.elements1;
     input.ignore(1);
     input>>setw(1)>>number.elements2;
     input.ignore(1);
     input>>setw(1)>>number.elements3;
     input.ignore(1);
     input>>setw(1)>>number.elements4;
     input.ignore(1);
     input>>setw(1)>>number.elements5;
     input.ignore(1);
     input>>setw(1)>>number.elements6;
     input.ignore(1);
     input>>setw(1)>>number.elements7;
     input.ignore(1);
     input>>setw(1)>>number.elements8;
     input.ignore(1);
     input>>setw(1)>>number.elements9;
     input.ignore(1);
     return input;
}
