#include <iostream>
using namespace std;

int main() {
	int a[10], max = 0, k = 0;
	for (int i = 0; i <= 9; i++) {
		cin >> a[i];
	}
	for (int i = 0; i <= 9; i++) {
		if (a[i] >= 0) {
			cout << " " << a[i];
		}
		else {
			k = k + 1;
		}
	}
	if (k == 10) {
		max = -2147483647;
		for (int i = 0; i <= 9; i++) {
			if (a[i] > max) {
				max = a[i];
			}
		}
	}
	if (k == 10) { cout << max; }
	system("pause");
	return 0;
}
