#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a,c;
	while(cin >> a && a != -1) {
		c = 0;
		vector<int> q;
		q.push_back(a);
		while(cin >> a && a) {
			q.push_back(a);
		}
		sort(q.begin(),q.end());
		for(int i=0;i<q.size();i++) {
			for(int j=i+1;j<q.size();j++) {
				if(q[j]>q[i]*2)break;
				if(q[j] == q[i]*2) c++;
			}
		}
		cout << c << endl;
	}
	return 0;
}
