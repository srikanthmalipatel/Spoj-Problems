#include <cstdio>
#include <cstdlib>
#include <set>
#include <algorithm>

// SPOJ - DEFKIN

using namespace std;

int cases, n, h, w, x, y, i, j, bestx, besty, dist, prev;
set<int> xs, ys;
set<int>::iterator it;
char dummy;

int main() {
	scanf("%d%c", &cases, &dummy);

	while(cases--) {
		scanf("%d %d %d%c", &w, &h, &n, &dummy);
		for(i = 0; i < n; i++) {
			scanf("%d %d%c", &x, &y, &dummy);
			xs.insert(x);
			ys.insert(y);
		}
		xs.insert(w+1), ys.insert(h+1);
		bestx = besty = 0;
		
		prev = 0;
		for(it = xs.begin(); it != xs.end(); it++) {
			dist = (*it) - prev - 1;
			bestx = max(dist, bestx);
			prev = (*it);
		}
		
		prev = 0;
		for(it = ys.begin(); it != ys.end(); it++) {
			dist = (*it) - prev - 1;
			besty = max(dist, besty);
			prev = (*it);
		}
		printf("%d\n", (bestx*besty));

		xs.clear(), ys.clear();
	}
}

