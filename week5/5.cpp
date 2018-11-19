// 将一个数组中的值按逆序重新存放。例如，原来的顺序为8,6,5,4,1。要求改为1,4,5,6,8。

#include <iostream>
using namespace std;

int main() {
	int n,k;
	int y[100];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> y[i];
	while (n--) { //常用的倒序计数循环，等价于while(n-->0)
		cout << y[n];
		if (n > 0) cout << " "; //如果不是最后一个数那么就要用空格分隔开
	}
	return 0;
}
