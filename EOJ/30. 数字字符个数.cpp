//********** Specification of Digits **********
int Digits(char *s);
/* PreCondition: sָ��һ�����ȷ�ΧΪ 1 �C 80 ����Ӣ�ġ�������ɵ��ַ���
    PostCondition: ����s��ָ�ַ����������ַ� '0'��'9' �ĸ���
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
