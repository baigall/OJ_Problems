#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string str;
	while(cin >> str) {
		vector<int> arr;
		for(int i=0;i<str.length();i++)
			if(str[i]=='5')str[i]=' ';
		stringstream ss(str);
		while(ss >> str)
			arr.push_back(stoi(str));
		sort(arr.begin(),arr.end());
		for(int i=0;i<arr.size();i++){
			if(i!=0)cout << ' ';
			cout << arr[i];
		}
		cout << endl;

	}
	return 0;
}
