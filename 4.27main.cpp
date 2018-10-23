#include<iostream>
using namespace std;
int main()
{
int a=0;//需转化的二进制数
int b=1;
int c=0;//得出的结果
int d=0;//a取余后的值
cout<<"输入一个二进制数:"<<a<<endl;
cin>>a;
while(a>0)
{
    d=a%10;//将a取余
    c=c+b*d;//用a取余后的数乘以对应二的次方再累加
    a=a/10;//对a进行取整
    b=b*2;//每循环一次b值乘以2
}
cout<<"十进制数是:"<<c<<endl;
return 0;

}

