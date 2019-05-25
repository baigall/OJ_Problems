#include <iostream>
#include <cstring>
using namespace std;
const int maxn=1000001;
bool s[maxn];
int su[maxn];
int num;

void prime() {
	num = 0;
	memset(s,true,sizeof(s));
	for(int i=2;i<maxn;i++) {
		if(s[i]) {
			su[num++] = i;
		}
		for(int j=0;j<num;j++) {
			if(i*su[j] > maxn) break;
			s[i*su[j]] = false;
			if(i % su[j] == 0) break;
		}
	}
}

int main() {
	prime();
	for(int i=0;i<50;i++) {
		cout << su[i] << endl;
	}
	return 0;
}
