#include <iostream>
using namespace std;

int arr[1000005];

int main() {
	int n,cnt,val;
	while(cin >> n) {
		for(int i=0;i<n;i++) cin >> arr[i];
		val = arr[0];
		cnt = 1;
		for(int i=1;i<n;i++) {
			if(arr[i]==val) cnt++;
			else {
				if(!cnt) {
					val = arr[i];
				} else {
					cnt--;
				}
			}
		}
		cout << val << endl;
	}
	return 0;
}
