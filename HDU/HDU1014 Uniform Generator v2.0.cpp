#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int s[1000005];
int main() {
	int n,m,i;
	while(cin >> n >> m) {
		s[0] = 0;
		for(i = 1; i < m; i++)
			s[i] = (s[i-1]+n)%m;
		sort(s,s+m);
		for(i=0;i<m;i++)
			if(s[i]!=i) break;
		printf("%10d%10d",n,m);
		if(i==m)
			cout << "    Good Choice" << endl << endl;
		else cout << "    Bad Choice" << endl << endl;
	}
	return 0;
}
