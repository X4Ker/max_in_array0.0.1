#include <iostream>
#include <string>

using namespace std;

int main() {
	int a[10];
	int max = 0;
	for (int i = 0; i < 10; i++) {
		if (!(cin >> a[i])) {
			cout << "An error has occurred while reading numbers";
			break;
		}

	}
	for (int i = 0; i < 10; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	cout << "MAX = " << max;
	system("pause");
	return 0;
 }