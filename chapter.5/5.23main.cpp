#include <iostream>
using namespace std;

int main()
{
    int line = 5;
    int i,j,k;
    for(i = 0;i <=line;i++){
        for(j = 0;j < line - i;j++)
        cout<<" ";
        for(k = 1;k <= 2*i -1;k++)
            {
            cout<<'*';
        }
        cout<<endl;
    }
    for(i = line - 1;i >= 0;i--)
        {
        for(j = line - i;j >0;j--)
        cout<<" ";
        for(k = 2*i -1;k >= 1;k--){
            cout<<'*';
        }
        cout<<endl;
    }
}
