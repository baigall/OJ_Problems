#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n,IP[4];
	char ip[40];
	cin >> n;
	while(n--) {
		for(int i = 0; i < 4; i++) IP[i] = 0;
		cin >> ip;
		for(int i = 0; i < 4; i++) {
			for(int j = i * 8; j < i*8+8; j++) {
				IP[i] += pow(2,7 - j+i*8) * (ip[j] - '0');
			}
		}
		cout << IP[0] << '.'<< IP[1] << '.'<< IP[2] << '.'<< IP[3] << endl;
	}
}
