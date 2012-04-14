#include<stdio.h>

int main()
{
     int n,k,t,f,i,p,sum,temp;
     scanf("%d",&p);
     for(i=1 ; i<=p ; i++)
     {
         sum = 0;
         scanf("%d%d%d%d",&n,&k,&t,&f);
         temp = n;
         temp = temp + (k*(f-n))/(k-1);
         sum = temp;
         printf("%d\n",sum);
     }
     return 0;
}
