#include <iostream>
using namespace std;

int main() {
	int k,i;
	while(cin >> k) {
		for(i = 0; i <= 65; i++) {
			if((18+k*i) % 65 == 0) {
				cout << i << endl;
				break;
			}
		}
		if(i == 66) cout << "no" << endl;
	}
	return 0;
}
