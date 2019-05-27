#include <iostream>
#include <string>
using namespace std;
int main() {
	string num;
	int sum;
	while(cin >> num) {
		sum = 0;
		if(num[0]=='0') break;
		for(int i=0;i<num.size();i++) {
			sum += num[i] - '0';
		}
		cout << (sum-1) % 9 + 1 << endl;
	}
	return 0;
}

