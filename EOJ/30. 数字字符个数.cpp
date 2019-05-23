//********** Specification of Digits **********
int Digits(char *s);
/* PreCondition: s指向一个长度范围为 1 – 80 的由英文、数字组成的字符串
    PostCondition: 返回s所指字符串中数字字符 '0'—'9' 的个数
*/

#include <stdio.h>

//********** Specification of Digits **********
int Digits(char *s) {
	int c=0;
	for(int i = 0;s[i]!='\0';i++) {
		if(s[i] >= '0' && s[i] <= '9') c++;
	}
	return c;
}

/***************************************************************/
int main() {
    char s[81];
    scanf("%s", s);
    printf("%d\n", Digits(s));
    return 0;
}
