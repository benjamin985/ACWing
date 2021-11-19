#include<bits/stdc++.h>
using namespace std;
#define N 100010
int head, e[N], ne[N], idx;
void init() {
	head = -1;
	idx = 0;
}

void add_to_head(int x) {
	e[idx] = x;
	ne[idx] = head;
	head = idx;
	idx++;
}

void add(int k, int x) {
	e[idx] = x;
	ne[idx] = ne[k];
	ne[k] = idx;
	idx++;
}

void remove(int k) {
	ne[k] = ne[ne[k]];
}
int main(){
	int n, m;
	cin >> n;
	char str;
	init();
	while (n--) {
		cin >> str;
		if (str == 'H') {
			int x;
			cin >> x;
			add_to_head(x);
		}
		else if (str == 'D') {
			int k;
			cin >> k;
			if (!k) head = ne[head];
			remove(k-1);
		}
		else {
			int k, x;
			cin >> k >> x;
			add(k-1, x);
		}
	}
	for (int i = head; i != -1; i = ne[i]) {
		cout << e[i] << " ";
	}
	cout << endl;
}	

