#include <iostream>
#include <cstring>
using namespace std;
const int maxn=1000001;
int s[maxn];
int su[maxn];
int num;

void prime() {
	num = 0;
	memset(s,0,sizeof(s));
	for(int i=2;i<maxn;i++) {
		if(s[i] == 0) {
			su[num++] = i;
			s[i]=i;
		}
		for(int j=0;j<num;j++) {
			if(i*su[j] > maxn) break;
			s[i*su[j]] = su[j];
			if(i % su[j] == 0) break;
		}
	}
}

int main() {
	prime();
	for(int i=0;i<100;i++)
		cout << s[i] << endl;
	return 0;
}
