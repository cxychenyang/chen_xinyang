#include <iostream>
using namespace std;

int main()
{
   const int SIZE = 20;
   int a[ SIZE ] = {};
   int m = 0;
   int n;
   int value;

   cout << "Enter 20 integers between 10 and 100:\n";


   for ( int i = 0; i < SIZE; )
   {
     n = 0;
      cin >> value;


      if ( value >= 10 && value <= 100 )
      {
         for ( int j = 0; j <m; j++ )
         {
            if ( value == a[ j ] )
            {
               n = 1;
               break;
            }
         }


         if ( !n )
         {
            a[ m++ ] = value;
            ++i;
         }
         else
            cout << "Duplicate number.\n";
      }
      else
         cout << "Invalid number.\n";
   }
   cout << "\nThe not duplicate values are:\n";

   for ( int i = 0; i < SIZE; i++ )
      cout << a[ i ] << ' ';

   cout << endl;
}
