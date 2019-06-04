#include <iostream>
#include <vector>
using namespace std;
int main() {
	int t,n;
	vector<int> odd;
	cin >> t;
	while(t--) {
		cin >> n;
		odd.clear();
		while(n!=1) {
			if(n%2==1 && n!=1) odd.push_back(n);
			if(n%2==0) n /= 2;
			else {
				n = n*3+1;
			}
		}
		if(odd.size()) {
			for(int i=0;i<odd.size();i++) {
				if(i!=0)cout << ' ';
				cout << odd[i];
			}
			cout << endl;
		}
		else cout << "No number can be output !" << endl;
	}
	return 0;
}
