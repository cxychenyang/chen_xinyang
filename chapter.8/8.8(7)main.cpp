#include <iostream>

	using namespace std;

	int main()
	{
	    unsigned int values[5]={2,4,6,8,10};
	    unsigned int *vPtr=values;
	    for(size_t i=0;i<=4;i++)
	        cout<<vPtr[i]<<endl;
	}
