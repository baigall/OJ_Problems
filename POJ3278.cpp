#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int n,k;
int vis[100005], step[100005];
void bfs() {
	memset(vis,0,sizeof(vis));
	memset(step,0,sizeof(step));
	queue<int> q;
	q.push(n);
	while(!q.empty()) {
		int x = q.front(),t;
		q.pop();
		for(int i = 0; i < 3; i++) {
			if(i == 0) t = x - 1;
			else if(i == 1) t = x + 1;
			if(i == 2) t = x * 2;
			if(t >= 100001 || t < 0) continue;
			else if(vis[t] == 0) {
				vis[t] = 1;
				step[t] = step[x] + 1;
				q.push(t);
			}
		}
	}
}
int main() {
	while(cin >> n >> k) {
		if(n >= k) cout << n - k << endl;
		else {
			bfs();
			cout << step[k] << endl;
		}
	}
	return 0;
}
