#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n,sum;
	cout << "PERFECTION OUTPUT" << endl;
	while(cin >> n && n) {
		sum = 0;
		for(int i=1;i<=n/2;i++)
			if(n%i==0) sum += i;
		if(sum == n) printf("%5d  PERFECT\n",n);
		else if(sum > n) printf("%5d  ABUNDANT\n",n);
		else if(sum < n) printf("%5d  DEFICIENT\n",n);
	}
	cout << "END OF OUTPUT" << endl;
	return 0;
} 


