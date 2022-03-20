using std::cout;
using std::endl;

// Функция проверяющая является ли число простым.
bool IsPrime(int number); 

// Функция возвращающая количество простых чисел в одномерном массиве.
int NumberOfPrimesIn1DArr(int arr[], int size); 

// Функция, вычисляющая факториал переданного ей числа.
int Factorial(int number); 

// Функция, вычисляет степень числа.
int DegreeOfNumber(int base_of_degree, int exponent); 

// Функция, вычисляет сумму чисел из диапазона между ними.
int SumOfNumbersBetweenStartEnd(int start, int end); 

// Функция проверки на совершенное число.
bool PerfectNumber(int number); 

// Функция печати совершенного числа
void PrintPerfectNumber(int start, int end); 

// Перегруженный шаблон функции для нахождения корней линейного уравнения.
template <typename T>
void RootsOfLinearEquation(T a, T b)
{
	double x = 0;

	if (a != 0)
	{
		/*
		https://ru.wikipedia.org/wiki/%D0%9B%D0%B8%D0%BD%D0%B5%D0%B9%D0%BD%D0%BE%D0%B5_%D1%83%D1%80%D0%B0%D0%B2%D0%BD%D0%B5%D0%BD%D0%B8%D0%B5#%D0%A3%D1%80%D0%B0%D0%B2%D0%BD%D0%B5%D0%BD%D0%B8%D0%B5_%D1%81_%D0%B4%D0%B2%D1%83%D0%BC%D1%8F_%D0%BF%D0%B5%D1%80%D0%B5%D0%BC%D0%B5%D0%BD%D0%BD%D1%8B%D0%BC%D0%B8

		Решение. Шаг 1.
		Переносим слагаемое b в правую часть уравнения, меняя при этом знак на противоположный:
		a*x = -b

		Шаг 2. Делим обе части уравнения на a:
		a*x      b
		--- = - ---
		 a       a

		Шаг 3. Упрощаем.
			   b
		x = - ---
			   a

		Ответ. Корень уравнения имеет вид:
			   b
		x = - ---
			   a
		*/
		x = -1.0 * (b / a);
		cout << "x = " << x << endl;
	}
	else if (a == 0)
	{
		if (b == 0)
		{
			// Решений бесконечно много, поскольку любое число является решением.
			cout << "There are infinitely many solutions, since any number is a solution.";
		}
		else if (b != 0)
		{
			// У уравнения не может иметь корней.
			// Уравнение является противоречивым (нельзя подобрать переменную, чтобы было верным равенство).
			cout << "An equation cannot have roots.\n"
				<< "The equation is inconsistent(you can't choose a variable to make the equation true).\n";
		}
	}
}