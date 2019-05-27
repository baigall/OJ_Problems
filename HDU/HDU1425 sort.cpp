/*

sort

Problem Description

给你n个整数，请按从大到小的顺序输出其中前m大的数。
 

Input

每组测试数据有两行，第一行有两个数n,m(0<n,m<1000000)，第二行包含n个各不相同，且都处于区间[-500000,500000]的整数。
 

Output

对每组测试数据按从大到小的顺序输出前m大的数。
 

Sample Input
5 3
3 -35 92 213 -644
 

Sample Output
213 92 3

Hint
请用VC/VC++提交
*/
/* ************* 超时代码  **************
#include <algorithm>
#include <iostream>
using namespace std;
int arr[1000005];
int cmp(int a, int b) {
    return a > b;
}
int main() {
    int n,m,first;
    while(cin >> n >> m) {
        first = 0;
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr,arr+n,cmp);
        for(int i = 0; i < m; i++) {
            if(!first++) cout << arr[i];
            else cout << ' ' << arr[i];
        }
        cout << endl;
    }
    return 0;
}


#include <iostream>
#include <cstring>
using namespace std;

int arr[500000 * 2 + 20];

int main() {
    int n,m,t,c,f;
    while(cin >> n >> m) {
        c = f = 0;
        memset(arr,0,sizeof(arr));
        while(n--) {
            cin >> t;
            arr[t + 500000] ++;
        }
        for(int i = 500000 * 2; i >= 0; i--) {
            if(arr[i]){
                
                if(!f++) {cout << i - 500000; c++; }
                else {cout << ' ' << i - 500000; c++;}
            }
            if(c == m) break;
        }
        cout << endl;
    }
    return 0;
}

*/


#include <cstdio>
#include <cstring>
int arr[1000010];
int main() {
    int n,m,t,c,f;
    while(~scanf("%d%d",&n,&m)) {
        c = f = 0;
        memset(arr,0,sizeof(arr));
        while(n--) {
            scanf("%d",&t);
            arr[t + 500000] ++;
        }
        for(int i = 500000 * 2; i >= 0; i--) {
            if(arr[i]){
                
                if(!f++) { printf("%d",i - 500000); c++; }
                else {printf(" %d",i-500000); c++;}
            }
            if(c == m) break;
        }
        printf("\n");
    }
    return 0;
}