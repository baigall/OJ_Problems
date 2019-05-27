/*
A+B for Input-Output Practice (VII)

Problem Description
Your task is to Calculate a + b.
 

Input
The input will consist of a series of pairs of integers a and b, separated by a space, one pair of integers per line. 
 

Output
For each pair of input integers a and b you should output the sum of a and b, and followed by a blank line. 
 

Sample Input
1 5
10 20
 

Sample Output
6

30
 

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