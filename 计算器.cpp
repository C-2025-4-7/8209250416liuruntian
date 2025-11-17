#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char op;

    cout << "请输入算式: ";
    cin >> num1 >> op >> num2;

    switch (op) {
    case '+':
        cout << "结果: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "结果: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "结果: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "结果: " << num1 / num2 << endl;
        }
        else {
            cout << "除数不能为0" << endl;
        }
        break;
    case '%':
        if (int(num2) != 0) {
            cout << "结果: " << int(num1) % int(num2) << endl;
        }
        else {
            cout << "除数不能为0" << endl;
        }
        break;
    default:
        cout << "运算符非法" << endl;
        break;
    }

    return 0;
}