/*

A + B Problem

Problem Description
Calculate A + B.
 

Input
Each line will contain two integers A and B. Process to end of file.
 

Output
For each case, output A + B in one line.
 

Sample Input
1 1
 

Sample Output
2

*/

#include <cstdio>
int main() {
	int a,b;
	while(~scanf("%d%d",&a,&b)) printf("%d\n",a+b);
	return 0;
}