#include<stdio.h>
#define MAX 20001
typedef struct{
    int a;
    int b;
}arr;

int main()
{
    int i;
    arr a[MAX];
    int j,sum,sum1,sum2,n1,n2;
    scanf("%d",&n1);
    while(n1 != 0)
    {
        for(i = 0; i < MAX ; i++)
        {
            a[i].a = 0;
            a[i].b = 0;
        }
        for(i = 0 ; i < n1 ; i++ )
        {
            scanf("%d",&j);
            if(j == 0) a[10000].a = 1;
            else a[10000 + j].a = 1;
        }
        scanf("%d",&n2);
        for(i = 0 ; i < n2 ; i++)
        {
            scanf("%d",&j);
            if(j == 0)a[10000].b = 1;
            else a[j+10000].b = 1;
        }
        sum = 0;
        for(i = 0 ; i < MAX ; i++)
        {
            for(sum1 = 0 , sum2 = 0 ; !(a[i].a == 1 && a[i].b == 1) && i < MAX ; i++)
            {
                    if(a[i].a == 1 && a[i].b == 0) sum1 =sum1 + i - 10000 ;
                    else if (a[i].b == 1 && a[i].a == 0)sum2 = sum2 + i - 10000;
            }
            if(i < MAX) sum += i - 10000;
            if(sum1 > sum2) sum+=sum1;
            else sum+=sum2;
        }
        printf("%d\n",sum);
        scanf("%d",&n1);
    }
    return 0;
}
