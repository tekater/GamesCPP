#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <vector>

using namespace std;

//int Tries = 10;
int countWord = 0;
char temp[20];
void chel(int lives) {
    if (lives == 0) {
        cout << " -                  - " << endl;
        cout << " -     ~~~~~~       - " << endl;
        cout << " -     -     -      - " << endl;
        cout << " -     -    ---     - " << endl;
        cout << " -     -   -   -    - " << endl;
        cout << " -     -    - -     - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -------------------- " << endl;
    }
    else if (lives == 1) {
        cout << " -                  - " << endl;
        cout << " -     ~~~~~~       - " << endl;
        cout << " -     -     -      - " << endl;
        cout << " -     -    ---     - " << endl;
        cout << " -     -   -   -    - " << endl;
        cout << " -     -    -       - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -------------------- " << endl;
    }
    else if (lives == 2) {
        cout << " -                  - " << endl;
        cout << " -     ~~~~~~       - " << endl;
        cout << " -     -     -      - " << endl;
        cout << " -     -    ---     - " << endl;
        cout << " -     -   -   -    - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -------------------- " << endl;
    }
    else if (lives == 3) {
        cout << " -                  - " << endl;
        cout << " -     ~~~~~~       - " << endl;
        cout << " -     -     -      - " << endl;
        cout << " -     -    ---     - " << endl;
        cout << " -     -       -    - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -------------------- " << endl;
    }
    else if (lives == 4) {
        cout << " -                  - " << endl;
        cout << " -     ~~~~~~       - " << endl;
        cout << " -     -     -      - " << endl;
        cout << " -     -    ---     - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -------------------- " << endl;
    }
    else if (lives == 5) {
        cout << " -                  - " << endl;
        cout << " -     ~~~~~~       - " << endl;
        cout << " -     -     -      - " << endl;
        cout << " -     -    - -     - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -------------------- " << endl;
    }
    else if (lives == 6) {
        cout << " -                  - " << endl;
        cout << " -     ~~~~~~       - " << endl;
        cout << " -     -     -      - " << endl;
        cout << " -     -    -       - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -------------------- " << endl;
    }
    else if (lives == 7) {
        cout << " -                  - " << endl;
        cout << " -     ~~~~~~       - " << endl;
        cout << " -     -     -      - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -------------------- " << endl;
    }
    else if (lives == 8) {
        cout << " -                  - " << endl;
        cout << " -     ~~~~~~       - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -------------------- " << endl;
    }
    else if (lives == 9) {
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -     -            - " << endl;
        cout << " -------------------- " << endl;
    }
    else if (lives == 10) {
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -------------------- " << endl;
    }
    else {
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -                  - " << endl;
        cout << " -------------------- " << endl;
    }
}
bool LoadWord(FILE* f, char* word, char* unique) {
    int count = 0;
    int s = 0;


    while (!feof(f)) {
        fgets(temp, 20, f);
        count++;
    }

    if (count == 0) {
        return false;
    }

    fseek(f, 0, 0);
    int num = rand() % count + 1;

    for (int i = 0; i < num; i++) {
        fgets(temp, 20, f);
    }

    if (temp == unique) {
        LoadWord(f, word, unique);
    }
    else {

    }
    temp[strlen(temp) - 1] = '\0';
    strcpy(word, temp);


    fclose(f);
    return true;
}

