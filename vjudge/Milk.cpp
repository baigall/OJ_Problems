#include <iostream>
#include <algorithm>
using namespace std;

struct Point{
	int v;
	double p;
	char b[105];
} arr[105];

int cmp(Point a, Point b) {
	if(a.p == b.p) return a.v > b.v;
	else return a.p < b.p;
}

int main() {
	int t,n;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> arr[i].b >> arr[i].p >> arr[i].v;
			if(arr[i].v < 200) arr[i].p = 0x7fffffff;
			else if(arr[i].v > 1000) arr[i].p *= 0.2;
			else arr[i].p = arr[i].p / (arr[i].v / 200);
		}
		sort(arr,arr+n,cmp);
		cout << arr[0].b << endl;
	}
	return 0;
}
