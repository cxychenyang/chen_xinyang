#include <iostream>
using namespace std;
int integerPower(int,int);
int main()
{
    int base;
    int exponent;
    cout<<"Enter the base:";
    cin>>base;
    cout<<"Enter the exponent:";
    cin>>exponent;
    cout << base <<"to the power"<< exponent <<"is:"
      << integerPower( base, exponent ) << endl;

}
int integerPower(int base,int exponent)
{
    int a=1;
   for ( int i = 1; i <=exponent; i++ )
     a=a*base;//ensure the return value
     return a;
}


