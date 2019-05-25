#include <iostream>
using namespace std;
int arr[5005][5005] = {0};
int main() {
	int start = 0,t,a,b;
	for(int i=0,j=0;i<5005;i++) {
		arr[i][i] = start;
		if(i >= 2) {
			arr[i][j++] = start - 2;
		}
		if(i&1) start+= 3;
		else start++;
	}
	cin >> t;
	while(t--) {
		cin >> a >> b;
		if(a==0&&b==0) cout << 0 << endl;
		else if(arr[a][b]) cout << arr[a][b] << endl;
		else cout << "No Number" << endl;
	}

	return 0;
}
