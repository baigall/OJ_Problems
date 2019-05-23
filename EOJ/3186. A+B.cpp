#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;
int a[1000], b[1000];
int main() {
	map<string,int> q;
	q["zero"] = 0;
	q["one"]  = 1;
	q["two"]  = 2;
	q["three"]= 3;
	q["four"] = 4;
	q["five"] = 5;
	q["six"]  = 6;
	q["seven"]= 7;
	q["eight"]= 8;
	q["nine"] = 9;
	int t,idx1,idx2,flag,anum,bnum,c = 0;
	string str;
	cin >> t;
	getchar();
	while(t--) {
		idx1 = idx2 = flag = anum = bnum = 0;
		getline(cin,str);
		stringstream ss(str);
		while(ss >> str) {
			if(str == "=") break;
			if(str == "+") flag = 1;
			if(!flag) a[idx1++] = q[str];
			else b[idx2++] = q[str];
		}
		for(int i = 0; i < idx1;i++)
			anum += a[i]*pow(10,idx1-i-1);
		for(int i = 0; i < idx2;i++)
			bnum += b[i]*pow(10,idx2-i-1);
		cout << "case #" << c++ << ':' << endl;
		cout << anum + bnum << endl;
	}
	return 0;
}
