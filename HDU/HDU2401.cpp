#include <iostream>
using namespace std;

int main() {
	int n,w,d,weight,sum;
	while(cin >> n >> w >> d >> weight) {
		sum = 0;
		for(int i=0;i < n-1;i++) sum+=(i+1);
		if(sum*w==weight) cout << n << endl;
		else cout << (sum*w - weight) / d << endl;
	}
	return 0;
}
