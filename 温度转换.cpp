#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double f, c;
    cout << "请输入华氏温度：";
    cin >> f;
    c = (f - 32) * 5 / 9;
    cout << "对应的摄氏温度为：" << fixed << setprecision(2) << c << endl;

    return 0;
}