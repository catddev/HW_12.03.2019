#include <iostream>
#include <iomanip>
#include<math.h>
#include<ctime>
#include<cstring>
#include<fstream>

using namespace std;

int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

	while (true)
	{
		cout << "������ � ";
		cin >> tn; cin.get();

		switch (tn)
		{
		case 1: //��� ��������� ����.����� ����� ����� ������� ������.
		{
			ifstream in_file;
			int max_len = INT_MIN;
			int a = 0;
			char buf[300];

			in_file.open("in.txt");

			if (!in_file)
				cout << "file open error" << endl;
			else
			{
				while (!in_file.eof())
				{
					in_file.getline(buf, 300);
					a = strlen(buf); // ������ ��� ���������� � ����� � max_len �� ����������?
					if (a > max_len) max_len = a;
					cout << a << endl;
				}
				cout << "max string length: " << max_len << endl;
			}
			in_file.close();
		}
		break;
		case 2: //��� ��������� ����.���������� ���������� ����, ������������ � �������, ������� ����� ������������.
		{
			ifstream in_file;

			int k = 0;
			char ch;
			char c;
			cin >> c;

			in_file.open("in.txt");

			if (!in_file)
				cout << "file open error" << endl;
			else
			{
				while (in_file.get(ch))
				{
					if (ch = ' ' && ch++ == c)
						k++;
				}
				cout << k << endl;
			}
			in_file.close();
		}
		break;
		case 3: //��� ��������� ����.���������� � ������ ���� ��� ��� ������ � ������� � ��� ������� 0 �� ������ 1 � ��������.
		{

		}
		break;
		default:
			cout << "��� ����� ������" << endl << endl;
		}
	}
	system("pause");
	return 0;
}