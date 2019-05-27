/*
	A+B for Input-Output Practice (IV)

Problem Description
Your task is to Calculate the sum of some integers.
 

Input
Input contains multiple test cases. Each test case contains a integer N, and then N integers follow in the same line. A test case starting with 0 terminates the input and this test case is not to be processed.
 

Output
For each group of input integers you should output their sum in one line, and with one line of output for each line in input. 
 

Sample Input
4 1 2 3 4
5 1 2 3 4 5
0 
 

Sample Output
10
15

*/

#include <cstdio>
int main() {
	int n,tmp,sum;
	while(~scanf("%d",&n) &&n){
		sum = 0;
		while(n--){
			scanf("%d",&tmp);
			sum += tmp;
		}
		printf("%d\n",sum );
	}
	return 0;
}