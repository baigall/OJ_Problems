#include <iostream>
using namespace std;

int main() {
	int a,b,gcd;
	while(cin >> a >> b) {
		for(int i = 1; i <= (a<b?a:b);i++) {
			if(a%i==0&&b%i==0) gcd = i;
		}
		cout << a*b/gcd << endl;
	}
	return 0;
}
