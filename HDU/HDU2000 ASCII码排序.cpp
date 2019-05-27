/*
ASCII码排序 

Problem Description
输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
 

Input
输入数据有多组，每组占一行，有三个字符组成，之间无空格。
 

Output
对于每组输入数据，输出一行，字符中间用一个空格分开。
 

Sample Input
qwe
asd
zxc
 

Sample Output
e q w
a d s
c x z

*/

#include <cstdio>
#include <algorithm>
using namespace std;
char arr[5];
int main () {
	while(~scanf("%s",arr)) {
		sort(arr,arr+3);
		for(int i = 0; i < 3; i++) {
			if(i!=0) putchar(' ');
			putchar(arr[i]);
		}
		putchar('\n');
	}
	return 0;
}