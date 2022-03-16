// Функция инициализирует одномерный массив псевдослучайными числами с заданным диапазоном.
void InitArrayRandom(int arr[], int size, int min, int max);

// Функция инициализирует двумерный массив псевдослучайными числами с заданным диапазоном.
void InitArrayRandom(int arr[][4], int row, int min, int max);

// Функция инициализирует двумерный массив псевдослучайными числами с заданным диапазоном.
void InitArrayRandom(double arr[][4], int row, int min, int max);

// Функция инициализирует двумерный массив псевдослучайными числами с заданным диапазоном.
void InitArrayRandom(char arr[][4], int row, int min, int max);

// Функция выводит одномерный массив на экран.
void PrintArray(int arr[], int size);

// Функция выводит двумерный массив на экран.
void PrintArray(int arr[][4], int row);

// Функция выводит двумерный массив на экран.
void PrintArray(double arr[][4], int row);

// Функция выводит двумерный массив на экран.
void PrintArray(char arr[][4], int row);

// Функция реализует линейный поиск заданного ключа в двумерном массиве.
int LinearSearch(int arr[][4], int row, int key);

// Функция реализует бинарный поиск заданного ключа в двумерном массиве.
int BinarySearch(int arr[][4], int row, int key);

// Функция сортировки двумерного массива.
void Sort(int arr[][4], int row);

// Функция сортировки одномерного массива (по возрастанию или убыванию).
void Sort(int arr[], int size, bool flag);

// Функция сортирует первую половину одномерного массива по убыванию, а вторую - по возрастанию.
void SortHalfDescHalfAscend(int arr[], int size);

// Функция сортирует элементы, в одномерном массиве, между двумя индексами, по возрастанию.
void SortBetweenTwoIndices(int arr[], int size, int firstInd, int lastInd);

// Функция меняющая порядок следования элементов передаваемого ей одномерного массива на противоположный.
void ReversesElemArray(int arr[], int size);

// Функция находит позицию крайнего отрицательного элемента (самого левого отрицательного элемента).
int LeftmostNegElem(int arr[], int size);

// Функция находит позицию крайнего отрицательного элемента (самого правого отрицательного элемента).
int RightmostNegElem(int arr[], int size);

// Функция определяет и выводит максимальный и минимальный элемент на главной диагонали матрицы;
void MaxMinElOnMainDiagonal(int arr[][4], int row);

// Функция определяет и выводит максимальный и минимальный элемент на главной диагонали матрицы;
void MaxMinElOnMainDiagonal(double arr[][4], int row);

// Функция определяет и выводит максимальный и минимальный элемент на главной диагонали матрицы;
void MaxMinElOnMainDiagonal(char arr[][4], int row);

// Функция сортировки элементов по возрастанию отдельно для каждой строки матрицы.
void SortElAscRowInArr(int arr[][4], int row);

// Функция сортировки элементов по возрастанию отдельно для каждой строки матрицы.
void SortElAscRowInArr(double arr[][4], int row);

// Функция сортировки элементов по возрастанию отдельно для каждой строки матрицы.
void SortElAscRowInArr(char arr[][4], int row);

// Функция для перевода десятичного числа в другую систему исчисления(2 - 36).
void ConvDecToAnotherNumSys(int number, int numSys);

// Функция перевода числа, записанного в двоичном виде, в десятичное представление.
int ConvBinToDecSys(long long number);

// Шаблон функции поиска среднего арифметического значений двумерного массива.
template <typename T>
inline double AvgInArray(T arr[][4], int row)
{
	int amount = 4 * row;
	double sum{ 0 };
	double avg{ 0.0 };
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum = sum + arr[i][j];
		}
	}

	avg = sum / amount;
	return avg;
}