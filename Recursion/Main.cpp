#include <iostream>

//Рекурсия - это прием программирования, при котором функция вызывает саму себя либо непосредственно либо косвенно.

unsigned long long factorial(int num) { //Функция рассчета факториала
	if (num < 0)
		return 0;						//Факториал не может равняться 0. Тригер на ошибку.
	if (num == 0)
		return 1;
	return factorial(num - 1) * num;
}

int fibonacci(int num) {
	if (num <= 0)						//Защита от отрицательных чисел, Фибоначии 0 - 0
		return 0;
	if (num == 1)						//Фибоначии 1 - 1
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n{};

	//Задание "Факториал"
	std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << std::endl;

	//Задача 1. Числа Фибоначчи
	std::cout << "Задача 1.\nВведите номер числа Фибоначчи -> ";
	std::cin >> n;
	std::cout << "Число Фибоначчи под номером " << n << " будет: " << fibonacci(n) << std::endl;
	for (int i = 0; i < 13; i++)
		std::cout << fibonacci(i) << ' ';
	std::cout << std::endl;

	return 0;
}