#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
   int side1;
   int side2;
   long int hypotenuse;
   long int sideSquared;
   long int hypotenuseSquared;
   cout<<"Side1\tSide2\tSide3";
   for(side1=1;side1<=500;side1++)
   {
       for(side2=side1;side2<=500;side2++)
       {
           for(hypotenuse=side2;hypotenuse<=500;hypotenuse++)
           {
              hypotenuseSquared=hypotenuse*hypotenuse;
              sideSquared=side1*side1+side2*side2;
              if(hypotenuseSquared==sideSquared)
              {
                  cout<<side1<<setw(10)<<side2<<setw(10)<<hypotenuse<<setw(13)<<'/n'<<endl;


              }
           }
       }
   }

}
