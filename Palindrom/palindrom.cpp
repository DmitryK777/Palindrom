#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	int user_input;
	int revers_user_input = 0;

	cout << "������� �����: "; cin >> user_input;
	int variable = user_input;

	if (variable == 0)
	{
		cout << "��� �� ������ ����, ���� ���� �� � ���������." << endl;
	}
	else {
		while (variable != 0)
		{
			revers_user_input = (revers_user_input * 10) + (variable % 10);
			variable /= 10;
		}

		if (user_input == revers_user_input)
		{
			cout << "��� ���������" << endl;
		}
		else
		{
			cout << "��� �� ���������" << endl;
		}
	}

	


}