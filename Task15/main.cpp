#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	srand(time(NULL));

	const int size = 10;
	int arr[size][size]{};

	//Task 1.

	std::cout << "Задание 1.\n";
	int sum = 0;

	std::cout << "\n";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 101;
			sum += arr[i][j];
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "Сумма равна = " << sum;
		sum = 0;
		std::cout << '\n';
	}

	//Task 2.

	std::cout << "\nЗадание 2.\n\n";

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 101;
			std::cout << arr[i][j] << "\t";
		}
		std::cout << '\n';
	}
	std::cout << "\nВведи число -> ";
	std::cin >> n;
	
	std::cout << '\n';



	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << '\n';
	}


	return 0;
}