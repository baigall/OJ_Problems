#include <iostream>
using namespace std;
int c[4];
int main() {
	int a,b;
	while(cin >> a >> b) {
		a = a % 10;
		c[0] = a;
		c[1] = (c[0]*a) % 10;
		c[2] = (c[1]*a) % 10;
		c[3] = (c[2]*a) % 10;
		if(b%4!=0) cout << c[b%4-1] << endl;
		else cout << c[3] << endl;
	}
	return 0;
}
