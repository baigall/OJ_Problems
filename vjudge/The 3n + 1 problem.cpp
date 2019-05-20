#include <iostream>
using namespace std;
int main() {
	int i,j,cnt,MAX,x;
	long long tmp;
	while(cin >> x >> j) {
		MAX = 0;
		for(i = min(x,j);i <= max(x,j); i++) {
			tmp = i;
			cnt = 1;
			while(tmp!=1) {
				if(tmp%2==1) {
					tmp = 3*tmp+1;
				}else tmp /= 2;
				cnt++;
			}
			MAX = max(cnt,MAX);
		}
		cout << x << ' ' <<  j<< ' ' << MAX << endl;
	}
	return 0;
}
