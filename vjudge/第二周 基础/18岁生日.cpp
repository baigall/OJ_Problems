#include <iostream>
using namespace std;
int check(int y) {
	if(y%400==0||(y%4==0&&y%100!=0)) return 1;
	else return 0;
}
int main() {
	int t,y,m,d,sum;
	char c;
	cin >> t;
	while(t--) {
		sum = 0;
		cin>>y>>c>>m>>c>>d;
		if(m==2&&d==29) {
			cout << -1 << endl;
			continue;
		}
		for(int i=y;i<y+18;i++) {
			if(check(i)) sum+=366;
			else sum += 365;
		}
		if(m > 2) {
			if(check(y)) sum--;
			else if(check(y+18)) sum++;
			cout << sum << endl;
		}else cout << sum << endl;
	}
	return 0;
} 

