#pragma once
#include "Figure.h"

class Field
{
public:
	Field();
	~Field();
	void createField();
	void drawField();
	void reverseField();
	void setOnField(Figure* Fig);

private:
	std::string field[8][8];


};