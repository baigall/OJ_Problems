#include <cstdio>
int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int main() {
	int y,m,d,c;
	while(~scanf("%d/%d/%d",&y,&m,&d)) {
		c = 0;
		months[1] = 28;
		if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) months[1]++;
		for(int i = 0; i < m - 1; i++) c+=months[i];
		c+= d;
		printf("%d\n",c);
	}
	return 0;
}
