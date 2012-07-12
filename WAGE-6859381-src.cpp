#include<iostream>
using namespace std;

int main(){
    char s1[101][101],s2[101][101];
    int cases,r,c,n;
    cin>>cases;
    while(cases--){
        cin>>r>>c>>n;
        for(int a=0;a<r;a++)for(int b=0;b<c;b++){ cin>>s1[a][b]; s2[a][b]=s1[a][b]; }
        while(n--){
            for(int a=0;a<r;a++)for(int b=0;b<c;b++){
                if(s1[a][b]=='W')
                    {if(s2[a+1][b]=='G'||s2[a-1][b]=='G'||s2[a][b-1]=='G'||s2[a][b+1]=='G')s1[a][b]='G';}
                else if(s1[a][b]=='A')
                    {if(s2[a+1][b]=='W'||s2[a-1][b]=='W'||s2[a][b-1]=='W'||s2[a][b+1]=='W')s1[a][b]='W';}
                else if(s1[a][b]=='G')
                    {if(s2[a+1][b]=='A'||s2[a-1][b]=='A'||s2[a][b-1]=='A'||s2[a][b+1]=='A')s1[a][b]='A';}
            }
            for(int a=0;a<r;a++)for(int b=0;b<c;b++)s2[a][b]=s1[a][b];
        }
        for(int a=0;a<r;a++){
            for(int b=0;b<c;b++)cout<<s1[a][b];
            cout<<endl;
        }
    }
}
