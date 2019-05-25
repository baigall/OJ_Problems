#include <iostream>
using namespace std;
int main() {
	int t,n,minn;
	double x1,x2,x3;
	cin >> t;
	while(t--) {
		minn = 0x7fffffff;
		cin >> n;
		x1 = n / 150.0;
		x2 = n / 200.0;
		x3 = n / 350.0;
		if((x1 - (int)x1) > 0) x1++;
		if((x2 - (int)x2) > 0) x2++;
		if((x3 - (int)x3) > 0) x3++;
		for(int i=0;i<=x1;i++) {
			for(int j=0;j<=x2;j++) {
				for(int k=0;k<=x3;k++) {
					if((n-150*i-200*j-350*k) >= 0)
						minn = min((n-150*i-200*j-350*k),minn);
				}
			}
		}
		cout << minn << endl;
	}
	return 0;
}
