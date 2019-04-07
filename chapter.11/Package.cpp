#include<iostream>
#include<string>
#include"Package.h"
using namespace std;
Package::Package(const string &SendName,const string &SendAdress,const string &SendCity,const string &SendState,
                 int SendCode,const string &ReceiverName,const string &ReceiverAdress,const string &ReceiverCity
                 const string &ReceiverState, int ReceiverCode,double Weight,double Perounce);
 :SendName(SendName),SendAdress(SendName),SendCity(SendCity),SendState(SendState),SendCode(SendCode);
 ReceiverName(ReceiverName),ReceiverAdress(ReceiverAdress),ReceiverCity(ReceiverCity),ReceiverState(ReceiverState),ReceiverCode(ReceiverCode);
 {
     set Weight(Weight);
     set PerounceCost(PerounceCost);
 }
 void Package::setSendName(const string&name)
 {
     SendName=name;
 }
 string Package::getSendName()const
 {
     return SendName;
 }
 void Package::setSendAdress(const string&adress)
 {
     SendAdress=adress;
 }
 string Package::getSendAdress()const
 {
     return SendAdress;
 }
 void Package::setSendCity(const string&city)
 {
     SendCity=city;
 }
 string Package::getSendCity()const
 {
     return SendCity;
 }
void Package::setSendState(const string state)
 {
     SendState=state;
 }
 string Package::getSendState()const
 {
     return SendState;
 }
 void Package::setSendCode(int code)
 {
     SendCode=code;
 }
 int Package::getSendCode()const
 {
     return code;
 }
 void Package::setReceiverName(const string name)
 {
     ReceiverName=name;
 }
 string Package::getReceiverName()const
 {
     return ReceiverName;
 }
 void Package::setReceiverAdress(const string adress)
 {
     ReceverAdress=adress;
 }
 string Package::getReceiverAdress()const
 {
     return ReceverAdress;
 }
 void Package::setReceiverCity(const string &city)
 {
     receiverCity=city;
 }
 string Package::getReceiverCity()const
 {
     return receiverCity;
 }
 void Package::setReceiverState(const string &state)
 {
     receiverState=state;
 }
 string Package::getReceiverState()const
 {
     return receiverState;
 }
 void Package::setReceiverCode(int code)
 {
     receiverCode=code;
 }
 int Package::getReceiverCode()const
 {
     return receiverCode;
 }
 void::Package::setWeight(double weight)
 {
     if(weight>0)
     {
         weight=weight;
     }
     else
     {
         weight=0;
     }
 }
 double Package::getWeight()const
 {
     return Weight;
 }
 void Package::setCostPerOunce(double PerOunceCost)
 {
     costPerOunce=(PerOunceCost<0.0)?0.0:PerOunceCost;
 }
 double Package::getCostPerOunce()const
 {
     return CostPerOunce;

 }
 double Package::calculateCost()const
 {
     return getWeight()*getCostPerOunce();
 }


