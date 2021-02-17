#include "bits/stdc++.h"
using namespace std;
//https://atcoder.jp/contests/abc144/tasks/abc144_b

int main() {
	int n;
	cin >> n;
	string s = "No";
	for (int x = 0; x <= 9; x++) {
		for (int y = 0; y <= 9; y++) {
			if (x * y == n) s = "Yes";
		}
	}
	cout << s << endl;
}