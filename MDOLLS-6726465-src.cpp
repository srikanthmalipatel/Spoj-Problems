#include <cstdio>
#include <algorithm>

using namespace std;

#define MAX 20000

struct entry {
short h, w;
bool operator<(const entry &o) const {
if(h!=o.h)return h>o.h;
return w<o.w;
}
};

bool cmp_w(entry a, entry b) {
return a.w<b.w;
}

entry d[MAX];

int main() {
//freopen("input.txt","r",stdin);

int t;
scanf("%d", &t);

while(t--){
int n;
scanf("%d", &n);
for(int i=0;i<n;i++) scanf("%hd%hd", &d[i].w, &d[i].h);
sort(d, d+n);

int res=n;
entry* last = d;

for(int j=0;j<n;j++){
entry *it = upper_bound(d, last, d[j], cmp_w);
if(it != last) {
--res;
it->w = d[j].w;
} else {
*(last++) = d[j];
}
}

printf("%d\n", res);
}
}