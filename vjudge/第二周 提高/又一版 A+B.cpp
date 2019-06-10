#include <iostream>
using namespace std;
int arr[1000];
int main() {
	long long a,b,m,tmp,i;
	while(cin >> m && m) {
		cin >> a >> b;
		tmp = a + b;
		if(tmp == 0) {
			cout << 0 << endl;
			continue;
		}
		for(i=0;tmp;i++) {
			arr[i] = tmp % m;
			tmp /= m;
		}
		for(int j=i-1;j>=0;j--)
			cout << arr[j];
		cout << endl;
	}
	return 0;
}