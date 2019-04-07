#include <iostream>
#include <iomanip>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;
int main()
{
   Package package1( "chen", "sdkjdx", "qingdao", "shandong", 266500,
      "yang", "sdkjdxt", "taian", "shandong", 271600 );
   TwoDayPackage package2( "sha","sdkjdx","qingdao","shandong",266500
                          ,"dfwfw","sdkjdx","qingdao","shandong",271600);
   OvernightPackage package3( "ttrhth","dsfg","qingdao","shandong",478888,"ewfefe","htyjyj"£¬"linyi","shandong",880079);
   cout << fixed << setprecision( 2 );
   cout << "Package 1:\n\nSend:\n" << package1.getSendName()
      << '\n' << package1.getSendAdress() << '\n'
      << package1.getSendCity() << ", " << package1.getSendState()
      << ' ' << package1.getSendCode();
   cout << "\n\nReceiver:\n" << package1.getReceiverName()
      << '\n' << package1.getReceiverAdress() << '\n'
      << package1.getReceiverCity() << ", "
      << package1.getReceiverState() << ' '
      << package1.getReceiver.Code();
   cout << "\n\nCost: $" << package1.calculateCost() << endl;

   cout << "\nPackage 2:\n\nSend:\n" << package2.getSendName()
      << '\n' << package2.getSendAdress() << '\n'
      << package2.getSendCity() << ", " << package2.getSendState()
      << ' ' << package2.getSendCode();
   cout << "\n\nReceiver:\n" << package2.getReceiverName()
      << '\n' << package2.getReceiverAdress() << '\n'
      << package2.getReceiverCity() << ", "
      << package2.getReceiverState() << ' '
      << package2.getReceiverCode();
   cout << "\n\nCost: $" << package2.calculateCost() << endl;

   cout << "\nPackage 3:\n\nSend:\n" << package3.getSendName()
      << '\n' << package3.getSendAdress() << '\n'
      << package3.getSendCity() << ", " << package3.getSendState()
      << ' ' << package3.getSendCode();
   cout << "\n\nReceiver:\n" << package3.getReceiverName()
      << '\n' << package3.getReceiverAdress() << '\n'
      << package3.getReceiverCity() << ", "
      << package3.getReceiverState() << ' '
      << package3.getReceiverCode();
   cout << "\n\nCost: $" << package3.calculateCost() << endl;
}
