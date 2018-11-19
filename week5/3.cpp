// 给定k（1<k<100）个正整数，其中每个数都是大于等于1，小于等于10的数。写程序计算给定的k个正整数中，1，5和10出现的次数。

#include <iostream>
using namespace std;

int main() {
	int k, n;
	int n1 = 0;
	int n5 = 0;
	int n10 = 0;
	cin >> k;
	if (k > 1 && k < 100) {
		for (int i = 0; i < k; i++) {
			cin >> n;
			if (n == 1) n1 += 1;
			if (n == 5) n5 += 1;
			if (n == 10) n10 += 1;
		}
	}
	cout << n1 << endl;
	cout << n5 << endl; 
	cout << n10 << endl;
	return 0;
}
