#include <cstdio> 
int main() {
	int m,k,ans;
	while(~scanf("%d%d",&m,&k)&&m&&k) {
		ans = 0;
		while(m) {
			ans++;
			if(ans%k == 0) m++;
			m--;
		}
		printf("%d\n",ans);
	}
	return 0;
}
