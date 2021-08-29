#include <iostream>;

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "\t\t\t\t\tДеление пятизначного числа на разряды.\n\n";

	bool direction = false;

	while (direction == false)
	{
		cout << "Введите пятизначное число: ";

		int number;
		cin >> number;
		cout << "\n";

		if ((number >= 0 && number <= 9999) || number > 99999)
		{
			cout << "Вы ввели неверное число. Повторите снова.\n";
			direction = false;
		}
		else 
		{
			cout << "1 цифра: " << number / 10000 << "\n";
			cout << "2 цифра: " << (number / 1000) % 10 << "\n";
			cout << "3 цифра: " << (number / 100) % 10 << "\n";
			cout << "4 цифра: " << (number / 10) % 10 << "\n";
			cout << "5 цифра: " << number % 10 << "\n";
			direction = true;
		}
	}
	return 0;
}
