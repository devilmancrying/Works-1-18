#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	cout << "����� ����������!\n\n";

	cout << "[1] - ����\n";
	cout << "[2] - �����\n";
	cout << "[3] - ����\n";
	cout << "[4] - �����\n";

	int season;
	cout << "�������� ����� ����: ";
	cin >> season;
	if (season == 1) {
		cout << "�� ������� ����!\n";
		cout << "������� � ������� ������ �������� � ������ ������ � ����������.";
	}
	else if (season == 2) {
		cout << "�� ������� �����!\n";
		cout << "����� ��������) ����� ����� ��� ����� �� � ����� � � ����.";
	}
	else if (season == 3) {
		cout << "�� ������� ����!\n";
		cout << "��� � ����-�� �� � 1 ������� ��� �� � ��.";
	}
	else if (season == 4) {
		cout << "�� ������� �����!\n";
		cout << "����� ��������.";
	}
	else {
		cout << "Error\n";
		cout << "�������� ������ �����!";
	}

	int _;
	cin >> _;
	return 0;
}