#include <iostream>
using namespace std;

int main() {
	int a,b,c,ans;
	while(cin >> a >> b >> c &&a&&b&&c) {
		ans = 1;
		for(int i=0;i<b;i++) {
			ans *= a;
			ans %= c;
		}
		cout << ans << endl;
	}
	return 0;
}
