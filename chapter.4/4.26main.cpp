#include <iostream>
using namespace std;
int number;
int b=0;
int c=0;
int d=0;
int e=0;
int f=0;
int main()
{
    cout<<"Enter the number(10000 to 99999):";
    cin>>number;
    if(number>=10000&&number<=99999)
       {

       b=number%10;
       c=(number/10)%10;
       d=(number/100)%10;
       e=(number/1000)%10;
       f=(number/10000)%10;

       if(b==f)
       {
           if(c==e)

       cout<<"Yes"<<endl;
       }
       else
        cout<<"No"<<endl;

}
}




