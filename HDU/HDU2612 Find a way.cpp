/*

Find a way

Problem Description

Pass a year learning in Hangzhou, yifenfei arrival hometown Ningbo at finally. Leave Ningbo one year, yifenfei have many people to meet. Especially a good friend Merceki.
Yifenfei’s home is at the countryside, but Merceki’s home is in the center of city. So yifenfei made arrangements with Merceki to meet at a KFC. There are many KFC in Ningbo, they want to choose one that let the total time to it be most smallest. 
Now give you a Ningbo map, Both yifenfei and Merceki can move up, down ,left, right to the adjacent road by cost 11 minutes.
 

Input

The input contains multiple test cases.
Each test case include, first two integers n, m. (2<=n,m<=200). 
Next n lines, each line included m character.
‘Y’ express yifenfei initial position.
‘M’    express Merceki initial position.
‘#’ forbid road;
‘.’ Road.
‘@’ KCF
 

Output

For each test case output the minimum total time that both yifenfei and Merceki to arrival one of KFC.You may sure there is always have a KFC that can let them meet.
 

Sample Input
4 4
Y.#@
....
.#..
@..M
4 4
Y.#@
....
.#..
@#.M
5 5
Y..@.
.#...
.#...
@..M.
#...#
 

Sample Output
66
88
66


*/
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

/* Function two
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;


char mp[205][205];
int n,m,ans, yx,yy, mx,my, step[2][205][205];
const int c[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
class Point {
	public:
		int x,y;
};
void read() {
	for(int i = 0; i < n; i++) gets(mp[i]);
	for(int i = 0; i < n; i++)
	for(int j = 0; j < m; j++) {
		if(mp[i][j] == 'Y') {
			yx = i; yy = j;
		}
		if(mp[i][j] == 'M') {
			mx = i; my = j;
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
			if(mp[t.x][t.y]!='#'&&t.x>=0&&t.x<n&&t.y>=0&&t.y<m&&step[idx][t.x][t.y]==0) {
				step[idx][t.x][t.y] = step[idx][head.x][head.y]+1;
				q.push(t);
			}
		}
	}
}

int find_min() {
	int minn = 0x7fffffff;
	for(int i = 0; i < n; i++)
	for(int j = 0; j < m; j++) {
		if(mp[i][j]=='@'&&step[0][i][j]!=0&&step[1][i][j]!=0) {
			minn = min(minn,step[0][i][j]+step[1][i][j]);
		}
	}
	return minn;
}


int main() {
	while(cin >> n >> m) {
		getchar();
		read();
		memset(step,0,sizeof(step));
		step[0][yx][yy] = 1;
		step[1][yx][yy] = 1;
		bfs(yx,yy,0);
		bfs(mx,my,1);
		ans = find_min();
		cout << (ans - 1) * 11 << endl;
			
	}
	return 0;
}
*/
