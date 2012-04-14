#include<stdio.h>
#define MAX 84
int main()
{
    int n,m,j,i,k;
    char a[MAX];
    scanf("%d",&n);
    for(i=1,k=1 ; i<=n ; i++)
    {
        scanf("%d%s",&m,a);
        printf("%d ",k);
        for(j=0;a[j]!='\0';j++)
        {
            if(j!=m-1) printf("%c",a[j]);
        }
        k++;
        printf("\n");
    }
    return 0;
}
