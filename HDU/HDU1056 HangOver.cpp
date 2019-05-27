#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	double s,c,i;
	while(cin >> c && c) {
		s = 0;
		for(i = 1; s < c; i++) {
			s += 1.0/(i+1);
		}
		printf("%.0lf card(s)\n",i-1);
	}
	return 0;
}
