#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    //FILE * fp=fopen("in.txt","r");
    int t;
    double val;
    char str[3];
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++)
    {
        scanf("%lf %s",&val,str);
        //printf("%lf %s\n",val,str);
        if(strlen(str)==2)
        {
            if(str[0]=='k')
            {
                printf("%d %.4lf lb\n",i,val*2.2046);
            }
            else
            {
                printf("%d %.4lf kg\n",i,val*0.4536);
            }
        }
        else
        {
               if(str[0]=='l')
               {
                   printf("%d %.4lf g\n",i,0.2642*val);
               }
               else
               {
                   printf("%d %.4lf l\n",i,val*3.7854);
               }
        }
    }
    return 0;
}

