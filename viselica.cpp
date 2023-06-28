#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;

//int Tries = 10;
int countWord = 0;
char temp[20];

bool LoadWord(FILE* f, char* word) {
    int count = 0;
    int s = 0;

    while (!feof(f)) {
        fgets(temp,20,f);
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

    temp[strlen(temp) - 1] = '\0';
    strcpy(word,temp);

    return true;
}

void Game(char* word, int Tries = 10) {
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
    do {

        system("cls");
        cout << "Загаданное слово: " << copy << endl;
        cout << "Попытки: " << Tries << endl;
        cout << "Буквы: " << letters << endl;
        cout << "Выбери букву: ";
        cin >> letter;
        cout << endl;
        /*if (letter >= 'A' && letter <= 'Z' || letter >= 'a' && letter <= 'z') {

        }*/
        if (!isalpha(letter)) {
            cout << "Это не буква!\n";
            Sleep(1000);
            continue;
        }
        else {
            letter = toupper(letter);
            pos = strchr(letters,letter);
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
        }
        else {
            replace = false;
        }
        if (strcmp(copy, word) == 0) {
            system("cls");
            cout << "Загаданное слово: " << copy << endl;
            cout << "Оставшиеся Попытки: " << Tries << endl;
            cout << "Вы отгадали слово!!!\n";
            countWord++;

            Game(word, Tries);
            break;
        }
    } while (Tries != 0);
    if (Tries == 0) {
        system("cls");
        cout << "Загаданное слово: " << copy << endl;
        cout << "Оставшиеся Буквы: " << letters << endl;
        cout << "Оставшиеся Попытки: " << Tries << endl;
        cout << "Вы проиграли!!!\n";
    }
    delete[] copy;
}

int main()
{
    setlocale(0, "");
    srand(time(nullptr));

    FILE* f = fopen("C:\\Users\\tekat\\OneDrive\\Рабочий стол\\words.txt","r");
    if (f == nullptr) {
        cout << "Невозможно открыть файл!\n";
        return -1;
    }
    else {
        char word[20];
        if (!LoadWord(f, word)) {
            cout << "Невозможно загрузить слово!\n";
            fclose(f);
            return -1;
        }
        else {
            Game(word);
        }
    }
    

}
