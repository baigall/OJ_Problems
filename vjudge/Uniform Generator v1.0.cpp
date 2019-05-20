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
分析：数论。随机数生成的数字的第x+1个数字为：

 seed(x+1) = (seed(x)+STEP)%MOD = (seed(x)%MOD + STEP%MOD)%MOD

 = ... = (seed(0)%MOD + (STEP*x)%MOD)%MOD

 如果不能生成全部序列一定存在 0 <= i ，j < MOD 使得生成值相同，即：

 seed(i) = (seed(0)%MOD + (STEP*i)%MOD)%MOD

 seed(j) =?(seed(0)%MOD + (STEP*j)%MOD)%MOD

由seed(i) = seed(j) 可以得知?(STEP*(j-i))%MOD = 0 且 i ≠ j，即STEP*(j-i)为MOD的倍数；

又因为 j-i < MOD 所以gcd( STEP，MOD ) ≠ 1。

（STEP中一定含有MOD的因子，若MOD整除j-i，则STEP含有MOD/(j-i)，否则STEP含有MOD）

由此可知，可以生成全部序列的充要条件是?gcd( STEP，MOD ) = 1。

*/
