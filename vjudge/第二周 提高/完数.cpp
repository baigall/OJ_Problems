#include <iostream>
using namespace std;
int main() {
	int n,m,t,ans,tmp;
	cin >> t;
	while(t--) {
		ans = 0;
		cin >> n >> m;
		for(int i=min(n,m); i <= max(n,m); i++) {
			tmp = 0;
			for(int j=1;j<=i/2;j++)
				if(i % j ==0) tmp+=j;
			if(tmp == i) ans ++;
		}
		cout << ans << endl;
	}
	return 0;
}