#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	int user_input;
	int revers_user_input = 0;

	cout << "Введите число: "; cin >> user_input;
	int variable = user_input;

	if (variable == 0)
	{
		cout << "Это же просто нуль, даже если он и палиндром." << endl;
	}
	else {
		while (variable != 0)
		{
			revers_user_input = (revers_user_input * 10) + (variable % 10);
			variable /= 10;
		}

		if (user_input == revers_user_input)
		{
			cout << "Это палиндром" << endl;
		}
		else
		{
			cout << "Это не палиндром" << endl;
		}
	}

	


}