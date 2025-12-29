#include<iostream>
using namespace std;
int peach(int day) {
	if (day == 10) {
		return 1;
	}
	return(peach(day + 1) + 1) * 2;
}
int main() {
	int first_day_peaches = peach(1);
	cout << "第一天有" << first_day_peaches << "个桃子";
	return 0;
}