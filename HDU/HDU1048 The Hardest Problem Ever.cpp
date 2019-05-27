#include <iostream>
#include <string>
using namespace std;

int main() {
	string tmp,str;
	while(cin >> tmp) {
		if(tmp == "ENDOFINPUT") break;
		getchar();
		getline(cin,str);
		getchar();
		cin >> tmp;
		getchar();
		for(int i = 0; i < str.size();i++) {
			if(str[i]>='A'&&str[i]<='Z') {
				if((str[i]+21)>'Z') cout <<(char)(str[i]-5);
				else cout << (char)(str[i]+21); 
			}else cout << str[i];
		}
		cout << endl;
	}
	return 0;
}
