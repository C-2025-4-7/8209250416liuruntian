#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]);
int main() {
    const int MAX_LENGTH = 100;
    char s1[MAX_LENGTH];
    char s2[MAX_LENGTH];

    // 读取第一个
    cout << "Enter the first string: ";
    cin.getline(s1, MAX_LENGTH);

    // 读取第二个
    cout << "Enter the second string: ";
    cin.getline(s2, MAX_LENGTH);

    // 检验s1是否是s2的子串
    int index = indexOf(s1, s2);
    cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << index << endl;

    return 0;
}

int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 == 0) {
        return 0;  // 空
    }

    if (len1 > len2) {
        return -1;  // s1>s2
    }

    // s2中找s1
    for (int i = 0; i <= len2 - len1; i++) {
        bool found = true;

        // 比较s1和s2此处开始的子串
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return i;
        }
    }

    // 无匹配
    return -1;
}