#include <iostream>
using namespace std;
int main() {
	int t,n,idx,flag;
	cin >> t;
	while(t--) {
		idx = flag = 0;
		cin >> n;
		while(n) {
			if(n&1) {
				if(flag++) cout << ' ';
				cout << idx;
			}
			idx++;
			n >>= 1;
		}
		cout << endl;
	}
	return 0;
}
