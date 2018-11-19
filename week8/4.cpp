// 在一个长度为n(n < 1000)的整数序列中，判断是否存在某两个元素之和为k。


// 第一行输入序列的长度n和k，用空格分开。
// 第二行输入序列中的n个整数，用空格分开。

// 如果存在某两个元素的和为k，则输出yes，否则输出no。

#include <iostream>
using namespace std;

int main() {
	int n, k;
	int number[1000];
	int m;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> m;
		for (int j = 0; j < i; j++)
			if (m + number[j] == k) {
				cout << "yes" << endl;
				return 0;
		}
		number[i] = m;
	}
	cout << "no" << endl;
	return 0;
}