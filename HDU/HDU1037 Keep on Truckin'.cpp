#include <iostream>
using namespace std;
int main() {
	int a[3];
	while(cin >> a[0] >> a[1] >> a[2]) {
		int flag = 0;
		for(int i=0;i<3;i++) {
			if(a[i]<=168) {
				cout << "CRASH " << a[i] << endl;
				break;
			}
			if(i==2) flag=1;
		}
		if(flag) cout << "NO CRASH" << endl;
	}
	return 0;
}

/*
#include <iostream>
using namespace std;
int main() {
	cout << "CRASH 167" << endl;
	return 0;
}

*/
