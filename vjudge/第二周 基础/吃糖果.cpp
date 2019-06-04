#include <cstdio>
int main() {
	int t,n,maxx,tmp;
	long long c;
	scanf("%d",&t);
	while(t--) {
		c = maxx = 0;
		scanf("%d",&n);
		while(n--) {
			scanf("%d",&tmp);
			maxx = maxx > tmp ? maxx : tmp;
			c += tmp;
		}
		if(c - maxx + 1 >= maxx) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
