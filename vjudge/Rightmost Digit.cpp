#include <iostream>
using namespace std;
int main() {
	int t,n,tmp,c[4];
	cin >> t;
	while(t--) {
		cin >> n;
		tmp = n % 10;
		c[0] = tmp;
		c[1] = (c[0] * tmp) % 10;
		c[2] = (c[1] * tmp) % 10;
		c[3] = (c[2] * tmp) % 10;
		if(n%4!=0) cout << c[n%4-1] << endl;
		else cout << c[3] << endl;
	}
	return 0;
}
