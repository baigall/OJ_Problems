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
5! = 1 * 2 * 3 * 4 * 5 = 120,ĩβ0�ĸ���Ϊ1�����ĩβ��0������������ʵ����ת��Ϊ��������ֽ��ʽ����5�ĸ�������������ת��Ϊ���׳�������5���ֵĴ������м���5ĩβ���м���0��
*/
