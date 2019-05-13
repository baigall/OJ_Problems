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