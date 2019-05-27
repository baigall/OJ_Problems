#include <cstdio>
int main() {
	int n,f,tmp,t;
	while(~scanf("%d",&n)) {
		t = tmp = 0;
		if(n == 0) break;
		while(n--) {
			scanf("%d",&f);
			if(f > tmp) {
				t += (f-tmp)*6 + 5; 
				tmp = f;
			} else {
				t += (tmp-f)*4 + 5;
				tmp = f;
			}
		}
		printf("%d\n",t);
	}
	return 0;
}
