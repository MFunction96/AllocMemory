#include "stdafx.h"

allocer::allocer(const int size, const vector<int>* data, const char* label) : size_(size)
{
	data_ = new vector<int>(*data);
	printer_ = new printinfo(label);
}

allocer::~allocer()
{
	delete data_;
	delete printer_;
}