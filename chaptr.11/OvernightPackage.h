#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include<iostream>
#include "Package.h"

class OvernightPackage : public Package
{
public:
   OvernightPackage( const string &, const string &, const string &,
      const string &, int, const string &, const string &, const string &,
      const string &, int, double, double, double );

   void setOvernightFeePerOunce( double );
   double getOvernightFeePerOunce() const;

   double calculateCost() const;
private:
   double overnightFeePerOunce;
};
#endif


