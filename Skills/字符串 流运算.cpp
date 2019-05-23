#include <iostream>
#include <sstream>
using namespace std;
char cs[1005];
int main() {
	int t,f,c;
	cin >> t;
	getchar();
	while(t--) {
		gets(cs);
		f = 0;
		stringstream ss(cs);
		string s;
		while(ss >> s){
			if(!f) f++;
			else cout << ' ';
			for(int i = s.length() - 1; i >= 0; i--)cout<<s[i];
		}
		cout << endl;
	}
	return 0;
}
