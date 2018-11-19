#include <iostream>
using namespace std;
void square(int,char);
int main()
{
    int side;
    char character;
    cout<<"Enter a character:";
    cin>>character;
    cout<<"Enter side:";
    cin>>side;
    cout<<'\n';
    square(side,character);
}
void square(int side,char fillCharacter)
{
    for(int chang=1;chang<=side;chang++)
    {
        for(int kuan=1;kuan<=side;kuan++)
            cout<<fillCharacter;
            cout<<'\n';
    }
}
