#include <cstdio>
int arr[1000005];
int main() {
	int t,tmp,cnt;
	while(~scanf("%d",&t)) {
		for(int i=0;i<t;i++)
			scanf("%d",&arr[i]);
			
		tmp = arr[0];
		cnt = 1;
		for(int i=1;i<t;i++) {
			if(arr[i] == tmp) cnt++;
			else {
				if(!cnt) tmp = arr[i];
				else cnt--;
			}
		}
		printf("%d\n",tmp);
	}
	return 0;
}

