/*
A+B for Input-Output Practice (VI)

Problem Description
Your task is to calculate the sum of some integers.
 

Input
Input contains multiple test cases, and one case one line. Each case starts with an integer N, and then N integers follow in the same line. 
 

Output
For each test case you should output the sum of N integers in one line, and with one line of output for each line in input. 
 

Sample Input
4 1 2 3 4
5 1 2 3 4 5
 

Sample Output
10
15
*/
#include <cstdio>
int main() {
	int n,tmp,sum;
	while(~scanf("%d",&n)){
		sum = 0;
		while(n--){
			scanf("%d",&tmp);
			sum += tmp;
		}
		printf("%d\n",sum );
	}
	return 0;
}