/*

圆桌问题

Problem Description

圆桌上围坐着2n个人。其中n个人是好人，另外n个人是坏人。如果从第一个人开始数数，数到第m个人，则立即处死该人；然后从被处死的人之后开始数数，再将数到的第m个人处死……依此方法不断处死围坐在圆桌上的人。试问预先应如何安排这些好人与坏人的座位，能使得在处死n个人之后，圆桌上围坐的剩余的n个人全是好人。
 

Input

多组数据，每组数据输入：好人和坏人的人数n（<=32767）、步长m（<=32767）；
 

Output

对于每一组数据，输出2n个大写字母，‘G’表示好人，‘B’表示坏人，50个字母为一行，不允许出现空白字符。相邻数据间留有一空行。
 

Sample Input
2 3
2 4
 

Sample Output
GBBG

BGGB

思路：约瑟夫环
*/
#include <iostream>
#include <cstring>
using namespace std;
int arr[32767 * 2 + 6];
int main() {
    int n,m, c, total;
    while(cin >> n >> m) {
        c = 0; total = 0;
        memset(arr,1,sizeof(arr));
        for(int i = 1,j=0;;i++) {
            if(arr[i]) {
                j++;
                if(j == m) {
                    arr[i] = 0;
                    j = 0;
                    c++;
                }
                if(c == n) break;
            }
            if(i == 2*n) i = 0;
        }
        for(int i = 1;i <= 2*n; i++) {
            if(arr[i] == 0) cout << 'B';
            else cout << 'G';
            total++;
            if(total == 50) {
                cout << endl;
                total = 0;
            }
        }
        cout << endl << endl;
    }
    return 0;
}