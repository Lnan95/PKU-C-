// 从键盘输入一个任意的三位整数，要求正确地分离出它的百位、十位和个位数，并分别在屏幕上输出，输出采用每行输出一个数的方式，不带其它符号。


#include <iostream>
using namespace std;

int main() {
	int x, x100, x10, x1;

	cin >> x;
	if (x >= 100) {
		x100 = x / 100;
		x10 = x / 10 - x100 * 10;
		x1 = x % 10;
	}
	cout << x100 << endl; 
	cout << x10 << endl; 
	cout << x1 << endl;
	return 0;
}
