#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

const int size = 10;
const int length = 25;
const int mmr = 100;

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	//system("color B5");
	bool win = false;
	int arr[::size] = { 3,2,1,4,5,3,2,1,4,5 }; int num = 0; int num2 = 0; int count = 0;
	int arr2[::size] = {};
	bool arrB[::size] = {};

	cout << "Здравствуй это игра Memory!!!\n"; // alpha
	do {
		if (arrB[num] == true && arrB[num] == true) {
			cout << "-=1=- -=2=- -=3=- -=4=- -=5=-\n";
			for (int i = 0; i < ::size / 2; i++) {
				if (arr2[i] == 0 && arrB[i] == false) {
					cout << "( " << " " << " ) ";
				}
				else {
					cout << "( " << arr[i] << " ) ";
				}
			}
			cout << "\n-===- -===- -===- -===- -===-\n";

			cout << "-=6=- -=7=- -=8=- -=9=- -=10=-\n";
			for (int i = ::size / 2; i < ::size; i++) {
				if (arr2[i] == 0 && arrB[i] == false) {
					cout << "( " << " " << " ) ";
				}
				else {
					cout << "( " << arr[i] << " ) ";
				}
			}
			cout << "\n-===- -===- -===- -===- -====-\n";
		}

		Sleep(1000);
		arrB[num] = false;
		arrB[num2] = false;
		system("cls");

		cout << "-=1=- -=2=- -=3=- -=4=- -=5=-\n";
		for (int i = 0; i < ::size / 2; i++) {
			if (arr2[i] == 0 && arrB[i] == false) {
				cout << "( " << " " << " ) ";
			}
			else {
				cout << "( " << arr[i] << " ) ";
			}
		}
		cout << "\n-===- -===- -===- -===- -===-\n";

		cout << "-=6=- -=7=- -=8=- -=9=- -=10=-\n";
		for (int i = ::size / 2; i < ::size; i++) {
			if (arr2[i] == 0 && arrB[i] == false) {
				cout << "( " << " " << " ) ";
			}
			else {
				cout << "( " << arr[i] << " ) ";
			}
		}
		cout << "\n-===- -===- -===- -===- -====-\n";

		for (int i = 0; i < ::size; i++) {
			if (arr2[i] != 0) {
				count++;
			}
		}

		if (count == 10) {
			cout << "\nПоздравляю вы выиграли!!!!!\n";
			num = 10;
			break;
		}

		cout << "Выберите ячейку:\n";
		cin >> num;
		cout << "Выберите 2 ячейку:\n";
		cin >> num2;
		num--;
		num2--;

		arrB[num] = true;
		arrB[num2] = true;
		if (arrB[num] != false && arrB[num2] != false && arr[num] == arr[num2]) {
			arr2[num] = arr[num];
			arr2[num2] = arr[num2];
			cout << "Вы угадали комбинацию!!!\n";
		}
		else {
			cout << "Вы не угадали...\n";
		}
		Sleep(1000);
		count = 0;
		system("cls");

	} while (num != 10);
}
