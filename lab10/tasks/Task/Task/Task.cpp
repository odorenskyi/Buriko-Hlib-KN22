#include <iostream>
#include <bitset>
#include <fstream>
#include <string>
#include <Windows.h>
#include <chrono>
#include <ctime>
#include <iomanip> 
using namespace std;

bool containsWord(const string& line, const string& word) {
    size_t pos = line.find(word);
    return pos != string::npos;
}

int main() {

    float x, z, y;

    SetConsoleOutputCP(1251);

    string path = "mfile.txt";
    ofstream fout(path);

    if (!fout.is_open()) {
        cout << "Помилка відкриття файлу" << endl;
        return 1;
    }

    cout << "Файл відкритий" << endl;

    fout << "Модуль розроблений студентом КН-22 Буріко Гліб, м. Кропивницький, Україна, 2023 рік\n";
    fout.close();

    ifstream fin(path);

    int symbol_count = 0;
    string word;
    bool wordFound = false;

    while (fin >> word) {
        symbol_count += word.size();
        if (containsWord(word, "програма")) {
            cout << "Слово 'програма' знайдено." << endl;
            wordFound = true;
        }
        if (containsWord(word, "модуль")) {
            cout << "Слово 'модуль' знайдено." << endl;
            wordFound = true;
        }
        if (containsWord(word, "студент")) {
            cout << "Слово 'студент' знайдено." << endl;
            wordFound = true;
        }
        if (containsWord(word, "програміст")) {
            cout << "Слово 'програміст' знайдено." << endl;
            wordFound = true;
        }
    }

    cout << "Кількість символів у файлі: " << symbol_count << endl;

    if (!wordFound) {
        cout << "Не знайдено жодного з шуканих слів у файлі." << endl;
    }

    fin.close();

    fout.open(path, ios::app);

    fout << "Державними символами України є Державний Прапор України, Державний Герб України і Державний Гімн України.\nДержавний Прапор України - стяг із двох рівновеликих горизонтальних смуг синього і жовтого кольорів.\nВеликий Державний Герб України встановлюється з урахуванням малого Державного Герба України та герба Війська Запорізького законом, що приймається не менш як двома третинами від конституційного складу Верховної Ради України.\nГоловним елементом великого Державного Герба України є Знак Княжої Держави Володимира Великого (малий Державний Герб України).\nДержавний Гімн України - національний гімн на музику М. Вербицького із словами, затвердженими законом, що приймається не менш як двома третинами від конституційного складу Верховної Ради України.\nОпис державних символів України та порядок їх використання встановлюються законом, що приймається не менш як двома третинами від конституційного складу Верховної Ради України.\n";
    auto currentTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    struct tm timeInfo;
    localtime_s(&timeInfo, &currentTime);
    char timeString[26];
    asctime_s(timeString, sizeof(timeString), &timeInfo);
    fout << "Дозаписано: " << timeString;

    cout << "Перше число(x): ";
    cin >> x;
    cout << "Друге число(y): ";
    cin >> y;
    cout << "Третє число(z): ";
    cin >> z;

    float s = sin(x) / sqrt(abs(y * z / x + y)) + 3 * pow(y, 5);
    fout << "Результат: " << s << endl;

    int b;
    cout << "Введіть число, яке хочете перевести у бінар: ";
    cin >> b;

    bitset<sizeof(int) * 8> binary(b);
    fout << "Число b в бінарному вигляді: " << binary << endl;

    fout.close();

    return 0;
}
