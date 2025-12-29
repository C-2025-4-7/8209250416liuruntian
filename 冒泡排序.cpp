#include<iostream>
using namespace std;
void bubbleSort(double arr[], int size) {
	bool changed;
	do {
		changed = false;
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed);
}
void printArray(double arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main() {
	const int SIZE = 10;
	double numbers[SIZE];
	cout << "请输入10个数字（双）:" << endl;
	for (int i = 0; i < SIZE; i++) {
		cin >> numbers[i];
	}
	bubbleSort(numbers, SIZE);
	cout << "排序后：" << endl;
	printArray(numbers, SIZE);
	return 0;
}