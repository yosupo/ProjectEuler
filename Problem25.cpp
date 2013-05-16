#include <iostream>
#include <gmpxx.h>

using namespace std;

int main() {
	mpz_class a, b, c = 0;
	a = b = 1; // F2, F1
	int result = 2, count = 0;
	while (count < 1000) {
		c = a + b;
		b = a;
		a = c;
		result++;
		// result == 3 -> a == F3
		count = 0;
		while (c != 0) {
			count++;
			c /= 10;
		}
	}
	std::cout << result << endl;
	return 0;
}