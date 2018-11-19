// 给定一个十进制整数N，求其对应2进制数中1的个数

#include <iostream>
using namespace std;

int main() {
	int n,k;
	int count = 0;
	//int y[100];
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n;
		//y[k] = n;
		while (n >= 1) {
			if (n % 2 == 1) {
				count += 1;
				n /= 2;
			}
			else n /= 2;
		}
		cout << count << endl;
		count = 0;
	}
	return 0;
}
