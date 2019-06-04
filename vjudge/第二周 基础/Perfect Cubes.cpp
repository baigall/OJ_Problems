#include <iostream>
using namespace std;

int main() {
	int tmp;
	for(int i=1;i<=200;i++) {
		for(int j=2;j<=200;j++) {
			if(j*j*j > i*i*i) continue;
			for(int k=j+1;k<=200;k++) {
				if(j*j*j + k*k*k > i*i*i) continue;
				for(int l=k+1;l<=200;l++) {
					if(j*j*j + k*k*k + l*l*l == i*i*i)
						cout << "Cube = " << i << ", Triple = (" <<j<<','<<k<<','<<l<<")" << endl;
				}
			}
		}
	}
	return 0;
}
