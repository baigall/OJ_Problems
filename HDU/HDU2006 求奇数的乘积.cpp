#include <cstdio>
int main() {
	int n,tmp,product;
	while(~scanf("%d",&n)) {
		product = 1;
		while(n--) {
			scanf("%d",&tmp);
			if(tmp % 2 == 1) product *= tmp;
		}
		printf("%d\n",product);
	}
	return 0;
}
