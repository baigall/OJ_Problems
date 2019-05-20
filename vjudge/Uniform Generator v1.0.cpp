#include <cstdio>
int gcd(int a, int b) {
	return a%b?gcd(b,a%b):b;
}
int main() {
	int a,b;
	while(~scanf("%d%d",&a,&b)) {
		printf("%10d%10d",a,b);
		if(gcd(a,b) == 1)
			printf("    Good Choice\n");
		else printf("    Bad Choice\n");
		putchar('\n');
	}
	return 0;
}

/*
���������ۡ���������ɵ����ֵĵ�x+1������Ϊ��

 seed(x+1) = (seed(x)+STEP)%MOD = (seed(x)%MOD + STEP%MOD)%MOD

 = ... = (seed(0)%MOD + (STEP*x)%MOD)%MOD

 �����������ȫ������һ������ 0 <= i ��j < MOD ʹ������ֵ��ͬ������

 seed(i) = (seed(0)%MOD + (STEP*i)%MOD)%MOD

 seed(j) =?(seed(0)%MOD + (STEP*j)%MOD)%MOD

��seed(i) = seed(j) ���Ե�֪?(STEP*(j-i))%MOD = 0 �� i �� j����STEP*(j-i)ΪMOD�ı�����

����Ϊ j-i < MOD ����gcd( STEP��MOD ) �� 1��

��STEP��һ������MOD�����ӣ���MOD����j-i����STEP����MOD/(j-i)������STEP����MOD��

�ɴ˿�֪����������ȫ�����еĳ�Ҫ������?gcd( STEP��MOD ) = 1��

*/
