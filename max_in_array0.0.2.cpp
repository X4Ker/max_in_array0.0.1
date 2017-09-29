#include <iostream>
#include <string>

using namespace std;

int main() {
	int a[10], b[10], l;
	int max = 0;
	for (int i = 0; i < 10; i++) {
		if (!(cin >> a[i])) {
			cout << "An error has occurred while reading numbers";
      l = -1;
			break;
		}

	}
	for (int j = 0; j < 10; j++) {
		if (!(cin >> b[j])) {
			cout << "An error has occurred while reading numbers";
			break;
		}

	}
	int j = 0;
	for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				   if (a[i] + b[j] > max) {
					   max = a[i] + b[j];
				}
		 }
	}
	if(l != -1) {cout << "MAX = " << max;}
	system("pause");
	return 0;
 }
