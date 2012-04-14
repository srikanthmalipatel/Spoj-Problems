#include<stdio.h>

int main()
{
    int n,x,y,i,p1,p2,sum1,sum;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        scanf("%d%d",&x,&y);
        sum = x+y;
        sum1 = x+y-1;
        p1 = x;
        p2 = x-2;
        if(x%2==0 && x==y)printf("%d\n",sum);
        else
        {
            if(x%2==0 && ((y==p1) || (y==p2)))printf("%d\n",sum);
            else if(x%2==1 && ((y==p1) || (y==p2)))printf("%d\n",sum1);
            else printf("No Number\n");
        }
    }
    return 0;
}
