#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    vector<int> res(n);
    vector<int> ans;
    for (int i = 0; i < n; i++) {
      cin >> res[i];
    }
    for (int i = 0; i < n; i++) {
        while (res[i]) {
            if (res[i] & 1 == 1) cnt++;
            res[i] = res[i] >> 1;
            // cout << res[i] << " ";
        }
        ans.push_back(cnt);
        cnt = 0;
        // cout << endl;
        
    }
    for (auto & x : ans) {
        cout << x << " ";
    }
}
