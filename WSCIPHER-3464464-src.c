#include<stdio.h>
#include<string.h>
#define MAX 82
int k1,k2,k3,i,j,k,l,e,f,g;
char temp,temp1;
char s[MAX],ai[MAX],jr[MAX],sz[MAX];
int a[MAX],b[MAX],c[MAX];

int main()
{
    scanf("%d%d%d",&k1,&k2,&k3);
    while((k1!=0)&&(k2!=0)&&(k3!=0))
    {
        scanf("%s",s);
        //printf("%s",s);
        for(i=0,j=0,k=0,l=0 ; s[i]!='\0' ; i++)
        {
             if((s[i]>='a')&&(s[i]<='i'))
             {
                ai[j]=s[i];
                a[j]=i;
                j++;
             }
             else if(s[i]>='j'&&s[i]<='r')
             {
                jr[k]=s[i];
                b[k]=i;
                k++;
             }
             else if(s[i]>='s'&&s[i]<='z')
             {
                sz[l]=s[i];
                c[l]=i;
                l++;
             }
             else if(s[i]=='_')
             {
                 sz[l]=s[i];
                 c[l]=i;
                 l++;
             }
        }
        //printf("%d\n",l);
        ai[j]='\0';
        jr[k]='\0';
        sz[l]='\0';
        //printf("%s\n",ai);
        if(j!=0)
        {
        for(i=1 ; i<=(k1%j) ; i++)
        {
            for(e=0;e<j;e++)
            {
                if(e==0)
                {
                    temp = ai[1];
                    ai[1] = ai[0];
                }
                else if(e==(j-1))
                {
                    ai[0] = temp;
                }
                else
                {
                    temp1 = ai[e+1];
                    ai[e+1] = temp;
                    temp = temp1;
                }
            }
        }
        }
        //printf("%s\n",ai);
        if(k!=0)
        {
         for(i=1 ; i<=(k2%k) ; i++)
        {
            for(e=0;e<k;e++)
            {
                if(e==0)
                {
                    temp = jr[1];
                    jr[1] = jr[0];
                }
                else if(e==(k-1))
                {
                    jr[0] = temp;
                }
                else
                {
                    temp1 = jr[e+1];
                    jr[e+1] = temp;
                    temp = temp1;
                }
            }
        }
        }
        //printf("%s\n",jr);
        if(l!=0)
        {
        for(i=1 ; i<=(k3%l) ; i++)
        {
            for(e=0;e<l;e++)
            {
                if(e==0)
                {
                    temp = sz[1];
                    sz[1] = sz[0];
                }
                else if(e==(l-1))
                {
                    sz[0] = temp;
                }
                else
                {
                    temp1 = sz[e+1];
                    sz[e+1] = temp;
                    temp = temp1;
                }
            }
        }
        }
        //printf("%s\n",sz);
        for(i=0 ; i<j ; i++) s[a[i]] = ai[i];
        for(i=0 ; i<k ; i++) s[b[i]] = jr[i];
        for(i=0 ; i<l ; i++) s[c[i]] = sz[i];
        printf("%s\n",s);
        scanf("%d%d%d",&k1,&k2,&k3);
    }
    return 0;
}
