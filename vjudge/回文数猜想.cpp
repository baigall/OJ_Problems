#include <iostream>
#include <vector>
using namespace std;

int numrev (int n) {
	int ans = 0;
	while(n) {
		ans = ans * 10 + n % 10;
		n /= 10;
	}
	return ans;
}

int main() {
	int a,b,tmp,idx;
	while(cin >> a) {
		vector<int> q;
		idx = 0;
		while(1) {
			q.push_back(a);
			b = numrev(a);
			if(a == b) break;
			else {
				a += b;
				idx++;
			}
		}
		cout << idx << endl;
		for(int i=0;i<q.size();i++) {
			if(i!=0) cout << "--->";
			cout << q[i];
		}
		cout << endl;
	}
	return 0;
}
