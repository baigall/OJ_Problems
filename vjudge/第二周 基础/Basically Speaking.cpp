#include <iostream>
#include <cmath>
#include <cstring>
#include <map>
using namespace std;

int main() {
	map<char,int> mp1;
	map<int,char> mp2;
	for(int i='0';i <='9';i++) mp1[i] = (int)(i - '0');
	for(int i='A';i <='F';i++) mp1[i] = (int)(i - 'A' + 10);
	for(int i=0;i<10;i++) mp2[i] = i+'0';
	for(int i=10;i<16;i++) mp2[i] = i+'A'-10;
	string num,ans;
	int n,m,idx,tmp;
	while(cin >> num >> n >> m) {
		ans = "";
		tmp = 0;
		for(int i=num.size()-1,j=0;i>=0;i--,j++) {
			tmp += mp1[num[i]] * pow(n,j);
		}
		while(tmp) {
			ans += mp2[tmp%m];
			tmp /= m;
		}
		if(ans.size() > 7) cout << "  ERROR" << endl;
		else {
			for(int i=0;i<7-ans.size();i++)cout << ' ';
			for(int i=ans.size()-1;i>=0;i--) cout << ans[i];
			cout << endl;
		}
	}
	return 0;
}
