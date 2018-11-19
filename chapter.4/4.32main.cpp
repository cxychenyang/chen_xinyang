#include <iostream>
using namespace std;
double a;
double b;
double c;
int main()
{
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;

    if(a+b>c&&a+c>b&&b+c>a)
    {
        cout<<"Can be a triangle"<<endl;
    }
    else
    {
        cout<<"Can not be a triangle"<<endl;
    }

}
