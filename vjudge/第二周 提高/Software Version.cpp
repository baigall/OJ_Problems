#include <iostream>
using namespace std;
int main() {
	int t,v1,v2,tmp,a1,b1,c1,a2,b2,c2;
	cin >> t;
	while(t--) {
		cin>>a1>>b1>>c1;
		cin>>a2>>b2>>c2;
		v1=a1*100+b1*10+c1;
		v2=a2*100+b2*10+c2;
		if(v1==v2) cout << "Same" << endl;
		else if(v1 > v2) cout << "First" << endl;
		else if(v1 < v2) cout << "Second" << endl;
	}
	return 0;
}
