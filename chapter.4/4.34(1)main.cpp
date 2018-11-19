#include <iostream>
using namespace std;
int main()
{
    int a;
    int b=1;
    cout<<"Enter the number:";
    cin>>a;
    while(a>0)
    {
        b=b*a;
        a=a-1;

    }
    cout<<a<<"! is"<<b<<endl;

}
