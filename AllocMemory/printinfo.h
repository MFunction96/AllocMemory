#pragma once
#include "stdafx.h"
using namespace std;
class printinfo
{
	bool firstitem_;
public:
	explicit printinfo(const char* label);
	void printnum(int num);
};