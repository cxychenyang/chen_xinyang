#include <iostream>
using namespace std;
double smallest(double,double,double);
int main()
{
    double a;
    double b;
    double c;

    cout<<"Enter three numbers:";
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"The smallest is:"<<smallest(a,b,c)<<endl;
}
double smallest(double a,double b,double c)
{
    if(a<b&&b<c)
        return a;
    if(b<a&&b<c)
        return b;
    if(c<b&&b<a)
        return c;
}
