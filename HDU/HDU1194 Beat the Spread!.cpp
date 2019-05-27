#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t,s,d,a,b;
	cin >> t;
	while(t--) {
		cin >> s >> d;
		if(s < d) cout << "impossible" << endl;
		else {
			a = (s+d) / 2;
			b = (s-d) / 2;
			if(a+b==s&&a-b==d) cout << a <<' ' << b << endl;
			else cout << "impossible" << endl;
		}
		
	}
	return 0;
}
