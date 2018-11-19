#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double calculateCharges(double);
int main()
{
    double hour;
    double charge;
    double totalCharges=0.0;
    double totalHours=0.0;
    bool first=true;
    cout<<fixed;
    cout<<"Enter 3 cars parking hours:";
    for(int i=1;i<=3;i++)
    {
        cin>>hour;
        totalHours=totalHours+hour;
        if(first)
        {
            cout<<setw(5)<<"Car"<<setw(15)<<"Hours"<<setw(15)<<"Charges\n";
            first=false;
        }
        charge=calculateCharges(hour);
        totalCharges+=charge;
        cout<<setw(3)<<i<<setw(17)<<setprecision(1)<<hour<<setw(14)<<setprecision(2)<<charge<<"\n";

    }
    cout<<setw(7)<<"TOTAL"<<setw(13)<<setprecision(1)<<totalHours<<setw(14)<<setprecision(2)<<totalCharges<<endl;
}
double calculateCharges(double hours)
{
    double charge;
    if(hours<3.0)
        charge=2.0;
    else
        charge=2.0+0.5*ceil(hours-3.0);
    return(charge>10.0?10.0:charge);
}
