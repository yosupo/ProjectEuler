#include <iostream>
#include <vector>

using namespace std;
const int N = 2000000;
bool prime[N] = {true, true};

int main() {
	for (int i = 2; i < N; i++) {
		if (!prime[i]) {
			for (int j = i*2; j < N; j+= i) {
				prime[j] = true;
			}
		}
	}
	int result = 0, resn = 0;
	for (int b = 999; b >= 2; b--) {
		for (int a = -999; a < 1000; a++) {
			int n = 0;
			while (true) {
				int d = n*(n+a)+b;
				if (d < 0 || prime[d]) {
					break;
				}
				n++;
			}
			if (resn < n) {
				resn = n;
				result = a*b;
				cout << a << ' ' << b << ' ' << n << endl;
			}
		}
		if (b <= resn) break; 
	}
	cout << result << endl;
	return 0;
}