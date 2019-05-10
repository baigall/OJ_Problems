#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int dp[10005], fi, en;
bool nprime[10005], mprime[10005];

void bfs() {
	queue<int> q;
	memset(dp,0,sizeof(dp));
	memset(mprime,false,sizeof(mprime));
	q.push(fi);
	dp[fi] = 0;
	mprime[fi] = true;
	while(!q.empty()) {
		int t = q.front();
		q.pop();
		if(t == en) {
			cout << dp[t] << endl;
			return ;
		}
		int v[4];
		for(int i = 0; i < 4; i++) {
			for(int j = 0; j < 10; j++) {
				v[0] = t % 10000 / 1000;
				v[1] = t % 1000 / 100;
				v[2] = t % 100 / 10;
				v[3] = t % 10 / 1;
				v[i] = j;
				int u = v[0] * 1000 + v[1] * 100 + v[2] * 10 + v[3];
				if(nprime[u] == true|| mprime[u] == true||u < 1000) continue;
				mprime[u] = true;
				dp[u] = dp[t] + 1;
				q.push(u);
			}
		}
	}
}

void init() {
	memset(nprime,false,sizeof(nprime));
	for(int i = 2; i < 10000; i++)
	for(int j = i<<1; j < 10000; j+= i)
		nprime[j] = true;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> fi >> en;
		init();
		bfs();
	}
	return 0;
}
