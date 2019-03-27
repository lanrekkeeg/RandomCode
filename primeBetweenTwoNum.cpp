#include <iostream>
using namespace std;

bool is_prime(int n) {

	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (n%i == 0) {
			count++;
		}
		if (count > 2) {
			return false;
		}
	}
	if(count == 2)
		return true;
	else return false;
}
int main() {
	int line;
	cin >> line;
	int m, n;

	while (line != 0) {
		cin >> m >> n;
		for (int i = m; i <= n; i++) {

			if (i == 2)cout << i << endl;
			if (i % 2 == 0 || i % 3 == 0)continue;
			else if (is_prime(i)) {
				cout << i << endl;
			}
		}
		line--;

	}
	return 0;
}