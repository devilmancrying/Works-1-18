#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	const int SIZE = 10;

	string words[SIZE] = { "Duck", "One", "Pack", "Man", "Hellow", "Meow", "Poop", "Loop", "Hide", "Misha" };
	for (int i = 0; i < SIZE; i++) {
		cout << "[" << i + 1 << "] words: " << words[i] << endl;
	}

	cout << endl;
	cout << endl;

	int numbers[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < SIZE; i++) {
		cout << "[" << i + 1 << "] numbers: " << numbers[i] << endl;
	}

	cout << endl;
	cout << endl;

	char abc[SIZE] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'r', 'i', 'm' };
	for (int i = 0; i < SIZE; i++) {
		cout << "[" << i + 1 << "] symbol: " << abc[i] << endl;
	}

	cout << endl;
	cout << endl;

	char press[SIZE] = { 'P', 'r', 'e', 's', 's', ' ', ' ', 'F', ' ', ' ' };
	for (int i = 0; i < SIZE; i++) {
		cout << "[" << i + 1 << "] press: " << press[i] << endl;
	}

	cout << endl;
	cout << endl;

	short papa[SIZE] = { 12, 13, 14, 15, 16, 17, 18, 19, 20, 21 };
	for (int i = 0; i < SIZE; i++) {
		cout << "[" << i + 1 << "] papa: " << papa[i] << endl;
	}

	cout << endl;
	cout << endl;

	float drob[SIZE] = { 1.11, 1.12, 1.13, 1.14, 1.15, 1.16, 1.17, 1.18, 1.19, 1.20 };
	for (int i = 0; i < SIZE; i++) {
		cout << "[" << i + 1 << "] drob: " << drob[i] << endl;
	}

	cout << endl;
	cout << endl;

	char pesik[SIZE] = { 'p', 'a', 'p', 'a', ' ', 'i', 'p', 'a', 'p', 'a' };
	for (int i = 0; i < SIZE; i++) {
		cout << "[" << i + 1 << "] pesik: " << pesik[i] << endl;

	}

	cout << endl;
	cout << endl;

	double bob[SIZE] = { 10.23, 33.423, 43.543, 2345.0708, 23.1314, 232.7087, 32.098, 35.09067, 5346.56708, 346.789789 };
	for (int i = 0; i < SIZE; i++) {
		cout << "[" << i + 1 << "] bob: " << bob[i] << endl;
	}

	int _; cin >> _;
	return 0;
}