#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int w,h, x,y;
char mp[35][35];
const int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
class Point{
	public:
		int a,b;
};
void read() {
	for(int i = 0; i < h; i++) gets(mp[i]);
	for(int i = 0; i < h; i++)
	for(int j = 0; j < w; j++) {
		if(mp[i][j] == '@'){
			x = i;
			y = j;
			return ;
		}
	}
}
int bfs() {
	int cnt = 1;
	queue<Point> q;
	Point a;
	a.a = x;
	a.b = y;
	q.push(a);
	while(!q.empty()){
		Point head = q.front();
		q.pop();
		for(int i = 0; i < 4; i++) {
			Point t = head;
			t.a += dir[i][0];
			t.b += dir[i][1];
			if(mp[t.a][t.b]=='.'&&t.a>=0&&t.a<h&&t.b>=0&&t.b<w){
				mp[t.a][t.b] = '#';
				cnt++;
				q.push(t);
			}
		}
	}
	return cnt;
}
int main() {
	while(cin >>w>>h&&w&&h) {
		getchar();
		read();
		cout << bfs() << endl;
	}
	return 0;
}