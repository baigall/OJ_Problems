#include <iostream>
#include <string>
using namespace std;

int main() {
	int t,p1,p2,ans,t1,t2,step = 0;
	string s1,s2,s;
	cin >> t;
	while(t--) {
		ans = 0;
		cin >> s1 >> s2 >> s;
		cout << "case #" << step++ << ":" << endl;
		p1 = s.find(s1);
		p2 = s.find(s2);
		if(p1 == -1 || p2 == -1) {
			cout << 0 << endl;
			continue;
		}
		t1 = s.rfind(s1) - s.find(s2) - s2.length();
		t2 = s.rfind(s2) - s.find(s1) - s1.length();
		ans = max(max(t1,t2),ans);
		cout << ans << endl;
	}
	return 0;
}
