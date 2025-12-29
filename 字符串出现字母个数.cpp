#include <iostream>
using namespace std;
void count(const char s[], int counts[]);
bool isLetter(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}
char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;  // 已经小写或不是字母
}

int main() {
    const int MAX_LENGTH = 1000;
    const int ALPHABET_SIZE = 26;
    char str[MAX_LENGTH];
    int letterCounts[ALPHABET_SIZE] = { 0 };  // 初始化所有计数为0
    cout << "Enter a string: ";
    cin.getline(str, MAX_LENGTH);

    count(str, letterCounts);
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (letterCounts[i] > 0) {
            char letter = 'a' + i;
            cout << letter << ": " << letterCounts[i] << " times" << endl;
        }
    }

    return 0;
}
void count(const char s[], int counts[]) {
    // 将counts数组所有元素初始化为0
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }
    int i = 0;
    while (s[i] != '\0') {
        char ch = s[i];

        // 检查字母
        if (isLetter(ch)) {
            // 转换为小写
            char lowerCh = toLower(ch);
            int index = lowerCh - 'a';
            counts[index]++;
        }

        i++;
    }
}