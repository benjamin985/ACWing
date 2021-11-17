#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> A(n);
    vector<int> B(m);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int j = 0; j < m; j++) {
        cin >> B[j];
    }
    int k = m - 1;
    for (int i = 0; i < n; i++) {
        while(k >= 0 && A[i] + B[k] > x) {
            k--;
        }
        if (A[i] + B[k] == x) {
            cout << i << " " << k << endl;
        }
    }
    return 0;
}
