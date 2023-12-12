#include <iostream>
#include <algorithm>
#include <windows.h>
template <typename T>
T findMax(const T* array, const size_t size) {
	if (size == 0) {
		// Обробка випадку пустого масиву, можна вибрати відповідний підхід.
	   // Наприклад, можна викидати виключення або повертати значення за замовчуванням.
	   // У цьому випадку повертаємо значення за замовчуванням для типу T.
		return T();
	}
	// Використовуємо стандартний алгоритм для знаходження максимального елемента.
	return *std::max_element(array, array + size);
}
int main() {
	SetConsoleOutputCP(1251);
	// Приклад використання:
	int intArray[] = { 3, 7, 1, 9, 4, 6 };
	size_t intArraySize = sizeof(intArray) / sizeof(intArray[0]);
	std::cout << "Максимальний елемент у масиві intArray: " << findMax(intArray, intArraySize) << std::endl;
	double doubleArray[] = { 2.5, 8.1, 5.7, 1.2 };
	size_t doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);
	std::cout << "Максимальний елемент у масиві doubleArray: " << findMax(doubleArray, doubleArraySize)
		<< std::endl;
	return 0;
}