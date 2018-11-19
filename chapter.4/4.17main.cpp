#include <iostream>

using namespace std;
int a=1;
int b=1;
int counter=0;

int main()
{

    while (counter<10)
    {  cout<<"Please enter the number:"<<endl;
    cin>>a;
        counter=counter+1;
        a=a;
        b=a>b?a:b;
        cout<<"Largest:"<<b<<endl;
        cout<<"number:"<<a<<endl;
        cout<<"Counter:"<<counter<<endl;
    }
    while(counter>=10)
    {
        return 0;
    }

}
