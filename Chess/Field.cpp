#include <iostream>
#include <string>
#include "Field.h"
#include "Figure.h"

Field::Field() {}

Field::~Field() {}


/* Creates chessboard*/
void Field::createField() {
	for (int h = 0; h < 8; h++)
	{
		for (int w = 0; w < 8; w++)
		{
			field[h][w] = static_cast<char>(97 + w) + std::to_string(h + 1);


		}


	}

}

/*Draws field*/
void Field::drawField() {
	printf("\n-------------------------\n");
	for (int h = 0; h < 8; h++)
	{
		printf("|");

		for (int w = 0; w < 8; w++)
		{
			printf("%s|", field[h][w].c_str());
		}
		printf("\n-------------------------\n");
	}
}

void Field::setOnField(Figure* Fig) {
	*Fig->Move();
}

/*This function turn around the board, it switches the sides*/
void Field::reverseField() {
	for (int h = 0; h < 8; h++)
	{
		for (int w = 0; w < 8; w++)
		{
			field[h][w] = static_cast<char>(97 + w) + std::to_string((64 / 8) - (h));


		}


	}


}