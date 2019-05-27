#include <iostream>
using namespace std;

int main() {
	int t,y,n;
	cin >> t;
	while(t--) {
		cin >> y >> n;
		while(1) {
			if(y%400==0 || (y%4==0&&y%100!=0)) {
				n--;
				if(n==0) {
					cout << y << endl;
					break;
				}
			}
			y++;
		}
	}
	return 0;
}
