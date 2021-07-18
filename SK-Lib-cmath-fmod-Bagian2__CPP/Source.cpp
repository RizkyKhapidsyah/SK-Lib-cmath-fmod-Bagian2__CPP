
#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	double a, b, hasil;

	a = 7.2;
	b = 4.1;

	hasil = fmod(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "The remainder computed using fmod() is : " << hasil;
	cout << endl;

	_getch();
	return 0;
}
