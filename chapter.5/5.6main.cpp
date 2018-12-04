#include <iostream>
using namespace std;
int counter;
int value;
int sum;
int average;

int main()
{
   cout<<"Enter the value:";
   cin>>value;
   while(value!=9999)
   {

       sum+=value;
       counter++;
       cin>>value;//why can not put it before sum+=value?
   }
   if(counter>0)
   {
       average=sum/counter;
   }
   cout<<"Average is:"<<average<<endl;

}
