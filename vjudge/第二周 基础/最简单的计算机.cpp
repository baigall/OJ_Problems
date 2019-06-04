#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int r1,r2,m1,m2,r3;
	char cmd[205];
	while(cin >> m1 >> m2 >> cmd) {
		r1 = r2 = r3 = 0;
		for(int i=0;i<strlen(cmd);i++) {
			switch(cmd[i]) {
				case 'A': r1 = m1;break;
				case 'B': r2 = m2;break;
				case 'C': m1 = r3;break;
				case 'D': m2 = r3;break;
				case 'E': r3 = r1+r2;break;
				case 'F': r3 = r1-r2;break;
			}
		}
		cout << m1 << ',' << m2 << endl;
	}
	return 0;
}
