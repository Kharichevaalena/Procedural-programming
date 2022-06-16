#include "Library.h"
#include "Prototypes.h"

void work_string()
{
    cout << "Find the word in the line from the file " << endl;

    char* sentence = new char[3000]; //пустой массив для текста
    char* search = new char[15]; //пустой массив для слова, по которому идёт поиск в тексте
    int length = 0; //длина текста

    inputstring(sentence, search);

    int search_length = 0; //длина поиск-слова

    int x = 0; //кол-во предложений

    length = strlen(sentence); //длина текста равна номеру последнего символа

    for (int i = 0; i < length; i++) //проверяем весь текст, чтобы посчитать кол-во предложений
    {
        if ((sentence[i] == '.') || (sentence[i] == '!') || (sentence[i] == '?')) //если встречаем знак препинания, то
        {
            x++; //считаем предложение
        }
    }

    output_string(sentence, search, &length, x, &search_length); //выводим предложения, которые содердат поиск-слово

    delete[] sentence; //очищаем память

}