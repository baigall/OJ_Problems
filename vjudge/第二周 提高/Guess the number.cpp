#include <iostream>
using namespace std;
int main() {
	int a,b,c,t,flag;
	cin >> t;
	while(t--) {
		flag = 0;
		cin>>a>>b>>c;
		for(int i=1000;i<10000;i++) {
			if(i%a==0&&(i+1)%b==0&&(i+2)%c==0) {
				flag = 1;
				cout << i << endl;
				break;
			}
		}
		if(!flag) cout << "Impossible" << endl;
	}
	return 0;
}
