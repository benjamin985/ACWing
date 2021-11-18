#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--) {
		int x, res = 0;
		cin >> x;
		while (x) {
			x -= (x & -x);
			res++;
		}
		cout << res << " ";
	}
}
