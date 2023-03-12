#include <iostream>
#include <cmath>

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

//int main() {
//	cout << "Fahrenheit: ";
//	int fahrenheit;
//	cin >> fahrenheit;
//
//	double celcius = (fahrenheit - 32) / 1.8;
//	cout << celcius;
//
//}

//int main() {
//	double result = floor(1.2);
//	cout << result;
//
//	double result2 = pow(2, 3);
//	cout << result2;
//}

int main() {
	cout << "Enter radius: ";
	double radius;
	cin >> radius;

	const double pi = 3.14;
	double area = pi * pow(radius, 2);
	cout << "The area of the circle is: " << area;
}