#include <iostream>
using namespace std;
typedef long long ll;

int gcd(ll a, ll b) {
	int t;
	while(b) {
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

int main() {
	int t,idx=0;
	ll a,b;
	cin >> t;
	while(t--) {
		cin >> a >> b;
		cout << "case #" << idx++ <<':' << endl;
		cout << gcd(max(a,b),min(a,b)) << endl;
	}
	return 0;
}
