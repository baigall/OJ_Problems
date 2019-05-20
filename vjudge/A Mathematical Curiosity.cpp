#include <iostream>
using namespace std;

int main() {
	int t,n,m,i,j,cnt,num;
	cin >> t;
	while(t--) {
		num = 0;
		while(cin >> n >> m && n != 0) {
			cnt = 0;
			for(i=1;i<100;i++) {
				for(j=i+1;j<n;j++) {
					if((i*i+j*j+m)%(i*j)==0)
						cnt++;
				}
			}
			cout << "Case " << ++num << ": " << cnt << endl;
		}
		if(t) cout << endl;
	}
	return 0;
}

