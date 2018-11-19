#include <iostream>
#include<iomanip>
using namespace std;
int reverseDigits(int);

int main()
{
    int number;
    int a;
    int b;
    int c;
    int d;
    int reservenumber;
    cout<<"Enter a number(1000 to 9999):";
    cin>>number;
    a=number%10;
    b=(number/10)%10;
    c=(number/100)%10;
    d=(number/1000)%10;
    reservenumber=a*1000+b*100+c*10+d;
    cout<<"The reserve number is:"<<reservenumber<<endl;
}
int reverseDigits(int x)
{
    int reserve=0;
    while(x>0)
    {
        reserve=10*reserve;
        reserve=reserve+x%10;
        x=x/10;

    }
    return reserve;
}
