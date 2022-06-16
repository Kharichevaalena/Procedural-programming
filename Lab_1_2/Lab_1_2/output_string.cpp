#include "Library.h"
#include "Prototypes.h"

ofstream flout;

void output_string(char* sentence, char* search, int* length, int count, int* search_length) 
{
    for (int i = 0; i <= *length; i++)//� ����� ������ �������� ������� ���� ����
    {
        if (toupper(sentence[i])) //���� ��������� ��������� �����
        {
            sentence[i] = tolower(sentence[i]); //�������� �������
        }
    }
    flout.open("newtext.txt");
    if (flout.is_open()) //��������� ������ �� ����
    {
        int x = 0; //���-�� ����������, ������� ��������� ������ ���������
        int check = 0; //��������������� ����������
        int temp = 0; //����������� �����������
        *search_length = strlen(search); //����� ����� �����-�����
        while (x < count) //���� ����������� ����������� ������, ��� �����, �� ��������� ��������
        {
            for (int i = 0; i < *length; i++) //��������� ������ ������ ������
            {
                if (sentence[i] == '.' || sentence[i] == '?' || sentence[i] == '!') //���� ��������� ���� ����������
                {
                    x += 1; //���������� 1 �����������
                    temp = i + 2; //��������� �����������
                }
                if (sentence[i] == ' ') //���� ��������� �������
                {
                    if (sentence[i + 1] == search[0]) //���� ������ ����� ������� ��������� � ������� �����-�����
                    {
                        int cmp = i + 1; //��������������� ���������� ��� ��������� �����
                        for (cmp; cmp <= *search_length + i + 1; cmp++) //��������� ����� �������
                            if (sentence[cmp] == search[cmp - i - 1]) //���� ������ �� ������
                                check += 1; //��������� ���
                    }
                    if (check == *search_length) //���� �����-����� �������
                    {
                        for (temp; temp <= *length; temp++) //������� ����������� ���� �� ���������� ���� ����������
                        {
                            if (check == *search_length) //������� ��������������� ������ ��� ������� ������� �����������
                            {
                                sentence[temp] = toupper(sentence[temp]); //�������� ������� ������� �������
                                cout << sentence[temp]; //������� ��� �� �����
                                check += 1; //������ ������� �� �������
                                temp += 1; //��������� � ��������� �����
                            }
                            if (sentence[temp] == 'i' && sentence[temp + 1] == ' ') //���� ����������� ����� "i"
                            {
                                sentence[temp] = toupper(sentence[temp]); //���������� � � "I"
                                cout << sentence[temp]; //������� �� �����
                                temp += 1; //��������� � ��������� �����
                            }
                            if (sentence[temp] == '.' || sentence[temp] == '?' || sentence[temp] == '!') //���� ������� ���� ����������
                            {
                                cout << sentence[temp]; //������� ���
                                break; //������� �� �����
                            }
                            cout << sentence[temp]; //������� ������ ������ �����������
                        }
                        cout << ' '; //��������� ������
                    }
                    check = 0; //�������� ��������������� ����������
                }
            }
        }
        if (check != *search_length)
            cout << "word is not found" << endl;
    }
    flout.close(); //��������� ����
}