#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll pow10(int exp) {
	ll product = 1;
	for (int i = 0; i < exp; i++) { product *= 10; }
	return product;
}
int main() {
	int q;
	ll k;
	cin >> q;
 
	for (int i = 0; i < q; i++) {
		cin >> k;
		int n = 1;
		while (k > n * 9 * pow10(n - 1)) {
			k -= n * 9 * pow10(n - 1);
			n++;
		}
		long num = (k - 1) / n + pow10(n - 1);
		int loc = (int)((k - 1) % n);
		cout << to_string(num)[loc] << endl;
	}
}