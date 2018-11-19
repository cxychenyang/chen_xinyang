#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int flip();

int main()
{
   int headsCount=0;
   int tailsCount=0;
   srand(time(0));
   for(int a=1;a<=10000;++a)
   {
       if(flip()==0)
       {
          ++tailsCount;
          cout<<"Tails";

       }
       else
       {
           ++headsCount;
           cout<<"Heads";
       }
       if(a%10==0)
        cout<<endl;
   }



    cout << "\nThe total number of Heads was " << headsCount
      << "\nThe total number of Tails was " << tailsCount << endl;
}
int flip()
{
    return rand()%2;
}
