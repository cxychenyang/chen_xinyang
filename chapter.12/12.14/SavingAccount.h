#ifndef SAVINGACCOUNT_H_INCLUDED
#define SAVINGACCOUNT_H_INCLUDED
#include "Account.h"
class SavingsAccount : public Account
{
public:
   double calculateInterest();
private:
   double interestRate;
};


#endif D
