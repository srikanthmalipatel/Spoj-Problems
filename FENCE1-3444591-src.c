#include<stdio.h>
#include<math.h>
int main()
{
     double area;
     int l;
     scanf("%d",&l);
      //den = 2*M_PI;
     while(l!=0)
     {
         area = (l*l);
         area = area/(2*M_PI);
         //area+=0.005;
         printf("%.2lf\n",area);
         scanf("%d",&l);
     }
     return 0;
}
