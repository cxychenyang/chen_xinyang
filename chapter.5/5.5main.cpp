#include <iostream>
using namespace std;
int number;
int  sum;
int value;
int main()
{
    cout<<"Enter the number of the value:";
    cin>>number;
    for(int i=0;i<number;++i)
       {

        cout<<"Enter the value:";
        cin>>value;
        sum+=value;
        cout<<"Sum is:"<<sum<<endl;
       }

}

