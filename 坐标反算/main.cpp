#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdio>
using namespace std;

const double Pi = 3.14159265358979323;
int main()
{
    double xa,xb,ya,yb;
    double dx,dy,tga,a,s,b;
    while(scanf("%lf %lf %lf %lf",&xa,&ya,&xb,&yb)!=EOF)
    {
        dx = xb-xa;
        dy = yb-ya;
        double tgsa = (yb-ya)/(xb-xa);
        /*��λ��-����*/
        b = atan(tgsa);
        while(true)
        {
            if(dy>0&&dx>0)
            {
                b=b;//һ����
            }
            if(dy<0&&dx<0)
            {
                b+= Pi;//������
            }
            if(dy>0&&dx<0)
            {
                b+=Pi;//������
            }
            if(dy<0&&dx>0)
            {
                b+=2*Pi;//������
            }
            break;
        }

        a = b*180/Pi;//��Ϊ�ȷ���
        int DE = a;//��
        int MI = (a-DE)*60;//��
        double SE = ((a-DE*1.0)*60-MI*1.0)*60;//��
        s = sqrt(pow(dy,2)+pow(dx,2));//����
        cout<<"dx = "<<setiosflags(ios::fixed)<<setprecision(3)<<dx<<",dy = "<<dy<<endl;
        cout<<"���� = "<<setiosflags(ios::fixed)<<setprecision(9)<<b<<endl;
        cout<<"�� = "<<setiosflags(ios::fixed)<<setprecision(8)<<a<<endl;
        cout<<"���� = "<<setiosflags(ios::fixed)<<setprecision(3)<<s<<endl;
        cout<<"�� = "<<DE<<",�� = "<<MI<<",�� = "<<setiosflags(ios::fixed)<<setprecision(2)<<SE<<endl;
    }
    return 0;
}
