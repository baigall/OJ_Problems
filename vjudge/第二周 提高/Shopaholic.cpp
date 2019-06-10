#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int arr[20005];

int cmp(int a, int b) {
	return a > b;
}

int main() {
	int t,n,ans;
	scanf("%d",&t);
	while(t--) {
		ans = 0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&arr[i]);
		sort(arr+1,arr+1+n,cmp);
		for(int i=1;i<=n;i++)
			if(i%3 == 0) ans += arr[i];
		printf("%d\n",ans);
	} 
	return 0;
}