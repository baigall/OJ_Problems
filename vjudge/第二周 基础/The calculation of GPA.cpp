#include <iostream>
#include <cstdio>
using namespace std;
int gpa(double u) {
	int tmp;
	if(u>= 90 && u <= 100) tmp = 4;
	else if(u >= 80 && u < 90) tmp = 3;
	else if(u >= 70 && u < 80) tmp = 2;
	else if(u >= 60 && u < 70) tmp = 1;
	else if(u >= 0 && u < 60) tmp = 0;
	return tmp;
}
int main() {
	int t;
	double c,sum,a,b;
	while(cin >> t) {
		sum = c = 0;
		while(t--) {
			cin >> a >> b;
			c += a;
			if(b >= 0){
				sum += gpa(b) * a;
			}
		}
		if(sum == 0) cout << -1 << endl;
		else printf("%.2lf\n",sum/c);
	}
	return 0;
}
