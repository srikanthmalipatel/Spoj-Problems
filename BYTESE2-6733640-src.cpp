#if defined(_MSC_VER)
#define _CRT_SECURE_NO_WARNINGS
#include <boost/typeof/typeof.hpp>
#define typeof BOOST_TYPEOF
#endif
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <numeric>
#include <valarray>
#include <complex>
using namespace std;

const int dr[]={0,-1,0,1,-1,1, 1,-1};
const int dc[]={1,0,-1,0, 1,1,-1,-1};
const double eps=1e-9;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef pair<double, double> pdd;
typedef vector<pdd> vpdd;
typedef complex<double> pnt;
typedef vector<pnt> vpnt;
typedef vector<vector<pair<int, long long> > > Graph;

#define fr(i,a,b) for(int i(a),_b(b);i<=_b;++i)
#define frd(i,a,b) for(int i(a),_b(b);i>=_b;--i)
#define rep(i,n) for(int i(0),_n(n);i<_n;++i)
#define repd(i,n) for(int i((n)-1);i>=0;--i)
#define reps(i,a) fr(i,0,sz(a)-1)
#define all(a) a.begin(),a.end()
#define pb push_back
#define mp make_pair
#define fore(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define maximum(a) (*max_element(all(a)))
#define minimum(a) (*min_element(all(a)))
#define clr(x,a) memset(x,a,sizeof(x))
#define findx(a,x) (find(all(a),x)-a.begin())
#define two(X) (1LL<<(X))
#define contain(S,X) (((S)&two(X))!=0)

template<class T> void print(T const &x) {ostringstream os; os<<x; cout<<os.str()<<endl;}
template<class T> void print(vector<T> const &v) {ostringstream os; for(int i=0; i<v.size(); ++i){if(i)os<<' ';os<<v[i];} cout<<os.str()<<endl;}
template<class T> void print(vector<vector<T> > const &v){ostringstream os; for(int i=0;i<v.size();++i) {for(int j=0;j<v[i].size();++j){if(j)os<<' ';os<<v[i][j];}os<<endl;}cout<<os.str()<<endl;}
template<class T> void print(valarray<T> const &v) {ostringstream os; for(int i=0; i<v.size(); ++i){if(i)os<<' ';os<<v[i];} cout<<os.str()<<endl;}
template<class T> int sz(const T&c){return (int)c.size();}
template<class T> void srt(T&c){std::sort(c.begin(),c.end());}
template<class T> void checkmin(T &a,T b){if(b<a) a=b;}
template<class T> void checkmax(T &a,T b){if(b>a) a=b;}
template<class T> T sqr(T x){return x*x;}
template<class T, class U> T cast (U x) { ostringstream os; os<<x; T res; istringstream is(os.str()); is>>res; return res; }
template<class T> vector<T> split(string s, string x=" ") {vector<T> res; for(int i=0;i<s.size();i++){string a; while(i<(int)s.size()&&x.find(s[i])==string::npos)a+=s[i++]; if(!a.empty())res.push_back(cast<T>(a));} return res;}
template<class T> T inside(T r,T c,T R, T C){return r>=0 && r<R && c>=0 && c<C;}

const int height=10;
const int maxn=1<<height;

int t[maxn*2];
int add[maxn*2];
int temp[maxn*2];

void update(int i) {
while (i > 0) {
t[i] = max(t[i + i] + add[i + i], t[i + i + 1] + add[i + i + 1]);
i /= 2;
}
}

void tree_add(int a, int b, int value) {
a += maxn;
b += maxn;
int ta = a;
int tb = b;
while (a <= b) {
if ((a & 1) != 0) {
add[a] += value;
a++;
}
if ((b & 1) == 0) {
add[b] += value;
b--;
}
a /= 2;
b /= 2;
}
update(ta / 2);
update(tb / 2);
}

int tree_max(int a, int b) {
a += maxn;
b += maxn;
for (int k = height; k > 0; k--) {
int j = a >> k;
temp[j] = add[j] + temp[j / 2];
j = b >> k;
temp[j] = add[j] + temp[j / 2];
}
int res = INT_MIN;
while (a <= b) {
if ((a & 1) != 0) {
res = max(res, t[a] + add[a] + temp[a / 2]);
a++;
}
if ((b & 1) == 0) {
res = max(res, t[b] + add[b] + temp[b / 2]);
b--;
}
a /= 2;
b /= 2;
}
return res;
}

int main( int argc, char* argv[] ) {
ios::sync_with_stdio(false);
//freopen("input.txt","r",stdin);

int testCases;
scanf("%d", &testCases);
for(int testCase=1;testCase<=testCases;testCase++){
clr(t,0);
clr(add,0);

int n;
scanf("%d", &n);

vi a(n),b(n),events;

rep(i,n){
scanf("%d%d", &a[i],&b[i]);
events.pb(a[i]);
events.pb(b[i]);
}

srt(events);
events.resize(unique(all(events))-events.begin());

rep(i,n){
int xa=lower_bound(all(events),a[i])-events.begin();
int xb=lower_bound(all(events),b[i])-events.begin();
tree_add(xa,xb-1,1);
}

int res = tree_max(0,maxn-1);
printf("%d\n", res);
}

return 0;
}