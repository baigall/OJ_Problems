#include <iostream>
using namespace std;
int main() {
	int s,d,flag;
	while(cin >> s >> d && s && d) {
		flag = 1;
		int k = 0;
		while(s % 60 != 0) {
			s = (s + s*d) % 60;
			k++;
			if(k>=61) {
				flag = 0;
				break;
			}
		}
		if(flag) cout << k << endl;
		else cout << "Impossible" << endl;
	}
	return 0;
}
