// ���������� m �� n������m �� n ��֮������������ĺͣ����У�m ������ n����n ������300��
// ���� m=3, n=12, �����Ϊ��3+5+7+9+11=35

#include <iostream>
using namespace std;

int main() {
	int m, n;
	int result = 0;
	cin >> m >> n;
	if (m <= n && n <= 300 ) {
		for (; m <= n; n--) {
			if (n % 2 > 0) {
				result += n;
			}
		}
	}
	cout << result << endl;
	return 0;
}
