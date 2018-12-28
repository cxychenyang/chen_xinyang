#include <iostream>

	using namespace std;

	int main()
	{
	    long value1=200000;
	    long value2=0;
	    long *Prt=&value1;//question a and b
	    cout<<*Prt<<endl;//question c
	    value2=*Prt;//question d
	    cout<<value2<<endl;//question e
	    cout<<&value1<<endl;//question f
	    cout<<Prt<<endl;//question g
	    	}
