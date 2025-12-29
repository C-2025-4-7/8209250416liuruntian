#include <iostream>
#include <cstring>
using namespace std;
int indexof(const char* s1, const char* s2)
{
    if (s1 == NULL || s2 == NULL)
    {
        return -1;
    }

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // s1为空串
    if (len1 == 0)
    {
        return 0;
    }

    // s1>s2
    if (len1 > len2)
    {
        return -1;
    }
    for (int i = 0; i <= len2 - len1; i++)
    {
        int j = 0;
        while (j < len1 && s2[i + j] == s1[j])
        {
            j++;
        }
        // 都匹配
        if (j == len1)
        {
            return i;
        }
    }

    return -1;  // 未找到
}
int main()
{
    char s1[100], s2[100];
    cout << "请输入主字符串s2: ";
    cin.getline(s2, 100);
    cout << "请输入子字符串s1: ";
    cin.getline(s1, 100);
    int position = indexof(s1, s2);
    // 输出
    if (position != -1)
    {
        cout << "子串 \"" << s1 << "\" 在 \"" << s2
            << "\" 中首次出现的位置是: " << position << endl;
    }
    else
    {
        cout << "子串 \"" << s1 << "\" 不在 \"" << s2 << "\" 中" << endl;
    }

    return 0;
}