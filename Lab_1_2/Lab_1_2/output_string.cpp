#include "Library.h"
#include "Prototypes.h"

ofstream flout;

void output_string(char* sentence, char* search, int* length, int count, int* search_length) 
{
    for (int i = 0; i <= *length; i++)//в копии текста понижаем регистр всех букв
    {
        if (toupper(sentence[i])) //если встретили заглавную букву
        {
            sentence[i] = tolower(sentence[i]); //понижаем регистр
        }
    }
    flout.open("newtext.txt");
    if (flout.is_open()) //проверяем открыт ли файл
    {
        int x = 0; //кол-во предлжений, которое программа успела проверить
        int check = 0; //вспомогательная переменная
        int temp = 0; //разделитель предложений
        *search_length = strlen(search); //задаём длину поиск-слова
        while (x < count) //пока проверенных предложений меньше, чем всего, то выполняем проверку
        {
            for (int i = 0; i < *length; i++) //проверяем каждый символ текста
            {
                if (sentence[i] == '.' || sentence[i] == '?' || sentence[i] == '!') //если встретили знак препинания
                {
                    x += 1; //прибавляем 1 предложение
                    temp = i + 2; //обновляем разделитель
                }
                if (sentence[i] == ' ') //если встретили пропуск
                {
                    if (sentence[i + 1] == search[0]) //если символ после пробела совпаадет с началом поиск-слова
                    {
                        int cmp = i + 1; //вспомогательная переменная для сравнения строк
                        for (cmp; cmp <= *search_length + i + 1; cmp++) //проверяем слово целиком
                            if (sentence[cmp] == search[cmp - i - 1]) //если символ не совпал
                                check += 1; //фиксируем это
                    }
                    if (check == *search_length) //если поиск-слово нашлось
                    {
                        for (temp; temp <= *length; temp++) //выводим предложение пока не встретился знак препинания
                        {
                            if (check == *search_length) //условие удовлетворяющее только для первого символа предложения
                            {
                                sentence[temp] = toupper(sentence[temp]); //повышаем регистр первого символа
                                cout << sentence[temp]; //выводим его на экран
                                check += 1; //делаем условие не рабочим
                                temp += 1; //переходим к следующей букве
                            }
                            if (sentence[temp] == 'i' && sentence[temp + 1] == ' ') //если встретилась буква "i"
                            {
                                sentence[temp] = toupper(sentence[temp]); //превращаем её в "I"
                                cout << sentence[temp]; //выводим на экран
                                temp += 1; //переходим к следующей букве
                            }
                            if (sentence[temp] == '.' || sentence[temp] == '?' || sentence[temp] == '!') //если нашелся знак препинания
                            {
                                cout << sentence[temp]; //выводим его
                                break; //выходим из цикла
                            }
                            cout << sentence[temp]; //выводим каждый символ предложения
                        }
                        cout << ' '; //вставляем пробел
                    }
                    check = 0; //обнуляем вспомогательную переменную
                }
            }
        }
        if (check != *search_length)
            cout << "word is not found" << endl;
    }
    flout.close(); //закрываем файл
}