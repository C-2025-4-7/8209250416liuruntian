#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "请输入x：";
    cin >> x;
        if (x > 0 && x < 1) {
            y = (3 - 2 * x) / 2;
        }
        else if (x >= 1 && x < 5) {
            y = 2 /(4*x) + 1;
        }
        else if (x >= 5 && x < 10) {
            y = x * x;
        }
        else {
            cout << "x=" << x << "不在定义域" << endl;
        }
        cout << "x=" << x << ", y=" << y << endl;
    return 0;
}