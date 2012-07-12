#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<math.h>

#define epsilon 0.00000001
using namespace std;

float a[500];
int main()
{
int t;
int n,m,i;
float d,x,maxm,f;
scanf("%d",&t);
while(t--)
{
maxm=0.00000;
for(i=0;i<n;i++)
{
a[i]=0;
}
scanf("%d %d %f",&n,&m,&d);
for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
x=a[i]/d;
f=floor(x);
if(modf(x,&f)<=epsilon)
{
maxm+=(f-1);
}
else
{
maxm+=f;
}
// printf("%f\n",maxm);

}
if(int(maxm)>=m)
{
printf("YES\n");
}
else
{
printf("NO\n");
}

}
return 0;
}

