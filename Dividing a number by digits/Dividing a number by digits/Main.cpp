#include <iostream>;

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "\t\t\t\t\t������� ������������ ����� �� �������.\n\n";

	bool direction = false;

	while (direction == false)
	{
		cout << "������� ����������� �����: ";

		int number;
		cin >> number;
		cout << "\n";

		if ((number >= 0 && number <= 9999) || number > 99999)
		{
			cout << "�� ����� �������� �����. ��������� �����.\n";
			direction = false;
		}
		else 
		{
			cout << "1 �����: " << number / 10000 << "\n";
			cout << "2 �����: " << (number / 1000) % 10 << "\n";
			cout << "3 �����: " << (number / 100) % 10 << "\n";
			cout << "4 �����: " << (number / 10) % 10 << "\n";
			cout << "5 �����: " << number % 10 << "\n";
			direction = true;
		}
	}
	return 0;
}
