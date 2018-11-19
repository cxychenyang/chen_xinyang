#include <iostream>
using namespace std;
int a;// input precision
double c=1.0;//factorial
int x;//input x
int d=1;//counter for compare
double e=1.0;
double mx=1.0;
int main()
{
    cout<<"Enter the precision:";
    cin>>a;
    cout<<"Enter the X:";
    cin>>x;
    while(d<=a)
    {
        c=c*d;
        mx=x*mx;
        e=e+mx/c;
        d++;
    }
    cout<<"e is:"<<e<<endl;
}

