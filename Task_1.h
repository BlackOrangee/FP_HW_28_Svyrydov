// Write a program that asks for a 10-character string consisting only of lowercase English letters and numbers, 
// and outputs the word "LETTERS" if the string consists entirely of letters, 
// the word "DIGITS" if the string consists entirely of digits, and the word "ANOTHER", 
// if the line contains both numbers and letters.
//

#pragma once
using namespace std;

void Task1()
{
	int size = 11;
	char* str = new char[size];

	cout << "\n\n\tEnter string: ";	cin >> str;

	bool letters = false;
	bool digits = false;

	for (int i = 0; i < size; i++)
	{
		if (str[i] != '\0')
		{
			if (str[i] >= 65 && str[i] <= 122)// 65 122
			{
				letters = true;
			}
			else if (str[i] >= 48 && str[i] <= 57)// 48 57
			{
				digits = true;
			}
		}
		else
		{
			break;
		}
	}
	if (letters && !digits)
	{
		cout << "\n\n\tLetters\n\n\n";
	}
	else if (!letters && digits)
	{
		cout << "\n\n\tDigits\n\n\n";
	}
	else
	{
		cout << "\n\n\tAnother\n\n\n";
	}
}