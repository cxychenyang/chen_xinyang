#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int line;
    int i,j,k;
    cout<<"Please enter line(1 to 19):";
    cin>>line;
    for(i = 0;i <=line;i++){
        for(j = 0;j < line - i;j++)
        cout<<" ";
        for(k = 1;k <= 2*i -1;k++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(i = line - 1;i >= 0;i--){
        for(j = line - i;j >0;j--)
        cout<<" ";
        for(k = 2*i -1;k >= 1;k--){
            cout<<'*';
        }
        cout<<endl;
    }
}
