#include "myArr.h"
#include <string>

myArr::myArr()
{
	std::string field[8][8];
	for (int h = 0; h <= 8; h++)
	{
		for (int w = 0; w< 8; w++)
		{
			field[h][w] = static_cast<char>(97 + w) + std::to_string(h);


		}


	}
}

myArr::~myArr()
{
	delete[] data;
}

