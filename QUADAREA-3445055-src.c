#include<stdio.h>
#include<math.h>

int main()
{
    int t,i;
    double a,b,c,d;
    double area;
    double s;
    scanf("%d",&t);
    for(i=1 ; i<=t ; i++)
    {
        s = 0;
        area = 1;
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        s = (a+b)+(c+d);
        s = s/2;
        area = (s-a)*(s-b)*(s-c)*(s-d);
        area = pow(area,.5);
        printf("%.2lf\n",area);
    }
    return 0;
}
