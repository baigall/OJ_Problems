#include <cstdio>
int a[1000005];
long long gcd(long long a, long long b) {
	return b==0?a:gcd(b,a%b);
}
long long lcm(long long a, long long b) {
	return a / gcd(a,b)*b;
}
int main() {
	long long t,n;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		int d = 1;
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
			d= lcm(d,a[i]);
		}
		printf("%d\n",d);
	}
	return 0;
}
