#include <iostream> //����� ��� ����������� �����-������
#include <Windows.h> // ����� ��� ����������� ����� ������, ��������, ���������� �������, �������� � �.�.
#include <cmath>// ����� ��� �������������� ����������
#include <string> //����� � �������� � ����������� ��� ����������� ������ �� �������
// void - �������, ������� �� ���������� ��������
using namespace std;

void pz2();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int pz;
	cout << "������� ����� ������������ 2-5" << endl;
	cin >> pz;
	switch (pz)
	{
	case 2: pz2();
		break;
	case 3: cout << "������������ ��� �� ������" << endl;
		break;
	case 4: cout << "������������ ��� �� ������" << endl;
		break;
	case 5: cout << "������������ ��� �� ������" << endl;
		break;
	default:
		cout << "����� ������������ �� ����������" << endl;
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

	cout << "����� �������� ������� ����������, ��/�: ";
	cin >> V1;

	cout << "����� �������� ������� ����������, ��/�: ";
	cin >> V2;
	int V3 = V1 + V2;

	int time;
	cout << "������� �����, � �����: ";
	cin >> time;

	int ras;
	cout << "������� ��������� ����������, ��: ";
	cin >> ras;

	int S;
	S = ras + (V3 * time);
	printf("��������� ���������� � ���������� ����� %d", S);

}