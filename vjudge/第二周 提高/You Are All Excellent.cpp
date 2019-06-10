#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct {
	double x,y,k;
} point;

double cmp(point a,point b) {
	return a.k > b.k;
}

int main() {
	point pos[105];
	int n,i;
	while(~scanf("%d",&n)) {
		if(n < 0) break;
		for(i=0;i<n;i++) {
			scanf("%lf %lf",&pos[i].x,&pos[i].y);
			pos[i].k = pos[i].x / pos[i].y;
		}
		sort(pos,pos+n,cmp);
		for(i=0;i<n;i++) {
			if(i!=0) putchar(' ');
			printf("%.1lf %.1lf",pos[i].x,pos[i].y);
		}
		putchar('\n');
	}
	return 0;
}