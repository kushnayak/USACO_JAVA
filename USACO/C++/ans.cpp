#include <bits/stdc++.h>
#define IO(f) cin.tie(0)->sync_with_stdio(0); if (fopen(f ".in", "r")) freopen(f ".in","r",stdin), freopen(f ".out","w",stdout)
#define nl '\n'
#define forn(i,n) for(int i=0;i<n;i++)
#define fore(i, l, r) for(int i = int(l); i <= int(r); ++i)

using namespace std;

int N;
string s;

int count_right(char color, int split) {
	int point = 
}
int split(int at) {
	bool red_right
}
int main() {
	IO("beads");
	cin >> N >> s;

	int mx = 0;
	for (int i=0; i<N; i++) 
		mx = max(split(i), mx);
	cout << mx << nl;
	
}
