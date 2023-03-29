#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
/*void p_swap(T* arr[], T length) {
	for (int i = 0; i < length; i++) {

	
		int tmp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = tmp;
	}

	std::cout << arr[i] << std::endl;
}*/


void func(int pnum1, int num2) {
	int* pnum1 = &num1;
	for (int i = 1; i < num2; i++)
		*pnum1 *= num2;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;


	//Задача 1
	/*const int size = 10;
	int arr[size]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	std::cout << "Изначальный массив: \n";
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << std::endl;

	std::cout << "Итоговый массив: \n";
	
	for (int i = 0; i < size; i++) {
		p_swap(arr[i], size)

		std::cout << arr[i]; std::cout << std::endl;


	}*/



	//Задача 2
	n = 5;
	std::cout << "Введите число -> ";
	std::cin >> m;
	func(&n, m);
	std::cout << n;





// Указатели и массивы
/*const int size = 5;
int arr[size]{ 10, 9, 50, 30, 14 };
int* pa2 = &arr[2];
std::cout << "*pa2 = " << *pa2 << std::endl;
pa2++;
std::cout << "*pa2 = " << *pa2 << std::endl;
pa2 -= 2;
std::cout << "*pa2 = " << *pa2 << std::endl;


pa2 = &arr[0];
std::cout << "Массив: \n ";
for (int i = 0; i < size; i++)
	std::cout << *(pa2 + i) << ' ';
std::cout << std::endl;

std::cout << "arr = " << *arr << std::endl;
std::cout << "arr + 1 = " << arr + 1 << std::endl;*/




	return 0;
}