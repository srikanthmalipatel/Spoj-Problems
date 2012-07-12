#include <iostream>
using namespace std;

long long ceilb2(long long n){
    if(n%2==1) return n/2+1;
    else return n/2;
}

long long f(long long n, int p){
    if(n<3){ cout<<"ERROR"<<endl; return 0;}
    if(n==3){ return 3-p;}
    else{
        if(p==0) p=1;
        else if(p==1){
            if(n%2==0) p=1;
            else p=2;
        }
        else{
            p=2;
        }
        return( f( ceilb2(n)+1,p) +1);
    }
}

int main(){
    long long t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n==3) cout<<3<<endl;
        else cout<<f(n,0)<<endl;
    }
    return 0;
}