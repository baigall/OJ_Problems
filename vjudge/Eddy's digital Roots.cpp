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

// ����������һ������ÿλ����֮�͵����������9ȡ�࣬�������0����9
