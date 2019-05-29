#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 1000001;
bool s[maxn];
int su[maxn],num,n,cnt;
int prime() {
	num = 0;
	memset(s,true,sizeof(s));
	for(int i=2;i<maxn;i++) {
		if(s[i]) su[num++] = i;
		
		for(int j=0;j<num;j++) {
			if(i*su[j] > maxn) break;
			s[i*su[j]] = false;
			if(i%su[j] == 0) break;
		}
	}
}
int main() {
	prime();
	while(cin >> n && n) {
		cnt = 0;
		for(int i=0;su[i] <= n/2;i++) {
			if(s[n-su[i]]) cnt++;
		}
		cout << cnt << endl;
	} 
	return 0;
}
