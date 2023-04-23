// 22.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void task22_1() {
	int arr[10]{ 0,1,2,3,4,5,6,7,8,9 };
	std::cout << *arr << ' ' << *(arr + 3) << ' ' << *(arr + 8) << std::endl;

	for (int i = 0; i < 10; i++)
		std::cout << *(arr + i) << ' ';
	std::cout << std::endl;


	for (int i = 0; i < 10; i += 2) {
		int tmp = *(arr + i);
		*(arr + i) = *(arr + i + 1);
		*(arr + i + 1) = tmp;
		//swap(arr + 1, arr + i + 1);
	}

	for (int* pi = arr; pi < (arr + 10); pi++)
		std::cout << *pi << ' ';
	std::cout << std::endl;
}
void task22_2(int* pa, int n) {
	int a = *pa;
	for (int i = 1; i < n; i++) {
		*pa = *pa * a;
	}
}

int main()
{
	task22_1();

	int a = 2;
	task22_2(&a, 5);
	std::cout << a << std::endl;

	return 0;
}




