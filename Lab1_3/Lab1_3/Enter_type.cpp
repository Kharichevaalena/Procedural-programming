#include "Library.h"
#include "Prototypes.h"
#include "TemplatesLibrary.h"


void Enter_type(char mode)
{

	char ChoiceType;
	cout << "Choice the type of data: " << endl;
	cout << "1 - Integer " << endl;
	cout << "2 - Double" << endl;
	cout << "3 - Float" << endl;
	cin >> ChoiceType;

	switch (ChoiceType)
	{
		case '1': 
		{
			switch (mode)
			{
			case '1': {work_array(1); Main_menu(); break; }
			case '2': {work_matrix(1); Main_menu(); break; }
			case '3': {work_string(); Main_menu(); break; }
			case '0': {break; }
			}
		}
		case '2': 
		{
			switch (mode)
			{
			case '1': {work_array(1.0); Main_menu(); break; }
			case '2': {work_matrix(1.0); Main_menu(); break; }
			case '3': {work_string(); Main_menu(); break; }
			case '0': {break; }
			}
		}
		case '3': 
		{
			switch (mode)
			{
			case '1': {work_array(1.0f); Main_menu(); break; }
			case '2': {work_matrix(1.0f); Main_menu(); break; }
			case '3': {work_string(); Main_menu(); break; }
			case '0': {break; }
			}
		}
	}
}