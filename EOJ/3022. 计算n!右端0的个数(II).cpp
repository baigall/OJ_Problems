#include <iostream>

using namespace std;

int main() {
	int t,n,tmp,cnt,step = 0;
	cin >> t;
	while(t--) {
		cnt = 0;
		cin >> n;
		for(int i = 5; i <= n; i++) {
			tmp=i;
			while(tmp % 5 == 0){
				cnt++;
				tmp /= 5;
			}
		}
		cout << "case #" << step++ << ':' << endl;
		cout << cnt << endl;
	}
	return 0;
}

/*
5! = 1 * 2 * 3 * 4 * 5 = 120,末尾0的个数为1。求解末尾的0个数的问题其实可以转化为求解因数分解后式子中5的个数，所以问题转化为求解阶乘中因数5出现的次数，有几个5末尾就有几个0。
*/
