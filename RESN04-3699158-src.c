#include<stdio.h>
#define MAX 100

int main()
{
    int t,n,i,p,j,q;
    int a[MAX];
    scanf("%d",&t);
    for( i = 0 ; i < t ; i++ )
    {
        scanf("%d",&n);
        for( j = 0 ; j < n ; j++ ) scanf("%d",&a[j]);
        p = 0;
        for( j = 0 ; j < n ; j++ )
        {
            if(a[j] >= (j+1))
            {
                p += a[j]/(j+1);
            }
        }
        
        if(p%2==1) printf("ALICE\n");
        else printf("BOB\n");
    }
    return 0;
}
