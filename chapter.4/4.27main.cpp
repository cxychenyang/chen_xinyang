#include<iostream>
using namespace std;
int main()
{
int a=0;//��ת���Ķ�������
int b=1;
int c=0;//�ó��Ľ��
int d=0;//aȡ����ֵ
cout<<"����һ����������:"<<a<<endl;
cin>>a;
while(a>0)
{
    d=a%10;//��aȡ��
    c=c+b*d;//��aȡ���������Զ�Ӧ���Ĵη����ۼ�
    a=a/10;//��a����ȡ��
    b=b*2;//ÿѭ��һ��bֵ����2
}
cout<<"ʮ��������:"<<c<<endl;
return 0;

}

