#include<iostream>
using namespace std;
bool is_prime(int num);
int main() {
	int n = 0;
	int num = 2;
	while (n < 200) {
		if (is_prime(num)) {
			n++;
			cout << num;
			if (n % 10 == 0) {
				cout << endl;
			}
			else {
				cout << " ";
			}
		}
		num++;
	}
	return 0;
}
bool is_prime(int num) {
	if (num < 2) {
		return false;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}