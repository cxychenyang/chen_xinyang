#include <iostream>
using namespace std;
int a;
int b;
int c;
int main()
{
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;
    if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        cout<<"Can be a right triangle";
    else
        cout<<"Can not be a right triangle";
}

