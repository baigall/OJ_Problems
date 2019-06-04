#include <iostream>
#include <cstring>
using namespace std;
int score[105];
int main() {
	int n,tmp,check;
	while(cin >> n && n) {
		memset(score,0,sizeof(score));
		for(int i=0;i<n;i++) {
			cin >> tmp;
			score[tmp]++;
		}
		cin >> check;
		cout << score[check] << endl;
	}
	return 0;
}
