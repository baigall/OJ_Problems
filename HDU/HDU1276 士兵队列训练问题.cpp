#include <iostream>

using namespace std;

int arr[5000];

int main() {
    int n,t,sum,c,f;
    while(cin >> n) {
        while(n--) {
            cin >> t;
            c = f = 0;
            sum = t;
            for(int i = 1; i <= t; i++) arr[i] = i;
            while(sum > 3) {
                for(int i = 1; i <= t; i++) {
                    if(arr[i]) {
                        if(++c == 2){
                            arr[i] = 0;
                            sum--;
                            c = 0;
                        }
                    }
                }
                c=0;
                if(sum<=3)break;
                for(int i = 1; i <= t; i++) {
                    if(arr[i]) {
                        if(++c == 3) {
                            arr[i] = 0;
                            sum--;
                            c = 0;
                        }
                    }
                }
                c=0;
            }
            for(int i = 1; i <= t; i++) {
                if(arr[i]){
                    if(f++) cout << ' ';
                    cout << arr[i];
                }
            }
            cout << endl;

        }
    }
    
    return 0;
}
