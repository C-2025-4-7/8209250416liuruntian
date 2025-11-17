#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    cout << "请输入一行字符: ";
    while ((c = cin.get()) != '\n') {
        if (isalpha(c)) {
            letters++;
        }
        else if (isspace(c)) {
            spaces++;
        }
        else if (isdigit(c)) {
            digits++;
        }
        else {
            others++;
        }
    }

    cout << "统计结果:" << endl;
    cout << "英文字母: " << letters << endl;
    cout << "空格: " << spaces << endl;
    cout << "数字字符: " << digits << endl;
    cout << "其它字符: " << others << endl;

    return 0;
}