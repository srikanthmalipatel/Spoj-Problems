#include<stdio.h>

int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n;
scanf("%d",&n);
double ans;
ans = (3.0/4.0) + (1.0/(2*(n+2)))-(1.0/(2*(n+1)));
printf("%.11f\n",ans);
}
return 0;
}

