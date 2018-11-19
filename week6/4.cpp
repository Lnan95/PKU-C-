// 输入6个正整数，且这6个正整数中至少存在一个奇数和一个偶数。
// 设这6个正整数中最大的奇数为a，最小的偶数为b，求出 | a - b | 的值

//输入为一行，6个正整数, 且6个正整数都小于100
//输入保证这6个数中至少存在一个奇数和一个偶数

// 输出为一行，输出最大的奇数与最小的偶数之差的绝对值




#include <iostream>
using namespace std;

int main() {
	int x;
	int odd = 100;
	int even = 0;

	for (int i = 0; i < 6; i++) {
		cin >> x;
		if (x % 2 > 0 && x > even) even = x;
		else if (x % 2 == 0 && x < odd) odd = x;
	}
	if (even >= odd) cout << even - odd << endl;
	else cout << odd - even << endl;

	return 0;
}
