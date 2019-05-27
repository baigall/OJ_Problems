#include <iostream>
#include <algorithm>
using namespace std;

int arr[10005];

int main() {
	int t;
	while(cin >> t) {
		for(int i=0;i<t;i++)
			cin >> arr[i];
		sort(arr,arr+t);
		cout << arr[t/2] << endl;
	}
	return 0;
}
