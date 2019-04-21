#ifndef CHECKINGACCOUNT_H_INCLUDED
#define CHECKINGACCOUNT_H_INCLUDED

#include "Account.h"

class CheckingAccount : public Account
{
public:
   CheckingAccount( double, double );
   virtual void credit( double );
   virtual bool debit( double );
private:
   double transactionFee;

   void chargeFee();
};

#endif
