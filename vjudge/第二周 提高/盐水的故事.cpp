#include <iostream>
using namespace std;
int main() {
	int time,i,flag;
	double vul,d;
	while(cin >> vul >> d) {
		i = flag = time = 1;
		while(vul > 0) {
			for(int j=1; j <= i; j++) {
				if(vul <= 0) {
					flag = 0;
					break;
				}
				vul -= d;
				time++;
			}
			time ++;
			i++;
			if(!flag) break;
		}
		cout << time - 2 << endl;
	}
	return 0;
}

/*
vul & d  : must be double
*/
