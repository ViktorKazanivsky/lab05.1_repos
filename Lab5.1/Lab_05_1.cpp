#include <iostream>
#include <cmath>

using namespace std;
double f (const double a, const double b, const double c); 
int main()

{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double n = (f(t, s, 2) + f(1, s + t, t - s)) / (1 + f(1, 1, pow(t, 2) + pow(s, 2)) * f(1, 1, pow(t, 2) + pow(s, 2)));
	cout << "n = " << n << endl;

	return 0;
}

double f (const double a, const double b, const double c) 

{
	return ((a + b + c) / (sin(a * b) * sin(a * b) + c * c));
}