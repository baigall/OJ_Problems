#include <cstdio>
int gcd(int a,int b) {
	int tmp;
	while(b) {
		tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}
int main() {
	int a,b,gcd;
	while(~scanf("%d%d",&a,&b)) {
		printf("%10d%10d",a,b);
		if(gcd(a,b) == 1)
			printf("    Good Choice\n");
		else printf("    Bad Choice\n");
		putchar('\n');
	}
	return 0;
}
