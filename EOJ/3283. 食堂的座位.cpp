#include <iostream>
using namespace std;
int main(){
	int n,m,sum;
	while(cin >> n >> m) {
		sum=0;
		for(int i=0;i<m;i++) {
			if(i%2==0) sum += (int)(n/2.0+0.5);
			else sum += n/2;
		}
		cout << sum << endl;
	}
	return 0;
}
