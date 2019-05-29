#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	int n;
	double a[100010];
	a[1] = 0.5;
	for(int i=2;i<=100000;i++)
		a[i] = a[i-1] + 1.0 / i / 2;
	cout << "# Cards  Overhang" << endl;
	while(cin >> n)
		printf("%5d%10.3lf\n",n,a[n]);
	return 0;
}
