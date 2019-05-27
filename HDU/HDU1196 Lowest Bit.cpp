#include <iostream>
using namespace std;
int arr[1000];
int main() {
	int a,idx,ans,c;
	while(cin >> a) {
		if(a == 0) break;
		idx = c = 0;
		ans = 1;
		while(a!=0) {
			arr[idx++] = a % 2;
			a /= 2;
		}
		for(int i = 0; i < idx; i++) {
			if(arr[i]!=1)c++;
			else break;
		}
		while(c--) ans *=2;
		cout << ans << endl;
	}
	return 0;
}
