#include<stdio.h>
#include<string.h>
#define MAX 10000
int main()
{
    char a[MAX];
    int n,i,j,br,len,k,p;
    scanf("%s",a);
    while(a[0]!='.')
    {
        scanf("%d",&n);
        br = strlen(a);
        len = br*n;
        for(j=0 ; j<br ; j++)
        {
            p = j+len;
            k=0;
            for(i=j; i<p ; i++)
            {
                if(i<br) printf("%c",a[i]);
                else if((k<br)&&(i>=br))
                {
                     printf("%c",a[k]);
                     k++;
                }
                else if((k>=br)&&(i>=br))
                {
                    k=0;
                    printf("%c",a[k]);
                    k++;
                }
            }
            printf("\n");
        }
        printf("\n");
        scanf("%s",a);
    }
    return 0;
}
