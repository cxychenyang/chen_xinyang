#include <iostream>
using namespace std;

int main()
{
  int factorial=1;
  for(int i=1;i<=5;i++)
  {
      factorial=factorial*i;

  cout<<i<<'\t'<<factorial<<endl;
  }
}
