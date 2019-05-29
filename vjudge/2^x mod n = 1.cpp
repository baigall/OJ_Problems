#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int n;
	while(cin >> n) {
		int minn = 0;
		if(n==1 || !(n & 1)) printf("2^? mod %d = 1\n",n);
		else {
			int ans = 2, minn = 1;
			while(ans != 1) {
				ans = ans * 2 % n;
				minn ++;
			}
			printf("2^%d mod %d = 1\n",minn,n);
		}
		
	}
	return 0;
}
