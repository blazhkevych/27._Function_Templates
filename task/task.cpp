// ДОДЕЛАТЬ 2 ЗАДАНИЕ
#include <iostream>
#include "resources/library/arr.h"
#include "resources/library/mathlib.h"
using namespace std;


int main()
{
	char answer{ 0 };
	int choice{ 0 };

	do
	{
		cout << "Enter task number:: "
			<< "\nTask 1."
			<< "\nTask 2."
			<< endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			/*
			1. Написать шаблон функции для поиска среднего арифметического значений массива.
			*/
			srand(time(0));
			const int row = 4;
			const int col = 4;

			int arrInt[row][col]{ 0 };
			cout << "Int:\n\n";
			InitArrayRandom(arrInt, col, 1, 99);
			PrintArray(arrInt, row);
			cout << "\nAvg : " << AvgInArray(arrInt, row) << endl;

			double arrDouble[row][col]{ 0.0 };
			cout << "\nDouble:\n\n";
			InitArrayRandom(arrDouble, col, 1, 99);
			PrintArray(arrDouble, row);
			cout << "\nAvg : " << AvgInArray(arrDouble, row) << endl;

			char arrChar[row][col]{ 0 };
			cout << "\nChar:\n\n";
			InitArrayRandom(arrChar, col, 1, 99);
			PrintArray(arrChar, row);
			cout << "\nAvg : " << AvgInArray(arrChar, row) << endl;
		}
		break;

		case 2:
		{
			/*
			2. Написать перегруженные шаблоны функций для нахождения
			корней линейного (a*x + b = 0) и квадратного (a*x2+b*x + c = 0)
			уравнений. При этом в функции передаются коэффициенты
			уравнений.
			*/

			double a{ 0 }, b{ 0 }; // Коэфициенты уравнения.
			cout <<"Given a linear equation:\n"
				<< "a * x + b = 0\n"
				<<"Find x.\n"
				<< "Enter the coefficient of the linear equation \"a\" : ";
			cin >> a;
			cout << "\nEnter the coefficient of the linear equation \"b\" : ";
			cin >> b;
			RootsOfLinearEquation(a, b);
			cout << endl;

		}
		break;
		}

		cout << endl;
		cout << "Do you want to continue? ( y (yes) / n (no) )\n";
		cin >> answer;
		cout << endl;

	} while (answer == 'y');

	return 0;
}