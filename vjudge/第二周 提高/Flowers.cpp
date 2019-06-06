#include <cstdio>
#include <algorithm>
using namespace std;
int arr[10000];
int main() {
	int n,m;
	while(~scanf("%d%d",&n,&m)) {
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
		sort(arr,arr+n);
		printf("%d\n",m/arr[0]);
	}
	return 0;
}
