

#include <iostream>
using namespace std;



string prefix(string A, string a) {
	int c = 0;
	int s = a.size();
	for (int i = 0;i < s ;i++) {
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
	string A,a;
	cin >> A >> a;
	cout<<prefix(A, a);
}

