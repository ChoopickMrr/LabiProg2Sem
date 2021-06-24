#include <iostream>
#include <Windows.h>

using namespace std;

int main()

{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x, size;
	char anew;
	do {
		cout << "Введите количество цифр которые вы хотите отсортировать:\n";
		cin >> size;
		float* arr = new float[size]; //создаём динамический массив
		cout << endl;
		cout << "Введите " << size << " числа(ел): " << endl;
		for (int i = 0; i < size; i++) { //считываем данные, введённые пользователем
			cout << "[" << i + 1 << "] ";
			cin >> arr[i];
		}
		cout << endl;
				float temp; //временная переменная
				//пузырьковая сортировка массива (по возрастанию)
				for (float i = 0; i < size - 1; i++) {
					for (int j = 0; j < size - i - 1; j++) {
						if (arr[j] > arr[j + 1]) {
							//меняем элементы местами
							temp = arr[j];
							arr[j] = arr[j + 1];
							arr[j + 1] = temp;
						}
					}
				}
				cout << "По возрастанию:\n";
				for (int i = 0; i < size; i++) {
					cout << arr[i] << " ";
				}
				cout << endl;

				float temp2;
				//пузырьковая сортировка массива (по убыванию)
				for (float i = 0; i < size - 1; i++) {
					for (int j = 0; j < size - i - 1; j++) {
						if (arr[j] < arr[j + 1]) {

							//меняем элементы местами

							temp2 = arr[j];

							arr[j] = arr[j + 1];

							arr[j + 1] = temp2;

						}
					}
				}
				cout << "По убыванию:\n";
				for (int i = 0; i < size; i++) {
					cout << arr[i] << " ";
				}
				cout << endl;
			cout << endl;
			cout << "Хотите ещё что-то отсортировать? (y/n): ";
			cin >> anew;
	} while (anew != 'n');
	system("pause");
	return 0;
}