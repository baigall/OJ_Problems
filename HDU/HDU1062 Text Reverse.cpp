/*

Text Reverse

Problem Description

Ignatius likes to write words in reverse way. Given a single line of text which is written by Ignatius, you should reverse all the words and then output them.
 

Input

The input contains several test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow.
Each test case contains a single line with several words. There will be at most 1000 characters in a line.
 

Output

For each test case, you should output the text which is processed.
 

Sample Input
3
olleh !dlrow
m'I morf .udh
I ekil .mca
 

Sample Output
hello world!
I'm from hdu.
I like acm.

Hint

Remember to use getchar() to read '\n' after the interger T, then you may use gets() to read a line and process it.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t,l;
    string tmp;
    cin >> t;
    getchar();
    while(t--) {
        getline(cin,tmp);
        l = tmp.length();
        for(int i = 0,idx = -1 ; i <= l; i++) {
            if(tmp[i] == ' ' || i == l) {
                for(int j = i-1; j > idx; j--) cout << tmp[j];
                if(i != l) cout << ' ';
                else cout << endl;
                idx = i;
            }
        }
    }
    return 0;
}