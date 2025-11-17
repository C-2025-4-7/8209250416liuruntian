#include<iostream>
using namespace std;

const double PI = 3.14159;

int main()
{
    double r, h, v;

    cout << "请输入圆锥底的半径: ";
    cin >> r;
    cout << "请输入圆锥的高: ";
    cin >> h;

    v = (1.0 / 3.0) * PI * r * r * h;

    cout << "圆锥的体积为: " << v << endl;

    return 0;
}