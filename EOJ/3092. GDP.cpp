#include <cmath>
#include <cstdio>
int main() {
	int n;
	double r,p;
	while(~scanf("%d %lf",&n,&r)) {
		p = pow(1.0+(r/100),n);
		printf("%.2lf\n",p);
	}
	return 0;
}
