#include "Library.h"
#include "Prototypes.h"

ofstream fout;

void inputstring(char* sentence, char* search)
{

    fout.open("text.txt");

    if (!fout.is_open()) //��������� ������ �� ����
        cout << "Error!" << endl; //������� �������������� ��������� �� ������

    else //���� ���� ������
    {
        cout << "Input the text: " << endl;
        cin.ignore();
        cin.getline(sentence, 3000);
        fout << sentence; //���������� � ���� ���� �����

        cout << "Input search's word: " << endl;
        cin.getline(search, 15); //������ �����-�����, ��� 15 ��� ������������ �����
    }
}