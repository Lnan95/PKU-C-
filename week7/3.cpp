// 用户输入N和K，然后接着输入N个正整数（无序的），程序在不对N个整数排序的情况下，找出第K大的数。注意，第K大的数意味着从大到小排在第K位的数。
#include <iostream>
using namespace std;

int main() {
	int n, k, N;
	cin >> n >> k;
	int Rank[100] = { 1 };
	int Num[100];

	for (int i = 0; i < n; i++) {
		cin >> N;
		Num[i] = N;
		for (int j = 0; j < (i - 1); j++) {
			if (N > Rank[j])
				Rank[j]++;
			else
				Rank[i]++;
		}
		for (int i = 0; i <= n; i++) {
			if (Rank[i] == k) {
				cout << Num[i] << endl;
				return 0;
			}
		}
	}
	return 0;
}