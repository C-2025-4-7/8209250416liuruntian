#include <iostream>
using namespace std;
int main() {
    int a, b;

    cout << "请输入两个正整数: ";
    cin >> a >> b;
    if (a < b) {
        int t = a;
        a = b;
        b = t;
    }
    int m = a, n = b;
    while (n != 0) {
        int remainder = m % n;
        m = n;
        n = remainder;
    }
    int gys = m;
    int gbs = a * b / gys;

    cout << "最大公约数: " << gys << endl;
    cout << "最小公倍数: " << gbs << endl;

    return 0;
}