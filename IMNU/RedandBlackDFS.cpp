#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
char mp[35][35];
int x,y, starx,stary;
void read() {
	for(int i=0;i<x;i++) gets(mp[i]);
	for(int i=0;i<x;i++)
	for(int j=0;j<y;j++){
		if(mp[i][j]=='@'){
			mp[i][j]='.';
			starx=i;
			stary=j;
			return ;
		}
	}
}
int dfs(int sx, int sy) {
	if(sx<0||sx>=x||sy>=y||sy<0||mp[sx][sy]=='#') {
		return 0;
	}
	mp[sx][sy]='#';
	return dfs(sx+1,sy)+dfs(sx-1,sy)+dfs(sx,sy+1)+dfs(sx,sy-1)+1;
}
int main() {
	while(cin >> y >> x&&x&&y) {
		getchar();
		read();
		cout << dfs(starx,stary) << endl;
	}
	return 0;
}
