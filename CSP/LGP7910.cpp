// Author : Luogu Canstant0x5F3759DF
#include <bits/stdc++.h>
#define lld long long
using namespace std;
#define frein(x) freopen(x, "r", stdin)
#define freout(x) freopen(x, "w", stdout)
int n, q;
lld a[10010];
struct node1 {
	int sons[2];
	int vis;
} tr[3000010];
int cnt = 1;
void insert(lld x) {
	int p = 1;
	++ tr[p].vis;
	int b;
	for (int i = 63; i >= 0; -- i) {
		b = (x >> i) & 1;
		if (!tr[p].sons[b])
			tr[p].sons[b] = ++ cnt;
		p = tr[p].sons[b];
		++ tr[p].vis;
	}
}
void remove(lld x) {
	int p = 1;
	-- tr[p].vis;
	for (int i = 63; i >= 0; -- i) {
		p = tr[p].sons[(x >> i) & 1];
		if (!p) return;
		-- tr[p].vis;
	}
}
int query(lld x) {
	int p = 1;
	int ret = 0;
	int b;
	for (int i = 63; i >= 0; -- i) {
		b = (x >> i) & 1;
		if (b) ret += tr[tr[p].sons[0]].vis;
		p = tr[p].sons[b];
		if (!p) return ret;
	}
	return ret;
}
int main() {
	scanf("%d%d", &n, &q);
	for (int i = 1; i <= n; ++ i) {
		scanf("%lld", a + i);
		insert((lld)a[i] * n + i - 1);
	}
	int op, x, v;
	for (int i = 1; i <= q; ++ i) {
		scanf("%d%d", &op, &x);
		if (op == 1) {
			scanf("%d", &v);
			remove((lld)a[x] * n + x - 1);
			a[x] = v;
			insert((lld)a[x] * n + x - 1);
		} else printf("%d\n", query((lld)a[x] * n + x - 1) + 1);
	}
	return 0;
}