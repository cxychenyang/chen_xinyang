#include <iostream>
using namespace std;
int chang;
int kuan;
int main()
{
   for ( chang = 10; chang >= 1; chang-- )
   {
      for ( kuan= 1; kuan <= chang; kuan++ )
        cout << "*";
        cout << endl;
   }

}
