#include <iostream>;

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "������� �������." << endl;

	int a, b, f;
	long x;

	cout << "������� a, b, f:" << endl;
	cout << endl << "a=";
	cin >> a;
	cout << endl << "b=";
	cin >> b;
	cout << endl << "f=";
	cin >> f;

	cout << endl << "��������� �� ������� : x = (a + b - f / a) + f * a * a - (a + b)" << endl;
	x = (a + b - f / a) + f * a * a - (a + b);
	cout << "x=" << x;
}