#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	int swt;

	cout << "\t����������\n\n\n";

	cout << "[1] - ������� �����\n";
	cout << "[2] - ���������� �����\n\n\n";
	cout << "[3] - �����\n\n";

	cout << "�������� ��������: ";
	cin >> swt;

	switch (swt) {
	case 1:
		int rw;
		cout << " - ������ ������� ����\n";

		cout << "[1] - ������\n";
		cout << "[2] - ����\n";
		cout << "[3] - ���\n";
		cout << "[4] - ����\n";
		cout << "[5] - �������\n";
		cout << "[6] - �������\n";
		cout << "[7] - �����\n";
		cout << "[8] - ����\n";
		cout << "[9] - ��������\n";
		cout << "[10] - ������\n";
		cout << "[11] - ������\n";
		cout << "[12] - ����\n";
		cout << "[13] - ������\n";
		cout << "[14] - �������\n";
		cout << "[15] - ������\n\n";

		cout << " - �������� ����� �����: ";
		cin >> rw;
		switch (rw) {
		case 1:
			cout << " - ������ --- Road";
			break;

		case 2:
			cout << " - ���� --- Mother";
			break;

		case 3:
			cout << " - ��� --- Meow";
			break;

		case 4:
			cout << " - ���� --- Father";
			break;

		case 5:
			cout << " - ������� --- College";
			break;

		case 6:
			cout << " - ������� --- teacher";
			break;

		case 7:
			cout << " - ����� --- Family";
			break;

		case 8:
			cout << " - ���� --- Window";
			break;

		case 9:
			cout << " - �������� --- volleyball";
			break;

		case 10:
			cout << " - ������ --- United";
			break;

		case 11:
			cout << " - ������ --- Russia";
			break;

		case 12:
			cout << " - ���� --- zen";
			break;

		case 13:
			cout << " - ������ --- List";
			break;

		case 14:
			cout << " - ������� --- Dictionary";
			break;

		case 15:
			cout << " - ������ --- Horse";
			break;
		default:
			cout << "Error\n";
			cout << "�� ����� �� �� �����!";
			break;
		}
		break;

	case 2:
		int ew;
		cout << " - ������ ���������� ����\n";

		cout << "[1] - Position\n";
		cout << "[2] - Telephone\n";
		cout << "[3] - Order\n";
		cout << "[4] - Number\n";
		cout << "[5] - Price\n";
		cout << "[6] - Product\n";
		cout << "[7] - Diverse\n";
		cout << "[8] - Easy\n";
		cout << "[9] - Hard\n";
		cout << "[10] - Normal\n";
		cout << "[11] - Share\n";
		cout << "[12] - Percent\n";
		cout << "[13] - Content\n";
		cout << "[14] - Customer\n";
		cout << "[15] - Hand\n\n";

		cout << " - �������� ����� �����: ";
		cin >> ew;
		switch (ew) {
		case 1:
			cout << " - Position --- ���������";
			break;

		case 2:
			cout << " - Telephone --- �������";
			break;

		case 3:
			cout << " - Order --- �������";
			break;

		case 4:
			cout << " - Number --- �����";
			break;

		case 5:
			cout << " - Price --- ����";
			break;

		case 6:
			cout << " - Product --- �����";
			break;

		case 7:
			cout << " - Diverse --- �������������";
			break;

		case 8:
			cout << " - Easy --- �����";
			break;

		case 9:
			cout << " - Hard --- ������";
			break;

		case 10:
			cout << " - Normal --- ������";
			break;

		case 11:
			cout << " - Share --- ����";
			break;

		case 12:
			cout << " - Percent --- �������";
			break;

		case 13:
			cout << " - Content --- ����������";
			break;

		case 14:
			cout << " - Customer --- ����������";
			break;

		case 15:
			cout << " - Hand --- ����";
			break;
		default:
			cout << "Error\n";
			cout << "�� ����� �� �� �����!";
			break;
		}
		break;

	case 3:
		return 0;
		break;
	}

	int _;
	cin >> _;
	return 0;
}
