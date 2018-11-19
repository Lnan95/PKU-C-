// 从键盘输入一指定金额（以元为单位，如345），然后输出支付该金额的各种面额的人民币数量，
// 显示100元，50元，20元，10元，5元，1元各多少张，要求尽量使用大面额的钞票。

// 一个小于1000的正整数。

// 输出分行，每行显示一个整数，从上到下分别表示100元，50元，20元，10元，5元，1元人民币的张数

#include <iostream>
using namespace std;

int main() {
	int amount;
	cin >> amount;
	// 100
	cout << amount / 100 << endl;
	// 50
	cout << (amount - (amount / 100) * 100) / 50 << endl;
	// 20
	cout << (amount - ((amount - (amount / 100) * 100) / 50) * 50 - (amount / 100) * 100)/20 << endl;
	// 10
	cout << (amount - ((amount - ((amount - (amount / 100) * 100) / 50) * 50 - (amount / 100) * 100) / 20) * 20 -
		((amount - (amount / 100) * 100) / 50) * 50 - (amount / 100) * 100)/10 << endl;
	// 5
	cout << (amount - ((amount - ((amount - ((amount - (amount / 100) * 100) / 50) * 50 - (amount / 100) * 100) / 20) * 20 -
		((amount - (amount / 100) * 100) / 50) * 50 - (amount / 100) * 100) / 10)*10 - 
		((amount - ((amount - (amount / 100) * 100) / 50) * 50 - (amount / 100) * 100) / 20)*20 - 
		((amount - (amount / 100) * 100) / 50 )*50 - (amount / 100)*100)/5 << endl;
	// 1
	cout << amount%5 << endl;
	cin >> amount;
	return 0;
}