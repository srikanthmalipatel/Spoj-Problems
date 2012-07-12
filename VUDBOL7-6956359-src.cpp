#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<algorithm>
//#define CONTEST
#define DEBUG
using namespace std;

#define p(n) printf("%d\n",n);
#define s(fp,n) fscanf(fp,"%d",&n);
#define FOR(i,j) for(int i=0;i<j;i++)
#define MAX 200

typedef unsigned long long int ULL;
vector<ULL> fib;
int N;

void solve(FILE* fp){
    N=50;
    fib.push_back(0);
    fib.push_back(1);
    for(int i=2;i<N;i++){
        fib.push_back(fib[i-1]+fib[i-2]);
    }
    s(fp,N);
    while(N!=0){
        vector<ULL>::iterator low;
        vector<ULL>res;
        for(int i=0;i<N;i++){
            int val;
            s(fp,val);
            low=lower_bound (fib.begin(), fib.end(), val);
            if((*low-val)>(val-(*(low-1)))){
                res.push_back(*(low-1));
                 //printf("lower bound for val %d is %d\n",val,*(low-1));
            }
            else{
                res.push_back(*(low));
                //printf("lower bound for val %d is %d\n",val,*low);
            }
        }
        sort(res.begin(),res.end());
        for(low=res.begin();low<res.end();low++){
            printf("%d ",*low);
        }
        printf("\n");
        res.clear();
        s(fp,N);
    }
}
int main(){
    #ifdef CONTEST
    FILE *fp=fopen("in.txt","r");
    #else
    FILE *fp=stdin;
    #endif
    solve(fp);
    return 0;
}
