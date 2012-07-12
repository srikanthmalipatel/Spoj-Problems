#include<cstdio>

int main(){
    int t,c;
    double i;
    scanf("%d",&t);
    for(int a=1;a<=t;a++){
        scanf("%d",&c);
        i=((double)c)*((double)c)*4+0.25;;
        printf("Case %d: %.2f\n",a,i);
    }
}

