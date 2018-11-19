#include <iostream>
using namespace std;
int a;//precision
int c=1;//factorial
int d=1;//counter for compare
double e=1.0;
int main()
{
    cout<<"Please enter the precision:";
    cin>>a;

    while(d<=a)
    {

        c=c*d;
        e=e+1.0/c;
        d++;



    }
    cout<<"E is"<<e<<endl;
}
