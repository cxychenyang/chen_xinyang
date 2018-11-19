#include <iostream>
using namespace std;
void square(int);
int main()
{
    int side;
    cout<<"Enter side:";
    cin>>side;
    cout<<'\n';
    square(side);
}
void square(int side)
{
    for(int chang=1;chang<=side;chang++)
    {
        for(int kuan=1;kuan<=side;kuan++)
            cout<<'*';
            cout<<'\n';
    }
}
