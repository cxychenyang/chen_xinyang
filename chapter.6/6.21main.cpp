#include <iostream>
using namespace std;
int isEven(int);
int main()
{
    int x;
    cout<<"Enter a number:";
    cin>>x;
    if(isEven(x))
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
}
int isEven(int x)
{
    return!(x%2);
}
