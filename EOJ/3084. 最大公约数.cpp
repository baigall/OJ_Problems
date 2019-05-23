#include <iostream>
using namespace std;
int gcd(int a,int b) {
	int t;
	while(b) {
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}
int main() {
	int a,b;
	while(cin >> a >> b)
		cout << gcd(min(a,b),max(a,b)) << endl;
	return 0;
}
