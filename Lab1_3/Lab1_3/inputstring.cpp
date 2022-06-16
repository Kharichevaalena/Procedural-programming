#include "Library.h"
#include "Prototypes.h"

ofstream fout;

void inputstring(char* sentence, char* search)
{

    fout.open("text.txt");

    if (!fout.is_open()) //проверяем открыт ли файл
        cout << "Error!" << endl; //выводим соотвествующее сообщение об ошибке

    else //если файл открыт
    {
        cout << "Input the text: " << endl;
        cin.ignore();
        cin.getline(sentence, 3000);
        fout << sentence; //записываем в файл весь текст

        cout << "Input search's word: " << endl;
        cin.getline(search, 15); //вводим поиск-слово, где 15 это максимальная длина
    }
}