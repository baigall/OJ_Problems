#include <cstdio>
#include <cmath>
int main()
{
	int n;
	while(~scanf("%d",&n) && n != 0)
	{
		if(n <= 2) printf("%.3lf\n",sqrt(2.0 * ((n-1) * 5 + 1.75) / 9.8));
		else printf("%.3lf\n",sqrt((2.0 * ((n-3) * 3 + 11.75)) / 9.8));
	}
	return 0;
}
