#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    cout << "请输入一个数 a: ";
    cin >> a;

    if (a < 0) {
        cout << "不能对负数求平方根" << endl;
        return 1;
    }

    double x0 = a;
    double x1 = 0.5 * (x0 + a / x0);
    const double eps = 1e-5; 

    while (fabs(x1 - x0) >= eps) {
        x0 = x1;
        x1 = 0.5 * (x0 + a / x0);
    }

    cout << "sqrt(" << a << ") = " << x1 << endl;
    cout << "验证: " << x1 * x1 << endl;

    return 0;
}