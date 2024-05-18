#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include "Field.h"

int main()
{
	Field myField;
	myField.createField();

	myField.drawField();
	std::string input;

	while (input != "N" || input != "No" || input != "n" || input != "no")
	{


		printf("(+) Do you want to turn a board? \n(+) Yes/Y/yes/y \n(-) No/N/no/n for exit program \n");
		std::cin >> input;

		if (input == "Y" || input == "Yes" || input == "y" || input == "yes")
		{
			myField.reverseField();
			myField.drawField();
		}

	}
}