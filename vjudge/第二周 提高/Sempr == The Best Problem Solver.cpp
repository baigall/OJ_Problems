#include <iostream>
using namespace std;

int main() {
	int a,b,t,n,f1,f2;
	cin >> n;
	while(n--) {
		f1 = f2 = 0;
		cin >> a >> b >> t;
		f1 = t%a;
		f2 = t%b;
		if(f1 == f2) cout << "Both!" << endl;
		else if(f1 < f2) cout << "Sempr!" << endl;
		else if(f1 > f2) cout << "Xiangsanzi!" << endl;
	}
	return 0;
}