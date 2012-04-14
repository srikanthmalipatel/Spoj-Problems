#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    int a,b,m;
    char IN[5];
    cin>>a>>b;
    while(1){
        if(a>b) break;
        m=(a+b)/2;
        printf("%d\n",m);
        fflush(stdout);
        scanf("%s",IN);
        if(strcmp(IN,"WIN")==0) break;
        if(strcmp(IN,"LOW")==0) a=m+1;
        if(strcmp(IN,"HIGH")==0) b=m-1;
    }
    return 0;
}