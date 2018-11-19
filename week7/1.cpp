#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n, age;
	int n18 = 0;
	int n35 = 0;
	int n60 = 0;
	int n80 = 0;
	double sum = 0.0;
	cin >> n;
	while (n--) {
		cin >> age;
		if (age <= 18)
			n18++;
		else if (age <= 35)
			n35++;
		else if (age <= 60)
			n60++;
		else
			n80++;
	}
	sum = n18 + n35 + n60 + n80;
	cout << "1-18: " << setprecision(2) << setiosflags(ios::fixed) << n18 / sum * 100.00 << "%" << endl;
	cout << "19-35: " << setprecision(2) << setiosflags(ios::fixed) << n35 / sum * 100.00 << "%" << endl;
	cout << "36-60: " << setprecision(2) << setiosflags(ios::fixed) << n60 / sum * 100.00 << "%" << endl;
	cout << "60-: " << setprecision(2) << setiosflags(ios::fixed) << n80 / sum * 100.00 << "%" << endl;
	// n18 << n35 << n60 << n80 << endl
	return 0;

}