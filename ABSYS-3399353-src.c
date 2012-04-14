#include <stdio.h>
#define max 1000
int main (void)
{
   int  n,num1,num2,num3,j,i;
   char s1[max],s2[max],s3[max];
   char sp1,sp2,sp3,sp4,e,p;


   scanf("%d",&n);
   for (i=1;i<=n;i++)
{

scanf("%s%c%c%c%s%c%c%c%s",s1,&sp1,&p,&sp2,s2,&sp3,&e,&sp4,s3);
       for(j=0,num1=0,num2=0,num3=0;s1[j]!='\0';j++)
       {

          num1=(num1*10)+(s1[j]- '0');
          if (s1[j] =='m')
          {
             num1=0;
             break;
          }
       }
       for(j=0;s2[j]!='\0';j++)
       {
             num2=(num2*10)+(s2[j]-'0');
             if (s2[j] =='m')
             {
                     num2=0;
                     break;
             }
       }
       for(j=0;s3[j]!='\0';j++)
       {
            num3=(num3*10)+(s3[j]-'0');
            if (s3[j] =='m')
            {
              num3=0;
              break;
            }
       }
    if (num1==0)
        num1=(num3-num2);
    else if (num2==0)
        num2=(num3-num1);
    else
        num3=(num1+num2);
  printf( "%d + %d = %d\n",num1,num2,num3);
}

    return(0);
    }
