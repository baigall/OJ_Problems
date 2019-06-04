#include <iostream>
#include <cstring>
using namespace std;
int c[260];
int main() {
	string s;
	while(getline(cin,s)) {
		memset(c,0,sizeof(c));
		for(int i=0;i<s.size();i++) {
			if(isalpha(s[i]))
				c[s[i]]++;
		}
		for(int i=97;i<=122;i++) {
			cout << char(i) << ':' << c[i] << endl;
		}
		cout << endl;
	}
	return 0;
}
