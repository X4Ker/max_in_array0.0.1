#include <iostream>
#include <string>

using namespace std;

int main() {
	int a[10], l;
	int max = -2147483648;
	for (int i = 0; i < 10; i++) {
		if (!(cin >> a[i])) {
			cout << "An error has occurred while reading numbers";
			l = -1;
			break;
		}

	}
	for (int i = 0; i < 10; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	if(l != -1) {cout << "MAX = " << max;}
	system("pause");
	return 0;
 }
