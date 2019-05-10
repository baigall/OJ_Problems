#include <iostream>
#include <queue>
#include <cstring>
#include <cstdio>

using namespace std;

int l,r,c, sx,sy,sz;
char mp[35][35][35];
int step[35][35][35];
const int D[6][3] = {{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1}};

class Point {
	public:
		int x,y,z;
};

void read() {
	int count = l-1;
	for(int i = 0;i < l; i++) {
		for(int j = 0; j < r; j++) {
			gets(mp[i][j]);
			for(int k = 0; k < c; k++) {
				if(mp[i][j][k] == 'S') {
					sx = i; sy = j; sz = k;
				}
			}
		}
		if(count) {
			getchar();
			count--;
		}
	}
}

void bfs() {
	queue<Point> q;
	Point a;
	a.x = sx;
	a.y = sy;
	a.z = sz;
	q.push(a);
	while(!q.empty()) {
		Point head = q.front();
		q.pop();
		for(int i = 0; i < 6; i++) {
			Point t = head;
			t.x += D[i][0];
			t.y += D[i][1];
			t.z += D[i][2];
			if(mp[t.x][t.y][t.z]!='#'&&t.x>=0&&t.y>=0&&t.z>=0&&t.x<l&&t.y<r&&t.z<c&&step[t.x][t.y][t.z]==0) {
				step[t.x][t.y][t.z] = step[head.x][head.y][head.z]+1;
				q.push(t);
			}
		}
	}
}

int find_min() {
	int minn = 0x7fffffff;
	for(int i = 0; i < l; i++) {
		for(int j = 0; j < r; j++) {
			for(int k = 0; k < c; k++) {
				if(mp[i][j][k]=='E'&&step[i][j][k]!=0) {
					minn = min(minn,step[i][j][k]);
				}
			}
		}
	}
	return minn;
}

int main() {
	while(cin >> l >> r >> c) {
		if(l==0&&r==0&&c==0) break;
		getchar();
		read();
		memset(step,0,sizeof(step));
		bfs();
		int ans = find_min();
		if(ans!=0x7fffffff)
			printf("Escaped in %d minute(s).\n",ans);
		else cout << "Trapped!" << endl;
		
	}
	return 0;
}
