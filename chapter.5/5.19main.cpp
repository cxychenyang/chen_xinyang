#include <iostream>
#include <iomanip> // parameterized stream manipulators
using namespace std;

int main()
{
   long double pai=0.0;
   long double fenmu=1.0;
   long int times=1000;
   cout<<fixed<<setprecision(15);//can set precision
   cout << "Times: "<<times;//1000 times
   for(int counter=1;counter<=times;counter++)
   {
       if(counter%2==0)
        pai=pai-4.0/fenmu;
       else
        pai=pai+4.0/fenmu;
       fenmu=fenmu+2;
       cout<<"Pai is:"<<pai<<endl;
   }
}
