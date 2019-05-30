#include <iostream>
using namespace std;
int main() {
	int day;
	double h,u,less,f,d,now;
	while(cin>>h>>u>>d>>f&&h) {
		day = 0;
		now = 0.0;
		less = (u*f)/100.0;
		while(1) {
			now += u;
			day++;
			if(now > h) {
				cout << "success on day " << day << endl; 
				break;
			}
			u -= less;
			now -= d;
			if(now < 0) {
				cout << "failure on day " << day << endl;
				break; 
			}
		}
	}
	return 0;
}
