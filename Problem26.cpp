#include <iostream>
#include <gmpxx.h>

using namespace std;

int main() {
	int buff[1000];
	int result = 0, resulti;
	for (int i = 2; i < 1000; i++) {
		int j = 1;
		int count = 0;
//		int r = 0;
		memset(buff, 0, sizeof(buff));
		while (1) {
			while (j < i) {
				j *= 10;
				count++;
			}
			j %= i;
//			cout << j << i << count << endl;
			if (!j) break;
			if (buff[j]) {
				if (result < count - buff[j]) {
					result = count - buff[j];
					resulti = i;
				}
//				result = max(result, count - buff[j]);
				break;
			}
			buff[j] = count;
		}
//		cout << i << r << endl;
//		result = r;
	}
	cout << result;
	return 0;
}