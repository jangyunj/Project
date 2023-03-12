#include <iostream>

using namespace std;

//int main() {
//	cout << "Enter values for x, y: ";
//	int x;
//	int y;
//	cin >> x >> y;
//	cout << x + y;
//
//	return 0;
//}

int main() {
	cout << "Fahrenheit: ";
	int fahrenheit;
	cin >> fahrenheit;

	double celcius = (fahrenheit - 32) / 1.8;
	cout << celcius;

}