#include <iostream>
using namespace std;

int main() {
    double price = 0.8;
    int day1_apples = 2;
    int total_apples = 0;
    double total_cost = 0.0;
    int days = 0;
    int today_apples = day1_apples;

    while (total_apples + today_apples <= 100) {
        total_apples += today_apples;
        total_cost += today_apples * price;
        days++;
        today_apples *= 2; // 第二天
    }
    if (total_apples + today_apples > 100) {
    }

    double avg_cost_per_day = total_cost / days;
    cout << "每天平均花费: " << avg_cost_per_day << " 元" << endl;

    return 0;
}