#include <iostream>
using namespace std;
int number;
int value;
int smallest;

int main()
{
    cout<<"Enter the number of the value:";
    cin>>number>>smallest;
    for(int i=1;i<number;++i)
    {


        cout<<"Enter the value :";
        cin>>value;
        if (smallest>value)
            smallest=value;
        cout<<"The smallest is:"<<smallest<<endl;


    }
}

