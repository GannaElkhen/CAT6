

#include <iostream>
using namespace std;



string suffix(string A, string a) {
	int c = 0;
	int s = a.size();
	for (int i = 0;i < s;i++) {
		if (a[i] == A[i])
			c++;
	}
	if (c == s)
		return "YES";
	else
		return "NO";

}

int main()
{
	string A, a;
	cin >> A >> a;
	reverse(A.begin(), A.end());
	reverse(a.begin(), a.end());
	cout << suffix(A, a);
}

