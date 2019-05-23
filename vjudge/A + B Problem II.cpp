#include <iostream>
#include <cstring>
using namespace std;
int t,lenA,lenB,tmp,i,up,c[2005],flag;
char a[1005],b[1005],ta[1005],tb[1005];
void add(int len) {
	up = 0;
	for(i = 0; i < len; i++) {
		tmp = a[i] + b[i] - '0'*2 + up;
		c[i] = tmp % 10;
		up = tmp / 10;
		if(i == len-1 && tmp >= 10) flag = 1;
	}
	if(up) c[i] = up;
}
void complement(int start, int end, char* t) {
	for(int x=start; x < end; x++)
		t[x] = '0';
}
int main() {
	cin >> t;
	for(int x=1;x<=t;x++) {
		flag = 0;
		memset(c,0,sizeof(c));
		cin >> a >> b;
		strcpy(ta,a);
		strcpy(tb,b);
		strrev(a);
		strrev(b);
		lenA = strlen(a);
		lenB = strlen(b);
		if(lenA > lenB)
			complement(lenB,lenA,b);
		if(lenA < lenB)
			complement(lenA,lenB,a);
		add(max(lenA,lenB));
		cout << "Case " << x << ":" << endl;
		cout << ta << " + " << tb << " = ";
		for(int j=i;j>=0;j--) {
			if(!flag) {
				flag = 1;
				continue;
			}
			cout << c[j];
		}
		cout << endl;
		if(x != t) cout << endl;
	}
	return 0;
}
