#include "myArr.h"

myArr::myArr(int w, int h)
{
	data = new char[w * h];
}

myArr::~myArr()
{
	delete[] data;
}

