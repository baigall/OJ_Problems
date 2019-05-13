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