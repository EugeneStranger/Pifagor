#include <iostream>

using namespace std;

#define PIPHAGOR_TABLE
#define MULTIPLACATION_TABLE

void main()
{
	setlocale(LC_ALL, "");
#ifdef PIPHAGOR_TABLE
	cout << "\t\tТаблица Пифагора" << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << "---------------------------------------------------" << endl << "|";
		for (int j = 1; j <= 10; j++)
		{
			cout.width(3);
			cout << i * j << " |";

		}
		cout << endl;
	}
	cout << "---------------------------------------------------" << endl;
#endif
	std::cout << endl;
#ifdef MULTIPLACATION_TABLE
	cout << "\t\tТаблица Умножения" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "|*";
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 10; j++)
		{
			cout.width(4);
			if ((i == 0) && (j == 0)) { cout << "|"; }
			else if ((i == 0) && (j != 0)) { cout << j << "|"; }
			else if ((j == 0) && (i != 0)) { cout << i << "|"; }
			else { cout << i * j << "|"; }
		}
		cout << endl << "--------------------------------------------------------" << endl << "|";

	}

#endif
	std::cout << endl;
}