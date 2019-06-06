#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct point {
	double x,y;
} arr[105];

int cmp(point a, point b) {
	double t1, t2;
	t1 = a.x / sqrt(a.x*a.x+a.y*a.y);
	t2 = b.x / sqrt(b.x*b.x+b.y*b.y);
	return t1 > t2;
}

int main() {
	int t;
	while(cin >> t) {
		for(int i=0;i<t;i++) {
			cin >> arr[i].x >> arr[i].y;
		}
		sort(arr,arr+t,cmp);
		for(int i=0;i<t;i++) {
			cout << arr[i].x << ' ' << arr[i].y << endl;
		}
	}
	return 0;
}
