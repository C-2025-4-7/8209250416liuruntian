#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main(){
	cout << fixed << setprecision(2);
	cout << "Celsius	Fahrenheit	|	Fahrenheit	Celsius" << endl;
	double celsius = 40.0;
	double fahrenheit = 120.0;
	for (int i = 0; i < 10; i++) {
		cout << setw(6) << celsius
			<< setw(12) << celsius_to_fah(celsius)
			<< "	|	";
		cout << setw(8) << fahrenheit
			<< setw(11) << fahrenheit_to_cels(fahrenheit)
			<< endl;
		celsius -= 1.0;
		fahrenheit -= 10.0;
	}
	return 0;
}

