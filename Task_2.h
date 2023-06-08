// Write a program that asks for a 10-character string consisting of only lowercase English letters 
// and outputs 'YES' if the letters are in ascending order and 'NO' otherwise.
//
#pragma once
using namespace std;

void Task2()
{
	int size = 11;
	char* str = new char[size];

	cout << "\n\n\tEnter string: ";	cin >> str;

	bool boo1 = false;

	for (int i = 0; i < size; i++)
	{
		if (str[i + 1] != '\0')
		{
			if (str[i] <= str[i + 1])
			{
				boo1 = true;
			}
			else
			{
				boo1 = false;
				break;
			}
		}
		else
		{
			break;
		}
	}
	if (boo1)
	{
		cout << "\n\n\tYES\n\n\n";
	}
	else
	{
		cout << "\n\n\tNO\n\n\n";
	}
}