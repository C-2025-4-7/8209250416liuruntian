#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int testUnint = 65534;  // 0xfffe
    cout << "output in unsigned int type: " << testUnint << endl;
    cout << "output in char type: " << static_cast<char>(testUnint) << endl;
    cout << "output in short type: " << static_cast<short>(testUnint) << endl;
    cout << "output in int type: " << static_cast<int>(testUnint) << endl;
    cout << "output in double type: " << static_cast<double>(testUnint) << endl;
    cout << "output in double type: " << setprecision(4) << static_cast<double>(testUnint) << endl;
    cout << "output in Hex unsigned int type: " << hex << testUnint << endl;

    // 8进制输出
    cout << "output in Oct unsigned int type: " << oct << testUnint << endl;

    // 实数转int测试
    double realNum = 3.14159;
    cout << "real number: " << realNum << endl;
    cout << "convert to int: " << static_cast<int>(realNum) << endl;

    return 0;
}