#include <iostream>
using namespace std;
int arr[60];
int main() {
	int t,sum,c,s = 1;
	while(cin >> t && t) {
		sum = c = 0;
		for(int i=0;i<t;i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		sum /= t;
		for(int i=0;i<t;i++)
			if(arr[i] > sum) c += arr[i]-sum;
		cout << "Set #" << s++ << endl;
		cout << "The minimum number of moves is " << c << '.' << endl << endl;
	}
	return 0;
}
