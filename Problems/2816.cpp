#include<bits/stdc++.h>
using namespace std;
int main()
{    int n, m;
	 cin >> n >> m;
 	 vector<int> a(n);
 	 vector<int> b(m);
 	 for (int i = 0; i < n; i++) {
 		 cin >> a[i];
 	 }
 	 for (int i = 0; i < m; i++) {
 		 cin >> b[i];
 	 }
 	 int k = 0, cnt = 0, flag = 0;
 	 for (int i = 0; i < n;) {
 		 for (; k < m; ) {
 			 if (a[i] == b[k]) {
 				 i++;
 				 k++;
 				 break;
 			 }
			 else k++;
 		 }
 		 if (i != n && k == m) {           
			cout << "No" << endl;           
			return 0;       
		}   
	}   
	cout << "Yes" << endl;
	return 0;
}
