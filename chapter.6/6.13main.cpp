#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double x;
double y;
int main()
{
  cout<<fixed;
  cout<<"Enter number:";
  cin>>x;
  while(x>0)
  {
      y=floor(x+0.5);
      cout<<"x is:"<<x<<endl;
      cout<<"y is:"<<y<<endl;
      cout<<"Enter number:";
      cin>>x;

  }
}




