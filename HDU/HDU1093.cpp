/*
A+B for Input-Output Practice (V) 

Problem Description
Your task is to calculate the sum of some integers.
 

Input
Input contains an integer N in the first line, and then N lines follow. Each line starts with a integer M, and then M integers follow in the same line. 
 

Output
For each group of input integers you should output their sum in one line, and with one line of output for each line in input. 
 

Sample Input
2
4 1 2 3 4
5 1 2 3 4 5
 

Sample Output
10
15
*/

#include <cstdio>
int main() {
	int n,tmp,sum,t;
	scanf("%d",&t);
	while(t--){
		sum = 0;
		scanf("%d",&n);
		while(n--){
			scanf("%d",&tmp);
			sum += tmp;
		}
		printf("%d\n",sum );
	}
	return 0;
}