#include <iostream>
#include <cstring>
using namespace std;

int a[1000];

int main() {
	int n;
	while(cin >> n) {
		int j = 0;
		for(int i = 2; i <= n; i++) {
			if(n%i==0) {
				a[j++]=i;
				n/=i;
				i=1;
			}
		}
		for(int i = 0; i < j; i++) {
			if(i!=0)cout << '*';
			cout << a[i];
		}
		cout << endl;
	}

	return 0;
}
