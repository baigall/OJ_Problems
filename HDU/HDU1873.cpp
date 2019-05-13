#include <queue>
#include <iostream>
#include <string>
using namespace std;

struct Point {
	int lv,id;
	
	bool operator < (const Point & a) const {
		if(lv < a.lv)
			return 1;
		if(lv == a.lv)
			return id > a.id;
			
	}
} a;

int main() {
	int t, doc, lv, n;
	string tmp;
	while(cin >> t) {
		priority_queue<Point> q1,q2,q3;
		n = 0;
		while(t--) {
			cin >> tmp >> doc;
			if(tmp == "IN") {
				n++;
				cin >> lv;
				a.id = n;
				a.lv = lv;
				switch(doc) {
					case 1:
						q1.push(a);
						break;
					case 2:
						q2.push(a);
						break;
					case 3:
						q3.push(a);
						break;
				}
			}
			else {
				switch(doc) {
					case 1:
						if(!q1.empty()){
							cout << q1.top().id << endl;
							q1.pop();
						} else cout << "EMPTY" << endl;
						break;
					case 2:
						if(!q2.empty()){
							cout << q2.top().id << endl;
							q2.pop();
						} else cout << "EMPTY" << endl;
						break;
					case 3:
						if(!q3.empty()){
							cout << q3.top().id << endl;
							q3.pop();
						} else cout << "EMPTY" << endl;
						break;
				}
			}
		}
	}
	return 0;
}
