#include<stdio.h>
#include<math.h>
int main()
{
    int test;
    double a,b,c,d,s,area;
    scanf("%d",&test);
    while(test!=0)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        s=(a+b+c+d)/2;
        area=sqrt(((s-a)*(s-b)*(s-c)*(s-d)));
        printf("%lf\n",area);
        test--;
    }
    return 0;
}