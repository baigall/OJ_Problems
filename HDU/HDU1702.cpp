#include <iostream>
#include <queue>
#include <stack>
#include <string>
using namespace std;
int main() {
	int t,n,d;
	string tmp;
	cin >> t;
	while(t--) {
		cin >> n >> tmp;
		if(tmp == "FIFO") {
			queue <int> q;
			while(n--) {
				cin >> tmp;
				if(tmp == "IN") {
					cin >> d;
					q.push(d);
				}
				if(tmp == "OUT") {
					if(!q.empty()) {
						cout << q.front() << endl;
						q.pop();
					} else cout << "None" << endl;
				}
			}
		} else {
			stack<int> q;
			while(n--) {
				cin >> tmp;
				if(tmp == "IN") {
					cin >> d;
					q.push(d);
				}
				if(tmp == "OUT") {
					if(!q.empty()) {
						cout << q.top() << endl;
						q.pop();
					} else cout << "None" << endl;
				}
			}
		}
	}
	return 0;
}
