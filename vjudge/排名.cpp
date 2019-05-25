#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int score[15];
struct Point {
	int s;
	char snum[50];
} arr[1005];
int cmp(Point a, Point b) {
	if(a.s == b.s) {
		if(strcmp(a.snum,b.snum) < 0) return 1;
		else return 0;
	}else {
		return a.s > b.s;
	}
}
int main() {
	int n,M,g,m,tmp,c;
	while(cin >> n && n) {
		cin >> M >> g;
		c = 0;
		for(int i=1;i<=M;i++) cin >> score[i];
		for(int i=0;i<n;i++) {
			cin >> arr[i].snum;
			arr[i].s = 0;
			cin >> m;
			while(m--) {
				cin >> tmp;
				arr[i].s += score[tmp];
			}
			if(arr[i].s >= g) c++; 
		}
		sort(arr,arr+n,cmp);
		cout << c << endl;
		for(int i=0;i<n;i++) {
			if(arr[i].s >= g)
				cout << arr[i].snum << ' ' << arr[i].s << endl;
		}
	}
	return 0;
}
