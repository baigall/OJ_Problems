#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int mp[10][10];
int step[40][40];

class Point {
	public:
		int x,y;
} node[100][100];

const int c[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

void read() {
	for(int i = 0; i < 5; i++)
	for(int j = 0; j < 5; j++)
		cin >> mp[i][j];
}

void bfs() {
	queue <Point> q;
	Point a;
	a.x=0;
	a.y=0;
	q.push(a);
	while(!q.empty()) {
		Point head = q.front();
		q.pop();
		for(int i = 0; i < 4; i++) {
			Point t = head;
			t.x += c[i][0];
			t.y += c[i][1];
			if(t.x>=0&&t.y>=0&&t.x<5&&t.y<5&&mp[t.x][t.y]!=1&&step[t.x][t.y]==0) {
				node[t.x][t.y].x = head.x;
				node[t.x][t.y].y = head.y;
				step[t.x][t.y] = step[head.x][head.y] + 1;
				q.push(t);
			}
		}
	}
}

void print(int a, int b) {
	if(a!=0||b!=0) {
		print(node[a][b].x,node[a][b].y);
	}
	cout << '(' << a << ", " << b << ')' << endl;
}


int main() {
	read();
	memset(step,0,sizeof(step));
	bfs();
	print(4,4);
	return 0;
}
