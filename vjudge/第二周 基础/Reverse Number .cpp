#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long t,num,tmp,nop,c0,ans;
	while(cin >> t) {
		while(t--) {
			nop=c0=ans=0;
			cin >> num;
			if(num<0){
				nop=1;
				num*=(-1);
			}
			tmp = num;
			while(tmp) {
				if(tmp%10==0)
					c0++;
				else break;
				tmp/=10;
			}
			while(tmp) {
				ans = ans*10 + tmp % 10;
				tmp /= 10;
			}
			ans *= pow(10,c0);
			if(nop) ans *= (-1);
			cout << ans << endl;
		}
	}
	return 0;
}
