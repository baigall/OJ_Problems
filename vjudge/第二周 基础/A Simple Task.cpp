#include <iostream>
using namespace std;
int npow(int n) {
	int ans = 1;
	while(n--) ans *= 2;
	return ans;
}
int main() {
	int t,n,o;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 0; i < n;i++) {
			o = npow(i);
			if(n % o == 0 && n/o % 2 == 1) {
				cout << n/o << ' ' << i << endl;
				break;
			}
		}
	}
	return 0;
}
