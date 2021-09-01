#include <iostream>;

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Решение примера." << endl;

	int a, b, f;
	long x;

	cout << "Введите a, b, f:" << endl;
	cout << endl << "a=";
	cin >> a;
	cout << endl << "b=";
	cin >> b;
	cout << endl << "f=";
	cin >> f;

	cout << endl << "Вычисляем по формуле : x = (a + b - f / a) + f * a * a - (a + b)" << endl;
	x = (a + b - f / a) + f * a * a - (a + b);
	cout << "x=" << x;
}