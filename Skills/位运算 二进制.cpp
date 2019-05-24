#include <iostream>
using namespace std;

int num[33];
int cnt;
int main() {
	cnt = 0;
	int n = 25565;
	while(n) {
		num[cnt++] = n&1; // n%2;
		n >> = 1; // ÓÒÒÆ 
	}
	for(int i = cnt-1; i >=0; i--) 
		cout << num[i];
	cout << endl;
	return 0;
}


