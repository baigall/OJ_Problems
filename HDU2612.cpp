#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>
using namespace std;
char mp[205][205];
int step[2][205][205];
int n,m;
int yx,yy,mx,my;
class Point{
	public:
		int x,y;
};
const int c[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
void read() {
	for(int i = 0; i < n; i++) {
		gets(mp[i]);
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(mp[i][j] == 'Y') {
				yx = i; yy = j;
			}
			if(mp[i][j] == 'M') {
				mx = i; my = j;
			}
		}
	}
}
void bfs(int x, int y, int idx) {
	queue<Point> q;
	Point a;
	a.x = x;
	a.y = y;
	q.push(a);
	while(!q.empty()) {
		Point head = q.front();
		q.pop();
		for(int i = 0; i < 4; i++) {
			Point t = head;
			t.x += c[i][0];
			t.y += c[i][1];
			if(mp[t.x][t.y]!='#'&&t.x>=0&&t.y>=0&&t.x<n&&t.y<m&&step[idx][t.x][t.y]==0) {
				step[idx][t.x][t.y] = step[idx][head.x][head.y] + 1;
				q.push(t);
			}
		}
	}
}
int find_min() {
	int minn = 0x7fffffff;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(mp[i][j]=='@'&&step[0][i][j]!=0&&step[1][i][j]!=0) {
				minn = min(minn,step[0][i][j] + step[1][i][j]);
			}
		}
	}
	return minn;
}
int main() {
	while(~scanf("%d%d",&n,&m)) {
		getchar();
		read();
		memset(step,0,sizeof(step));
		step[0][yx][yy] = 1;
		step[1][mx][my] = 1;
		bfs(yx,yy,0);
		bfs(mx,my,1);
		int ans = find_min();
		printf("%d\n",(ans - 2) * 11);
	}
	return 0;
}
