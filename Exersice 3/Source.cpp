#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char name[20] = "\0";
	cout << "������� ��� ��������: ";
	cin >> name;

	char surname[30] = "\0";
	cout << "������� ������� ��������: ";
	cin >> surname;

	char partonymic[30] = "\0";
	cout << "������� �������� ��������: ";
	cin >> partonymic;

	char group_number[10] = "\0";
	cout << "������� ����� ������ ��������: ";
	cin >> group_number;

	int len = 31;
	int len_str1 = 25 + strlen(group_number);
	int len_str2 = strlen(name) + strlen(surname) + strlen(partonymic) + 6;

	if (len_str1 >= len_str2 && len_str1 > 31)
		len = len_str1;
	else
		if (len_str2 > 31)
		len = len_str2;

	cout << "\n\t\t\t";
	for (int counter = 0; counter <= len; counter++)
		cout << "*";

	cout << "*\n\t\t\t ������������ ������ �1" << group_number;
	for (int counter = 0; counter < len - 25; counter++)
		cout << " ";

	cout << "*\n\t\t\t ��������(�): ��. ��. " << group_number;
	for (int counter = 0; counter < (len - len_str1); counter++)
		cout << " ";

	cout << "*\n\t\t\t* " << surname << " " << name << " " << partonymic;
	for (int counter = 0; counter <= (len - len_str2); counter++)
		cout << " ";
	cout << "*";

	cout << "\n\t\t\t";
	for (int counter = 0; counter < len; counter++)
		cout << "*";
	cout << endl;


	system("pause");
	return 0;
}