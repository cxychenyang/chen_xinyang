#include <iostream>
#include<iomanip>

using namespace std;
double a=0;
double b=0;
double c=0;
double d=0;

int main()

{
cout<<"Enter hours worked(-1 to end):";
cin>>a;

while(a==-1)
    return 0;

while (a<=40)
{

    cout<<"Enter hourly rate of the employee($00.00):"<<endl;
    cin >>b;
    c=a*b;

    cout<<"Salary is:"<<c<<endl;
    cout<<"Enter hours worked (-1 to end) :";
        cin>>a;

}
    while(a>=40)
    {

    cout<<"Enter hourly rate of the employee($00.00):"<<endl;
    cin>>b;
     d=40*b+1.5*(a-40)*b;

    cout<<"Salary is:"<<d<<endl;
    cout<<"Enter hours worked (-1 to end) :";
        cin>>a;

    }


}
