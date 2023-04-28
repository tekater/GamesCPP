#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;

const int size = 30;

int main()
{
	setlocale(0, "");
	srand(time(NULL));

	cout << "\n\n\n\t\t\t\t\tЗдравствуй это игра Memory!!!\n\n\n\n\n";
	cout << "\n\t\t\t\t\tПравила игры таковы:\n\t[1] - Вы выбираете размер поля на котором будете играть";
	cout << "\n\t[2] - Вы выбираете 2 карты, если значения карт одинаковы, то они будут открыты до конца игры";
	cout << "\n\t\b\t\bиначе, они снова закроются (нельзя выбирать одну и ту же карту!!!)";
	cout << "\n\t[3] - Победа засчитывается если вы отыскали все карты!!!\n\n\n";
	system("pause");
	cout << "\n\n\nВыберите размеры поля:\n[1] - 2x5\n[2] - 4x4\n[3] - 5x6 (будет очень долго)\n";


	int num = 0; int num2 = 0; int count = 0; 
	int card = 0; int point = 0; int counter = 0;

	int arr[::size] = {};
	int arr2[::size] = {}; bool arrB[::size] = {};

	bool win = false;

	int box; cin >> box; int boxSize;
	bool pointSize[::size] = {};
	bool pointCard[::size] = {};
	int boxchecker = 0;

	time_t begin = time(NULL);

	switch (box) {
	case 1:
		boxSize = 10;
		for (int i = 0; i < boxSize / 2; i++) {
			card = 1 + rand() % 5;
			point = 5 + rand() % 5;

			if (pointSize[point] == false && pointCard[card] == false && boxchecker != 10) {
				arr[i] = card;
				arr[point] = card;
				pointSize[point] = true;
				pointCard[card] = true;
				boxchecker++;
			}
			else if (boxchecker == 10) {
				i = 100;
			}
			else {
				i--;
			}
		}
		break;
	case 2:
		boxSize = 16;
		for (int i = 0; i < boxSize / 2; i++) {
			card = 1 + rand() % 8;
			point = 8 + rand() % 8;

			if (pointSize[point] == false && pointCard[card] == false && boxchecker != 16) {
				arr[i] = card;
				arr[point] = card;
				pointSize[point] = true;
				pointCard[card] = true;
				boxchecker++;
			}
			else if (boxchecker == 16) {
				i = 100;
			}
			else {
				i--;
			}
		}
		break;
	case 3:
		boxSize = 30;
		for (int i = 0; i < boxSize / 2; i++) {
			card = 1 + rand() % 15;
			point = 15 + rand() % 15;

			if (pointSize[point] == false && pointCard[card] == false && boxchecker != 30) {
				arr[i] = card;
				arr[point] = card;
				pointSize[point] = true;
				pointCard[card] = true;
				boxchecker++;
			}
			else if (boxchecker == 30) {
				i = 100;
			}
			else {
				i--;
			}
		}
		break;
	default:
		box = 1;
		boxSize = 10;
		break;
	}


	do {

		if (box == 1) {
			if (arrB[num] == true && arrB[num] == true) {
				cout << "\n\n\n\n\n\n";
				cout << "\t\t\t\t\t-=1=- -=2=- -=3=- -=4=- -=5=-\n\t\t\t\t\t";
				for (int i = 0; i < 5; i++) {
					if (arr2[i] == 0 && arrB[i] == false) {
						cout << "( " << " " << " ) ";
					}
					else {
						cout << "( " << arr[i] << " ) ";
					}
				}
				cout << "\n\t\t\t\t\t-===- -===- -===- -===- -===-\n";

				cout << "\t\t\t\t\t-=6=- -=7=- -=8=- -=9=- -=10=-\n\t\t\t\t\t";
				for (int i = 5; i < 10; i++) {
					if (arr2[i] == 0 && arrB[i] == false) {
						cout << "( " << " " << " ) ";
					}
					else {
						cout << "( " << arr[i] << " ) ";
					}
				}
				cout << "\n\t\t\t\t\t-===- -===- -===- -===- -====-\n";
			}
			if (counter == 0) {
			}
			else { cout << "\n\t\t\t\t\t"; system("pause"); }
		}
		else if (box == 2) {
			if (arrB[num] == true && arrB[num] == true) {
				cout << "\n\n\n\n\n\n";
				cout << "\t\t\t\t\t-=1=- -=2=- -=3=- -=4=-\n\t\t\t\t\t";
				for (int i = 0; i < 4; i++) {
					if (arr2[i] == 0 && arrB[i] == false) {
						cout << "( " << " " << " ) ";
					}
					else {
						cout << "( " << arr[i] << " ) ";
					}
				}
				cout << "\n\t\t\t\t\t-===- -===- -===- -===-\n";

				cout << "\t\t\t\t\t-=5=- -=6=- -=7=- -=8=-\n\t\t\t\t\t";
				for (int i = 4; i < 8; i++) {
					if (arr2[i] == 0 && arrB[i] == false) {
						cout << "( " << " " << " ) ";
					}
					else {
						cout << "( " << arr[i] << " ) ";
					}
				}
				cout << "\n\t\t\t\t\t-===- -===- -===- -===-\n";

				cout << "\t\t\t\t\t-==9=- -=10=- -=11=- -=12=-\n\t\t\t\t\t";
				for (int i = 8; i < 12; i++) {
					if (arr2[i] == 0 && arrB[i] == false) {
						cout << "( " << " " << " )  ";
					}
					else {
						cout << "( " << arr[i] << " )  ";
					}
				}
				cout << "\n\t\t\t\t\t-====- -====- -====- -====-\n";

				cout << "\t\t\t\t\t-=13=- -=14=- -=15=- -=16=-\n\t\t\t\t\t";
				for (int i = 12; i < 16; i++) {
					if (arr2[i] == 0 && arrB[i] == false) {
						cout << "( " << " " << " )  ";
					}
					else {
						cout << "( " << arr[i] << " )  ";
					}
				}
				cout << "\n\t\t\t\t\t-====- -====- -====- -====-\n";
			}
			if (counter == 0) {
			}
			else { cout << "\n\t\t\t\t\t"; system("pause"); }
		}
		else if (box == 3) {
			if (arrB[num] == true && arrB[num] == true) {
				cout << "\n\n\n\n\n\n";
				cout << "\t\t\t\t\t-=1==- -=2==- -=3==- -=4==- -=5==- -=6==-\n\t\t\t\t\t";
				for (int i = 0; i < 6; i++) {
					if (arr2[i] == 0 && arrB[i] == false) {
						cout << "( " << " " << " )  ";
					}
					else {
						cout << "( " << arr[i] << " )  ";
					}
				}
				cout << "\n\t\t\t\t\t-====- -====- -====- -====- -====- -====-\n";

				cout << "\t\t\t\t\t-=7==- -=8==- -=9==- -=10=- -=11=- -=12=-\n\t\t\t\t\t";
				for (int i = 6; i < 12; i++) {
					if (arr2[i] == 0 && arrB[i] == false) {
						cout << "( " << " " << " )  ";
					}
					else {
						cout << "( " << arr[i] << " )  ";
					}
				}
				cout << "\n\t\t\t\t\t-====- -====- -====- -====- -====- -====-\n";

				cout << "\t\t\t\t\t-=13=- -=14=- -=15=- -=16=- -=17=- -=18=-\n\t\t\t\t\t";
				for (int i = 12; i < 18; i++) {
					if (arr2[i] == 0 && arrB[i] == false) {
						cout << "( " << " " << " )  ";
					}
					else {
						cout << "( " << arr[i] << " )  ";
					}
				}
				cout << "\n\t\t\t\t\t-====- -====- -====- -====- -====- -====-\n";

				cout << "\t\t\t\t\t-=19=- -=20=- -=21=- -=22=- -=23=- -=24=-\n\t\t\t\t\t";
				for (int i = 18; i < 24; i++) {
					if (arr2[i] == 0 && arrB[i] == false) {
						cout << "( " << " " << " )  ";
					}
					else {
						cout << "( " << arr[i] << " )  ";
					}
				}
				cout << "\n\t\t\t\t\t-====- -====- -====- -====- -====- -====-\n";

				cout << "\t\t\t\t\t-=25=- -=26=- -=27=- -=28=- -=29=- -=30=-\n\t\t\t\t\t";
				for (int i = 24; i < 30; i++) {
					if (arr2[i] == 0 && arrB[i] == false) {
						cout << "( " << " " << " )  ";
					}
					else {
						cout << "( " << arr[i] << " )  ";
					}
				}
				cout << "\n\t\t\t\t\t-====- -====- -====- -====- -====- -====-\n";
			}
			if (counter == 0) {
			}
			else { cout << "\n\t\t\t\t\t"; system("pause"); }
		}


		Sleep(1000);
		arrB[num] = false;
		arrB[num2] = false;
		system("cls");

		if (box == 1) {
			cout << "\n\n\n\n\n\n";
			cout << "\t\t\t\t\t-=1=- -=2=- -=3=- -=4=- -=5=-\n\t\t\t\t\t";
			for (int i = 0; i < 5; i++) {
				if (arr2[i] == 0 && arrB[i] == false) {
					cout << "( " << " " << " ) ";
				}
				else {
					cout << "( " << arr[i] << " ) ";
				}
			}
			cout << "\n\t\t\t\t\t-===- -===- -===- -===- -===-\n";

			cout << "\t\t\t\t\t-=6=- -=7=- -=8=- -=9=- -=10=-\n\t\t\t\t\t";
			for (int i = 5; i < 10; i++) {
				if (arr2[i] == 0 && arrB[i] == false) {
					cout << "( " << " " << " ) ";
				}
				else {
					cout << "( " << arr[i] << " ) ";
				}
			}
			cout << "\n\t\t\t\t\t-===- -===- -===- -===- -====-\n";

		}
		else if (box == 2) {
			cout << "\n\n\n\n\n\n";
			cout << "\t\t\t\t\t-=1=- -=2=- -=3=- -=4=-\n\t\t\t\t\t";
			for (int i = 0; i < 4; i++) {
				if (arr2[i] == 0 && arrB[i] == false) {
					cout << "( " << " " << " ) ";
				}
				else {
					cout << "( " << arr[i] << " ) ";
				}
			}
			cout << "\n\t\t\t\t\t-===- -===- -===- -===-\n";

			cout << "\t\t\t\t\t-=5=- -=6=- -=7=- -=8=-\n\t\t\t\t\t";
			for (int i = 4; i < 8; i++) {
				if (arr2[i] == 0 && arrB[i] == false) {
					cout << "( " << " " << " ) ";
				}
				else {
					cout << "( " << arr[i] << " ) ";
				}
			}
			cout << "\n\t\t\t\t\t-===- -===- -===- -===-\n";

			cout << "\t\t\t\t\t-==9=- -=10=- -=11=- -=12=-\n\t\t\t\t\t";
			for (int i = 8; i < 12; i++) {
				if (arr2[i] == 0 && arrB[i] == false) {
					cout << "( " << " " << " )  ";
				}
				else {
					cout << "( " << arr[i] << " )  ";
				}
			}
			cout << "\n\t\t\t\t\t-====- -====- -====- -====-\n";

			cout << "\t\t\t\t\t-=13=- -=14=- -=15=- -=16=-\n\t\t\t\t\t";
			for (int i = 12; i < 16; i++) {
				if (arr2[i] == 0 && arrB[i] == false) {
					cout << "( " << " " << " )  ";
				}
				else {
					cout << "( " << arr[i] << " )  ";
				}
			}
			cout << "\n\t\t\t\t\t-====- -====- -====- -====-\n";
		}
		else if (box == 3) {
			cout << "\n\n\n\n\n\n";
			cout << "\t\t\t\t\t-=1==- -=2==- -=3==- -=4==- -=5==- -=6==-\n\t\t\t\t\t";
			for (int i = 0; i < 6; i++) {
				if (arr2[i] == 0 && arrB[i] == false) {
					cout << "( " << " " << " )  ";
				}
				else {
					cout << "( " << arr[i] << " )  ";
				}
			}
			cout << "\n\t\t\t\t\t-====- -====- -====- -====- -====- -====-\n";

			cout << "\t\t\t\t\t-=7==- -=8==- -=9==- -=10=- -=11=- -=12=-\n\t\t\t\t\t";
			for (int i = 6; i < 12; i++) {
				if (arr2[i] == 0 && arrB[i] == false) {
					cout << "( " << " " << " )  ";
				}
				else {
					cout << "( " << arr[i] << " )  ";
				}
			}
			cout << "\n\t\t\t\t\t-====- -====- -====- -====- -====- -====-\n";

			cout << "\t\t\t\t\t-=13=- -=14=- -=15=- -=16=- -=17=- -=18=-\n\t\t\t\t\t";
			for (int i = 12; i < 18; i++) {
				if (arr2[i] == 0 && arrB[i] == false) {
					cout << "( " << " " << " )  ";
				}
				else {
					cout << "( " << arr[i] << " )  ";
				}
			}
			cout << "\n\t\t\t\t\t-====- -====- -====- -====- -====- -====-\n";

			cout << "\t\t\t\t\t-=19=- -=20=- -=21=- -=22=- -=23=- -=24=-\n\t\t\t\t\t";
			for (int i = 18; i < 24; i++) {
				if (arr2[i] == 0 && arrB[i] == false) {
					cout << "( " << " " << " )  ";
				}
				else {
					cout << "( " << arr[i] << " )  ";
				}
			}
			cout << "\n\t\t\t\t\t-====- -====- -====- -====- -====- -====-\n";

			cout << "\t\t\t\t\t-=25=- -=26=- -=27=- -=28=- -=29=- -=30=-\n\t\t\t\t\t";
			for (int i = 24; i < 30; i++) {
				if (arr2[i] == 0 && arrB[i] == false) {
					cout << "( " << " " << " )  ";
				}
				else {
					cout << "( " << arr[i] << " )  ";
				}
			}
			cout << "\n\t\t\t\t\t-====- -====- -====- -====- -====- -====-\n";
		}


		for (int i = 0; i < boxSize; i++) {
			if (arr2[i] != 0) {
				count++;
			}
		}

		if (box == 1 && count == 10) {
			time_t end = time(NULL);
			cout << "\n\t\t\t\t\tПоздравляю вы выиграли!!!!!\n";
			cout << "\n\t\t\t\t\tВремя: " << (end - begin) << endl;
			cout << "\n\t\t\t\t\tКоличество переворотов карт: " << counter << endl;
			num = -5;
			break;
		}
		else if (box == 2 && count == 16) {
			time_t end = time(NULL);
			cout << "\n\t\t\t\t\tПоздравляю вы выиграли!!!!!\n";
			cout << "\n\t\t\t\t\tВремя: " << (end - begin) << endl;
			cout << "\n\t\t\t\t\tКоличество переворотов карт: " << counter << endl;
			num = -5;
			break;
		}
		else if (box == 3 && count == 30) {
			time_t end = time(NULL);
			cout << "\n\t\t\t\t\tПоздравляю вы выиграли!!!!!\n";
			cout << "\n\t\t\t\t\tВремя: " << (end - begin) << endl;
			cout << "\n\t\t\t\t\tКоличество переворотов карт: " << counter << endl;
			num = -5;
			break;
		}

		cout << "\n\t\t\t\t\tВыберите ячейку: ";
		cin >> num; num--;
		cout << "\n\t\t\t\t\tВыберите 2 ячейку: ";
		cin >> num2; num2--;


		counter++;
		arrB[num] = true;
		arrB[num2] = true;
		if (num == num2) {
			cout << "\n\t\t\t\t\tНельзя выбирать одну и ту же карту!!!\n";
		}else if (arrB[num] != false && arrB[num2] != false && arr[num] == arr[num2]) {
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

	} while (num != -5);
}
