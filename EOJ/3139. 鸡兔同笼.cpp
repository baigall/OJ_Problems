#include <iostream>
using namespace std;

int main() {
	int a,b,t,x,y;
	cin >> t;
	while(t--) {
		cin >> a >> b;
		y = (b-2*a)/2;
		x = a - y;
		if(x<0||y<0||b%2==1) cout << "No answer" << endl;
		else cout << x << ' ' << y << endl;
	}
	return 0;
}
