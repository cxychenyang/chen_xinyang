#include <iostream>
using namespace std;
int main()
{
    int passes=0;
    int failures=0;
    int counter=1;
    int result;
    while (counter<=10)
    {
        cout<<"Enter result(1=pass,2=fail):";
        cin>>result;
        if(result==1)
        {

        passes=passes+1;
        counter=counter+1;
        }
        else if(result==2)
        {
            failures=failures+1;
            counter=counter+1;
        }
        else
        {
            cout<<"error result"<<endl;
        }
    }
    cout<<"Passed"<<passes<<"\nFailed"<<failures<<endl;
    if(passes>=8)
        cout<<"Bonus to instructor!"<<endl;
}



