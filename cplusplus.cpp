
#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	string x[10] = { " ","one","two","tree","four","five", "six", "seven", "eight", "nine" };
	cin >> a >> b;
	if (a <= b) {
		if (a > 0 && a <= 9) {
			for (int i = a; i <= b; i++) {
				if (i >= 10) {
					break;
				}
				else {
					cout << x[i] << endl;
				}
			}
		}
		if (b > 9) {
			for (int i = 10; i <= b; i++) {
				if (i % 2 == 0) {
					cout << "even" << endl;
				}
				else {
					cout << "odd" << endl;
				}
			}
		}
	}
	else {
		return 0;
	}
}