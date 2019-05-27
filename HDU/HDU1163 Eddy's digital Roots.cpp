#include <iostream>
using namespace std;
int main() {
	int n,sum,tmp;
	while(cin >> n && n) {
		sum = 1;
		tmp = n;
		while(tmp--)
			sum = (sum*n)%9;
		if(sum==0) cout << 9 << endl;
		else cout << sum << endl;
	}
	return 0;
}

// 九余数定理：一个数的每位数字之和等于这个数对9取余，如果等于0就是9
