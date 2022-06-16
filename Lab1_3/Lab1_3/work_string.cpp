#include "Library.h"
#include "Prototypes.h"

void work_string()
{
    cout << "Find the word in the line from the file " << endl;

    char* sentence = new char[3000]; //������ ������ ��� ������
    char* search = new char[15]; //������ ������ ��� �����, �� �������� ��� ����� � ������
    int length = 0; //����� ������

    inputstring(sentence, search);

    int search_length = 0; //����� �����-�����

    int x = 0; //���-�� �����������

    length = strlen(sentence); //����� ������ ����� ������ ���������� �������

    for (int i = 0; i < length; i++) //��������� ���� �����, ����� ��������� ���-�� �����������
    {
        if ((sentence[i] == '.') || (sentence[i] == '!') || (sentence[i] == '?')) //���� ��������� ���� ����������, ��
        {
            x++; //������� �����������
        }
    }

    output_string(sentence, search, &length, x, &search_length); //������� �����������, ������� �������� �����-�����

    delete[] sentence; //������� ������

}