// 对一个整数n,如果其各个位数的数字相加得到的数m能整除n,则称n为自整除数.例如21,21%(2+1)==0,所以21是自整除数.现求出从10到n(n < 100)之间的所有自整除数.

// 有一行,整数n,(10 <= n < 100)

// 有多行.按从小到大的顺序输出所有大于等于10,小于等于n的自整除数,每行一个自整除数.

#include <iostream>
using namespace std;

int main() {
	int n;
	int m;
	cin >> n;
	// m = n的十位数 + n的个位数
	
	for (int i = 10; i < n; i++) {
		m = i / 10 + i % 10;
		if (i % m == 0)
			cout << i << endl;
	}
	return 0;
}