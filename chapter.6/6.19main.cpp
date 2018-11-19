#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double hypotenuse(double,double);
int main()
{
   int a;
   int b;
   for(int i=1;i<3;i++)
   {
       cout<<"Enter the first side:";
   cin>>a;
   cout<<"Enter anther side:";
   cin>>b;
   cout<<"Hypotenuse:"<<hypotenuse(a,b)<<endl;
   }
}
double hypotenuse(double a,double b)
{
return(a*a+b*b);
}


