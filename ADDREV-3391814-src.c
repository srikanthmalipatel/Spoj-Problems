#include<stdio.h>

int main()
{
     int num1,num2,num,i;
     char t;
     int newnum1,newnum2,sum;
     scanf("%d",&num);
     newnum1 = 0;
     newnum2 = 0;
     for(i=1;i <= num;)
     {
        newnum1 = 0;
        newnum2 = 0;
        scanf("%d%c%d",&num1,&t,&num2);
        while(num1 != 0 )
        {
           newnum1 = (newnum1*10) + num1%10;
           num1 = num1/10;
        }
        while(num2 != 0 )
        {
           newnum2 = (newnum2*10) + num2%10;
           num2 = num2/10;
        }
        sum = newnum1 + newnum2;
        num1 = 0;
        while(sum != 0 )
        {
            num1 = (num1*10) + sum%10;
            sum = sum/10;
        }
        printf("%d\n",num1);
        i++;
     }
     return 0;
}
