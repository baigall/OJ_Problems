#include <cmath>
#include <cstdio>
int main() {
	double n;
	while(~scanf("%lf",&n)) {
		printf("%.2lf\n",fabs(n));
	}
	return 0;
}
