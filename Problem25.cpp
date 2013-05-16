#include <iostream>
#include <gmpxx.h>

using namespace std;

int main() {
	mpz_class a, b, c = 0;
	a = b = 1; // F2, F1
	int result = 2, count = 0;
	while (count < 1000) {
		count = 0;
		result++;
		a += b; // i == 3 -> a = F3
		b = a - b; // = a
		c = a;
//		cout << c << ' ' << result << endl;
		while (c != 0) {
			count++;
			c /= 10;
		}
	}
	std::cout << result << endl;
	return 0;
}