void Game(char* word, int Tries = 10, int stars = 0, int miss = 0) {
    _strupr(word);
    char* copy = new char[strlen(word) + 1];
    for (int i = 0; i < strlen(word); i++) {
        copy[i] = '*';
    }
    copy[strlen(word)] = '\0';
    char letters[27];
    for (int i = 0; i < 26; i++) {
        letters[i] = 'A' + i;
    }
    letters[26] = '\0';
    char letter;
    char* pos;
    bool replace = false;
    int r;
    do {

        system("cls");
        cout << "Звёзд: " << stars << endl;
        cout << "Промахов: " << miss << endl;
        cout << "\nЗагаданное слово: " << copy << endl;
        chel(Tries);
        cout << "\nПопытки: " << Tries << endl;
        cout << "Буквы: " << letters << endl;

        if (miss == 3) {
            {
                cout << "Вы промахнулись 3 раз подряд\nВыбрано новое слово...\n";
                system("pause");

                FILE* f = fopen("C:\\Users\\tekat\\OneDrive\\Рабочий стол\\words.txt", "r");

                char word[20];
                LoadWord(f, word, word);
                Game(word, Tries, stars);
            }
            break;
        }

        if (stars >= 3) {
            cout << "Хотите открыть букву за 3 звезды?\n[1] - yes\n[2] - no\n";
            cin >> r;

            if (r == 1) {
                stars -= 3;
                for (int i = 0; i < strlen(word) + 1; i++) {
                    for (int j = 0; j < 26; j++) {
                        if (letters[j] == word[i]) {
                            letter = letters[j];
                            continue;
                        }
                    }
                }
            }
            else if (r == 2) {
                cout << "Выбери букву: ";
                cin >> letter;
            }
            else {
                cout << "Ошибка!\n";
                cout << "Выбери букву: ";
                cin >> letter;
            }

        }
        else {
            cout << "Выбери букву: ";
            cin >> letter;
        }

        cout << endl;
        if (!isalpha(letter)) {
            cout << "Это не буква!\n";
            Sleep(1000);
            continue;
        }
        else {
            letter = toupper(letter);
            pos = strchr(letters, letter);
            if (pos == nullptr) {
                cout << "Вы уже выбирали эту букву!\n";
                Sleep(1000);
                continue;
            }
            else {
                pos[0] = ' ';
                for (int i = 0; i < strlen(word); i++) {
                    if (word[i] == letter) {
                        copy[i] = letter;
                        replace = true;
                    }

                }
            }
        }

        if (replace == false) {
            Tries--;
            miss++;
            cout << "Промазал 0_0\n";
            Sleep(1000);
        }
        else {
            replace = false;
            miss = 0;
        }



        if (strcmp(copy, word) == 0) {
            system("cls");
            cout << "\t\tЗагаданное слово: " << copy << endl;
            cout << "\nStars: " << stars << endl;
            cout << "Оставшиеся Попытки: " << Tries << endl;
            cout << "\n\t\tВы отгадали слово!!!\n";
            Tries += 3;
            system("pause");
            stars++;
            countWord++;
            {
                FILE* f = fopen("C:\\Users\\tekat\\OneDrive\\Рабочий стол\\words.txt", "r");

                char word[20];
                LoadWord(f, word, word);
                Game(word, Tries, stars);
            }
            break;
        }
    } while (Tries != 0);
    if (Tries == 0) {
        system("cls");
        cout << "\t\tЗагаданное слово: " << word << endl;
        cout << "Оставшиеся Буквы Последнего слова: " << letters << endl;
        cout << "Оставшиеся Попытки: " << Tries << endl;
        cout << "\t\tОтгаданных слов:" << countWord << endl;
        cout << "\t\tЗвёзд: " << stars << endl;
        cout << "\t\tВы проиграли!!!\n";
        chel(Tries);
    }
    delete[] copy;
}

int main()
{
    setlocale(0, "");
    srand(time(nullptr));
    cout << "\tПривет игрок, это игра *Виселица*\n  Задача отгадать слово и спасти себя\n";
    cout << "  За каждый промах вы приближаетесь к смерти\n\tВесёлой игры!!!\n";
    system("pause");
    FILE* f = fopen("C:\\Users\\tekat\\OneDrive\\Рабочий стол\\words.txt", "r");
    if (f == nullptr) {
        cout << "Невозможно открыть файл!\n";
        return -1;
    }
    else {
        char word[20];
        char un[20] = " ";
        if (!LoadWord(f, word, un)) {
            cout << "Невозможно загрузить слово!\n";
            fclose(f);
            return -1;
        }
        else {
            Game(word);
        }
    }


}
/* слова в файле
book
cafe
cake
tart
notebook
computer
helicopter
Russia
America
FastFood
Desktop
Mouse
keyboard
skateboard
vehicle
printer
monitor



*/
