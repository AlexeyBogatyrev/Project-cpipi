#include <iostream> //класс для организации ввода-вывода
#include <Windows.h> // класс для определений типов данных, макросов, прототипов функций, констант и т.д.
#include <cmath>// класс для математических вычислений
#include <string> //класс с методами и переменными для организации работы со строкам
// void - функция, которая не возвращает значение
using namespace std;

void pz2();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int pz;
	cout << "Введите номер практической 2-5" << endl;
	cin >> pz;
	switch (pz)
	{
	case 2: pz2();
		break;
	case 3: cout << "Практическая ещё не готова" << endl;
		break;
	case 4: cout << "Практическая ещё не готова" << endl;
		break;
	case 5: cout << "Практическая ещё не готова" << endl;
		break;
	default:
		cout << "Такой практической не существует" << endl;
		break;
	}
	return 0;
}
void pz2() {
	using namespace std;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int V1;
	int V2;
	int V11;
	int V22;

	cout << "Введи скорость первого автомобиля, км/ч: ";
	cin >> V1;

	cout << "Введи скорость второго автомобиля, км/ч: ";
	cin >> V2;
	int V3 = V1 + V2;

	int time;
	cout << "Введите время, в часах: ";
	cin >> time;

	int ras;
	cout << "Введите начальное расстояние, км: ";
	cin >> ras;

	int S;
	S = ras + (V3 * time);
	printf("Суммарное расстояние в километрах равно %d", S);

}