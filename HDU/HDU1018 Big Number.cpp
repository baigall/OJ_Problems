#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int t,n,ans;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		ans = log10(sqrt(2*acos(-1.0)*n)) + n*log10(n/exp(1.0));
		printf("%d\n",ans+1);
	}
	return 0;
}

/*
斯特林公式 
*/
