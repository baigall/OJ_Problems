#include <cstdio>
#include <cmath>
int main() {
	int n,m,x,y;
	while(~scanf("%d %d",&m,&n)) {
		x = y = 0;
		for(int i =(m<n?m:n); i <=(m>n?m:n);i++) {
			if(i % 2 == 0) x += pow(i,2);
			else if(i % 2 == 1) y += pow(i,3);
		}
		printf("%d %d\n",x,y);
	}
}
