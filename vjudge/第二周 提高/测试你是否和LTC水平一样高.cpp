#include <iostream>
using namespace std;
int main() {
	int n,flag;
	while(cin >> n) {
		flag = 0;
		for(int i=1;i<=100;i++) {
			for(int j=1;j<=100;j++) {
				for(int k=1;k<=100;k++) {
					if((i*i+j*j+k*k==n)) {
						cout<<i<<' '<<j<<' '<<k<<endl;
						flag = 1;
					}
					if(flag) break;
				}
				if(flag) break;
			}
			if(flag) break;
		}
	}
	return 0;
}
