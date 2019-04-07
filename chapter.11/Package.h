#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

#include<string>
#include<iostream>
using namespace std;
class Package
{


public:
    Package(const string&,const string&,const string&,const string&,int,const string,const string&,const string&,
            const string&,int,double,double);
    void setSendName(const string&);
    string getSendName()const;
    void setSendAdress(const string&);
    string getSendAdress()const;
    void setSendCity(const string&);
    string getSendCity()const;
    void setSendState(const string&);
    string getSendState()const;
    void setSendCode(const string&);
    string getSendCode()const;

    string getReceiverName()const;
    void setReceiverAdress(const string&);
    string getReceiverAdress()const;
    void setReceiverCity(const string&);
    string getReceiverCity()const;
    void setReceiverState(const string&);
    string getReceiverState()const;
    void setReceiverCode(const string&);
    string getReceiverCode()const;
    void setWeight(double);
    double getWeight()const;
    void setPerounceCost(double);
    double getPerounceCost()const;
    double calculateCost()const;
private:
    string SendName;
    string SendAdress;
    string SendCity;
    string SendState;
    int SendCode;
    string ReceiverName;
    string ReceiverAdress;
    string ReceiverCity;
    string ReceiverState;
    int ReceiverCode;
    double Weight;
    double PerounceCost;
};
#endif // PACKAGE_H_INCLUDED
