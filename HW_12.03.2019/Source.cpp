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
		cout << "Задача № ";
		cin >> tn; cin.get();

		switch (tn)
		{
		case 1: //Дан текстовый файл.Найти длину самой длинной строки.
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
					a = strlen(buf); // почему без переменной а сразу в max_len не записывает?
					if (a > max_len) max_len = a;
					cout << a << endl;
				}
				cout << "max string length: " << max_len << endl;
			}
			in_file.close();
		}
		break;
		case 2: //Дан текстовый файл.Подсчитать количество слов, начинающихся с символа, который задаёт пользователь.
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

			//in_file.seekg(0); // почему не получилось третью задачу после перестановки курсора?
			
			in_file.close();
		}
		break;
		case 3: //Дан текстовый файл.Переписать в другой файл все его строки с заменой в них символа 0 на символ 1 и наоборот.
		{
			ifstream in_file;
			ofstream out_file;
			in_file.open("in.txt");
			out_file.open("Out.txt");
			
			char s;

			if (!in_file)
				cout << "File open error" << endl;
			else
			{
				while (in_file.get(s))
				{
					if (s == '0') s = '1';
					else if (s == '1') s = '0';
					out_file << s;
				}
			}
			in_file.close();
			out_file.close();

		}
		break;
		default:
			cout << "нет такой задачи" << endl << endl;
		}
	}
	system("pause");
	return 0;
}