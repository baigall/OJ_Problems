#include <iostream>
using namespace std;
typedef long long ll;
ll powmod(ll x, ll n, ll m) {
	ll ans = 1;
	for(;n;n>>=1) {
		if(n&1) {
			ans *= x;
			ans %= m;
		}
		x *= x;
		x %= m;
	}
	return ans;
	// ¿ìËÙÄ£ÃÝ 
}

int main() {
	int n,a,b,c;
	cin >> n;
	while(n--) {
		cin >> a >> b >> c;
		cout << powmod(a,b,c) << endl;
	}
}
