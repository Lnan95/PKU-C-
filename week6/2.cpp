// 一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。


#include <iostream>
using namespace std;

int main() {
	int h, r;
	const double pi = 3.14159;
	int tmp;

	cin >> h >> r;
	tmp = (20 * 1000) / (r * r * pi * h);
	// cout << tmp << endl; 2 
	if ((20 * 1000) / (r * r * pi * h) > tmp) cout << tmp + 1 << endl;
	else cout << (int) (20 * 1000) / (r * r * pi * h) << endl;
	return 0;
}
