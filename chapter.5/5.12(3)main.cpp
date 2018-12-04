#include <iostream>
using namespace std;
int chang;
int kuan;
int space;
int main()
{
  for ( chang= 10; chang>= 1; chang-- )
   {
      for ( space = 10; space >chang; space-- )
         cout << " ";
        for ( kuan = 1; kuan<= chang; kuan++ )
         cout << "*";
         cout << endl;
   }
}
