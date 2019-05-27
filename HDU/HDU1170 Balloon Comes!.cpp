#include <cstdio>

int main() {
	int t,a,b;
	char c;
	scanf("%d",&t);
	while(t--) {
		getchar();
		scanf("%c %d %d",&c,&a,&b);
		switch(c){
			case '+':
				printf("%d\n",a+b);
				break;
			case '-':
				printf("%d\n",a-b);
				break;
			case '*':
				printf("%d\n",a*b);
				break;
			case '/':
				if(a%b==0) printf("%d\n",a/b);
				else printf("%.2lf\n",((double)a / b));
				break;
		}
	}
	return 0;
}
