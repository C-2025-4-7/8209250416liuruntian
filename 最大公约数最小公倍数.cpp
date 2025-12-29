#include<iostream>
using namespace std;
void gcd_lcm(int m, int n, int& g, int& l) {
	int a = m, b = n;
	while (b) {
		int r = a % b;
		a = b;
		b = r;
	}
	g = a;
	l = m / g * n;
}
int main() {
	int m, n, g, l;
	cin >> m >> n;
	gcd_lcm(m, n, g, l);
	cout << "最大公约数" << g << endl;
	cout << "最小公倍数" << l << endl;
	return 0;
}