#include<stdio.h>
#include<limits.h>
#define MAX 1000005
typedef long long int LL;
LL dp[MAX][4];
LL arr[MAX][4];
LL N,M;
FILE* out;
bool inbounds(int i,int j)
{
    if(i>=0 && i<=N && j>=0 && j<=M)
    return true;
    return false;
}
LL min(LL a,LL b)
{
    if(a>b)
    return b;
    return a;
}
void solve(int index)
{
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            dp[i][j]=INT_MAX;
        }
    }
    for(int i=0;i<3;i++) dp[0][i]=arr[0][i];

   dp[1][0]=arr[0][1]+arr[1][0];
   dp[1][1]=min((arr[0][1]+arr[1][1]),(arr[0][1]+arr[0][2]+arr[1][1]));
   dp[1][2]=min((arr[0][1]+arr[1][2]),(arr[0][1]+arr[0][2]+arr[1][2]));

    for(int i=1;i<N;i++){
        for(int j=0;j<3;j++){
            if(j==0){
                dp[i][j+1]=min(dp[i][j+1],dp[i][j]+arr[i][j+1]);
                dp[i+1][j+1]=min(dp[i+1][j+1],dp[i][j]+arr[i+1][j+1]);
                dp[i+1][j]=min(dp[i+1][j],dp[i][j]+arr[i+1][j]);
            }
            else if(j==1){
                dp[i+1][j-1]=min(dp[i+1][j-1],dp[i][j]+arr[i+1][j-1]);
                dp[i+1][j]=min(dp[i+1][j],dp[i][j]+arr[i+1][j]);
                dp[i+1][j+1]=min(dp[i+1][j+1],dp[i][j]+arr[i+1][j+1]);
                dp[i][j+1]=min(dp[i][j+1],dp[i][j]+arr[i][j+1]);
            }
            else{
                dp[i+1][j-1]=min(dp[i+1][j-1],dp[i][j]+arr[i+1][j-1]);
                dp[i+1][j]=min(dp[i+1][j],dp[i][j]+arr[i+1][j]);
            }
        }
    }
    /*for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            printf("%llu ",dp[i][j]);
        }
        printf("\n");
    }*/
    printf("%d. %lld\n",index,dp[N-1][1]);
}
int main()
{
    //FILE *fp=fopen("tri.in","r");
    FILE *fp=stdin;
    int index=1;
   // out=fopen("out.txt","w");
    fscanf(fp,"%lld",&N);
    while(N!=0){
        for(int i=0;i<N;i++){
            for(int j=0;j<3;j++)
            fscanf(fp,"%lld",&arr[i][j]);
        }
        solve(index);
        index++;
        fscanf(fp,"%lld",&N);
    }
    return 0;
}
