#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int b10,b12,b16,t1,t2,t3;
	cout << "2992\n2993\n2994\n2995\n2996\n2997\n2998\n2999" << endl;
	for(int i=3000;i<10000;i++) {
		b12 = b16 = b10 = 0;
		t1 = t2 = t3 = i;
		while(t3) {
			b10 += t3 % 10;
			t3 /= 10;
		}
		while(t1) {
			b12 += t1 % 12;
			t1 /= 12;
		}
		while(t2) {
			b16 += t2 % 16;
			t2 /= 16;
		}
		if(b10==b12&&b10==b16&&b12==b16) cout << i <<endl;
		
	}
	return 0;
}
