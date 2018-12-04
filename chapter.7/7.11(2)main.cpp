#include <iostream>
#include<iomanip>
#include<array>
using namespace std;

int main()
{
   array<int,15>bonus={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
   for(int bonu :bonus)
    cout<<bonu<<"";
   for(int &bonuRef :bonus)
   bonuRef+=1;
   for(int bonu:bonus)
    cout<<bonu<<"";
}
