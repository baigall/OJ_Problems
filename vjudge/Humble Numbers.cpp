#include <iostream>
#include <queue>
#include <set>
using namespace std;
set<long> st;
priority_queue<long long,vector<long long>,greater<long long> > q;
const int d[4]={2,3,5,7};
long long arr[10000],idx = 0,temp;
void init() {
	arr[0] = 1;
	q.push(1);
	st.insert(1);
	while(1) {
		temp = q.top();
		arr[idx++] = temp;
		if(idx > 5850) break;
		q.pop();
		for(int i=0;i<4;i++) {
			if(st.count(temp * d[i]) == 0) {
				q.push(temp * d[i]);
				st.insert(temp * d[i]);
			}
		}
	}
}

int main() {
	int n;
	init();
	while(cin >> n && n) {
		cout << "The " << n;
		if(n%10==1&&n%100!=11)
			cout <<"st ";
		else if(n%10==2&&n%100!=12)
			cout << "nd ";
		else if(n%10==3&&n%100!=13)
			cout << "rd ";
		else cout << "th ";
		cout << "humble number is " << arr[n-1] <<'.' << endl;
	}
	return 0;
}
