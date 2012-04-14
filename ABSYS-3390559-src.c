#include<stdio.h>
#define MAX 35000

int main()
{
    int i,t,j,num1,num2,num3;
    char s1[MAX];
    char s2[MAX];
    char s3[MAX];
    char sp1,sp2,sp3,sp4,p,e;
    scanf("%d",&t);
    for(i = 1; i <= t; i++)
    {
        num1 = 0;
        num2 = 0;
        num3 = 0;
        scanf("%s%c%c%c%s%c%c%c%s",&s1,&sp1,&p,&sp2,s2,&sp3,&e,&sp4,s3);
        j = 0;
        while(s1[j] != '\0' && s1[j] != 'm')
        {
             num1 = (num1*10) + (s1[j] - '0');
             j++;
        }
        if(s1[j] == 'm')
        {
             num1 = 0;
        }
        j = 0;
        while(s2[j] != '\0' && s2[j] != 'm')
        {
             num2 = (num2*10) + (s2[j] - '0');
             j++;
        }
        if(s2[j] == 'm')
        {
             num2 = 0;
        }
        j = 0;
        while(s3[j] != '\0' && s3[j] != 'm')
        {
             num3 = (num3*10) + (s3[j] - '0');
             j++;
        }
        if(s3[j] == 'm')
        {
             num3 = 0;
        }
        if(num1 == 0 || num2 == 0)
        {
             if(num1 == 0 )
             {
                 num1 = num3 - num2;
             }
             else
                 num2 = num3 - num1;
        }
        else
            num3 = num1 + num2;
        printf("%d + %d = %d\n",num1,num2,num3);
    }
    return 0;
}
