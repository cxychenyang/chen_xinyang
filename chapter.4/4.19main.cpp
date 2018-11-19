#include<iostream>
using namespace std;
int main()
{


    int a=0;//largest
    int b=0;
    int c=0;//the second largest
    int counter=1;
   cout<<"Enter the first number:";
   cin>>a;
   cout<<"Enter next number:";
   cin>>b;
   if(b>a)
   {
      c=a;//second largest
      a=b;//largest
   }

   else
    c=b;//second largest
   counter=counter+1;
   while(counter<10)
   {
       cout<<"Enter next number:";
       cin>>b;
       if(b>a)
       {
            c=a;
            a=b;
       }
       else if(b>c)//compare next number with the second largest number
        c=b;
        a=a;

       counter=counter+1;
   }
   cout<<"Largest number is:"<<a<<endl;
   cout<<"Larger number is:"<<c<<endl;


return 0;

}
