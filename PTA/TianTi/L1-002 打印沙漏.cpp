#include <iostream>

using namespace std;

int main()
{
	int n, sum = 1, line = 1;
	char c;
	cin >> n >> c;
	while( n - sum > line )
	{
		line += 2;
		sum += line * 2;
	}
	if(n - sum < 0)
	{
		sum -= 2 * line;
		line -= 2;
	}
	for(int i = line; i > 0; i -= 2)
	{
		for(int j = (line - i) / 2; j > 0; j--) cout << ' ';
		for(int j = i; j > 0; j--) cout << c;
		cout << endl;
	}
	for(int i = 3 ; i <= line; i += 2)
	{
		for(int j = (line - i) / 2; j > 0; j--) cout << ' ';
		for(int j = i; j > 0; j--) cout << c;
		cout << endl;
	}
	cout << n - sum << endl;
	return 0;
}
