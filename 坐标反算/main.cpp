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
        /*方位角-弧度*/
        b = atan(tgsa);
        while(true)
        {
            if(dy>0&&dx>0)
            {
                b=b;//一象限
            }
            if(dy<0&&dx<0)
            {
                b+= Pi;//三象限
            }
            if(dy>0&&dx<0)
            {
                b+=Pi;//二象限
            }
            if(dy<0&&dx>0)
            {
                b+=2*Pi;//四象限
            }
            break;
        }

        a = b*180/Pi;//化为度分秒
        int DE = a;//度
        int MI = (a-DE)*60;//分
        double SE = ((a-DE*1.0)*60-MI*1.0)*60;//秒
        s = sqrt(pow(dy,2)+pow(dx,2));//距离
        cout<<"dx = "<<setiosflags(ios::fixed)<<setprecision(3)<<dx<<",dy = "<<dy<<endl;
        cout<<"弧度 = "<<setiosflags(ios::fixed)<<setprecision(9)<<b<<endl;
        cout<<"度 = "<<setiosflags(ios::fixed)<<setprecision(8)<<a<<endl;
        cout<<"距离 = "<<setiosflags(ios::fixed)<<setprecision(3)<<s<<endl;
        cout<<"度 = "<<DE<<",分 = "<<MI<<",秒 = "<<setiosflags(ios::fixed)<<setprecision(2)<<SE<<endl;
    }
    return 0;
}
