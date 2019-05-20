#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n = 5;
	double e,tmp;
	cout << "n e\n- -----------\n0 1\n1 2\n2 2.5\n";
	e = 2.5;
	tmp = 2;
	for(int i=3; i<=9;i++) {
		tmp*=i;
		e += 1.0/tmp;
		printf("%d %.9lf\n",i,e);
	}
	return 0;
}
