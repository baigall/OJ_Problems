#include <iostream>
#include <cstdio>
#include <cstring>
#define MAXN 24*3600+60*60+60+10
using namespace std;
struct Point {
	char id[20];
	int x;
}a[MAXN],b[MAXN];
int main() {
	int t,n,h1,m1,s1,h2,m2,s2;
	char tmp[20];
	cin >> t;
	while(t--) {
		for(int i=0;i<MAXN;i++) {
			a[i].x=0;
			b[i].x=0;
		}
		cin >> n;
		getchar();
		for(int i=0;i<n;i++) {
			scanf("%s %d:%d:%d %d:%d:%d",tmp,&h1,&m1,&s1,&h2,&m2,&s2);
			strcpy(a[h1*3600+m1*60+s1].id,tmp);
			a[h1*3600+m1*60+s1].x++;
			strcpy(b[h2*3600+m2*60+s2].id,tmp);
			b[h2*3600+m2*60+s2].x++;
		}
		for(int i = 0; i < MAXN;i++) {
			if(a[i].x!=0) {
				cout << a[i].id << ' ';
				break;
			}
		}
		for(int i = MAXN; i >= 0;i--) {
			if(b[i].x!=0) {
				cout << b[i].id << endl;
				break;
			}
		}
	}
	return 0;
}
