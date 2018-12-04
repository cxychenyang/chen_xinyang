#include <iostream>
#include<iomanip>
#include<array>
using namespace std;

int main()
{
    double a;
   array<double,12>monthlyTemperatures={0};
   while(a<=11)
   cout<<"Enter a number you want to put in:";
   cin>>monthlyTemperatures[a];
   cout<<monthlyTemperatures[a]<<endl;
   a++;
}
