#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double roundToInteger(double);
double roundToTenths(double);
double roundToHundredths(double);
double roundToThousands(double);
double x;
double roundToInteger( double number)
    {return floor(number+0.5);}
double roundToTenths( double number )
    {return floor(number*10+0.5)/10;}
double roundToHundredths( double number )
    {return floor(number*100+0.5)/100;}
double roundToThousandths( double number)
    {return floor(number*1000+0.5)/1000;}
int main()
{
    int counter=0;
    double x=0.0;

    cout<<"Please enter the amount number :"<<fixed;
    cin>>counter;

    for(int a=0;a<counter;a++)
    {
      cout << "Enter x:";
      cin >> x;
      cout  << x << " rounded to the nearest integer is:    "<< setprecision( 0 ) << roundToInteger( x ) << '\n';
      cout  << x << " rounded to the nearest tenth is:      "<< setprecision( 1 ) << roundToTenths(x ) << '\n';
      cout  << x << " rounded to the nearest hundredth is:  "<< setprecision( 2 ) << roundToHundredths( x ) << '\n';
      cout  << x << " rounded to the nearest thousandth is: "<< setprecision( 3 ) << roundToThousandths( x ) << '\n';
    }
}

