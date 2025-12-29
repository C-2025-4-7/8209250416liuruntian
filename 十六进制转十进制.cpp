#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int parseHex(const char* const hexString)
{
    if (hexString == NULL)
    {
        cerr << "错误: 输入字符串为空指针" << endl;
        return -1;
    }

    int result = 0;
    int len = strlen(hexString);
    if (len == 0)
    {
        return 0;
    }
    int start = 0;
    if (len > 2 && hexString[0] == '0' &&
        (hexString[1] == 'x' || hexString[1] == 'X'))
    {
        start = 2; 
    }
    for (int i = start; i < len; i++)
    {
        char ch = hexString[i];
        int digit;
        ch = toupper(ch);
        if (isdigit(ch))
        {
            digit = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F')
        {
            digit = 10 + (ch - 'A');  // 'A'-'F'转10-15
        }
        else
        {
            cerr << "错误: 非法十六进制字符 '" << hexString[i] << "'" << endl;
            return -1;
        }

        result = result * 16 + digit;
    }

    return result;
}
int main()
{
    char hexStr[100];
    cout << "请输入一个十六进制数: ";
    cin.getline(hexStr, 100);
    int decimal = parseHex(hexStr);
    if (decimal != -1)
    {
        cout << "十六进制数 " << hexStr
            << " 转换为十进制是: " << decimal << endl;
    }
    return 0;
}