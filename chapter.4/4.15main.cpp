#include<iostream>
using namespace std;
int main()
{
    double sales;
    int a=200;
    double income;
    cout<<"Enter sales in dollars(-1 to quit):";
    cin>>sales;
    while(sales==-1)
    {
        return 0;
    }
    while(sales!=-1)
    {
        income=a+0.09*sales;
        cout<<"Salary is : "<<income<<endl;
        return 0;


    }

}

