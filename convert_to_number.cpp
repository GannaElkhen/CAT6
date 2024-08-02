

#include <iostream>
using namespace std;
int main()
{
	int m = 1;
	int sum = 0;
	int b[10];
	char a[10] = { '0','1','2','3','4','5','6','7','8','9' };
	string s;
	cin >> s;
	int r = s.size();
	for (int i = 0;i < r;i++) {
		for (int j = 0;j <= 9;j++) {
			if (s[i] == a[j])
				b[i] = j;

		}
	}
	for (int i = 0;i < r;i++) {
		if (i==0&&b[0] == 0)
			continue;
		else 
			cout << b[i];
	}
	r--;
	for (int i = r;i >= 0;i--) {

		sum+= b[i] * m;
		m *= 10;

	}


	cout << " " << sum * 3;
	return 0;
}

