#include <iostream>
using namespace std;

void text() {
	system("cls");
}
void colourBackground() {
	system("color 90");
	cout << "� ��������";
}
void colourText() {
	system("color 03");
	cout << "� ��������";
}
void sizeInt() {
	cout << "������ INT - " << sizeof(int) << "�";
}
void sizeChar() {
	cout << "������ CHAR - " << sizeof(char) << "�";
}
void sizeDouble() {
	cout << "������ DOUBLE - " << sizeof(double) << "�";
}
void sizeFloat() {
	cout << "������ FLOAT - " << sizeof(float) << "�";
}
void sizeBool() {
	cout << "������ BOOL - " << sizeof(bool) << "�";
}
void message() {
	cout << "������ � �������!";
}
void square() {
	char texture = '#';
	int size = 5;
	for (int x = 0; x < size; x++) {
		for (int y = 0; y < size; y++) {
			cout << texture << " ";
		}
		cout << "\n";
	}
}
void Error() {
	cout << "����� ������� ���.";
}

int main() {
	setlocale(0, "");
	cout << "��������� - \"�������\"\n\n";
	cout << "[1] �������� �������\n";
	cout << "[2] �������� ���� ����\n";
	cout << "[3] �������� ���� ������\n";
	cout << "[4] ����� ������� ���� ������ INT\n";
	cout << "[5] ����� ������� ���� ������ CHAR\n";
	cout << "[6] ����� ������� ���� ������ DOUBLE\n";
	cout << "[7] ����� ������� ���� ������ FLOAT\n";
	cout << "[8] ����� ������� ���� ������ BOOL\n";
	cout << "[9] ����� ��������� \"������ � �������\"\n";
	cout << "[10] ����� �������� 5�5\n\n";
	cout << "[+] ����: ";
	int x;
	cin >> x;
	system("cls");
	switch (x) {
	case 1: {
		text();
		break;
	}
	case 2: {
		colourBackground();
		break;
	}
	case 3: {
		colourText();
		break;
	}
	case 4: {
		sizeInt();
		break;
	}
	case 5: {
		sizeChar();
		break;
	}
	case 6: {
		sizeDouble();
		break;
	}
	case 7: {
		sizeFloat();
		break;
	}
	case 8: {
		sizeBool();
		break;
	}
	case 9: {
		message();
		break;
	}
	case 10: {
		square();
		break;
	}
	default: {
		Error();
		break;
	}
	}
	int _; cin >> _;
	return 0;
}
