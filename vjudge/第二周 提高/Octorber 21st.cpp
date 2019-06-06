#include <cstdio>
int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int main() {
	int t,m,d,ans;
	while(~scanf("%d",&t)) {
		while(t--) {
			ans = 0;
			scanf("%d %d",&m,&d);
			if(m == 10 && d == 21)
				printf("It's today!!\n");
			else if((m>10) || (m==10 && d>21))
				printf("What a pity, it has passed!\n");
			else {
				for(int i=m-1;i<9;i++)
					ans += arr[i];
				printf("%d\n",ans+21-d);
			}
		}
	}
	return 0;
}
