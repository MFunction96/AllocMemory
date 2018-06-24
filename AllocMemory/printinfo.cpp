#include "stdafx.h"

printinfo::printinfo(const char* label) : firstitem_(true)
{
	printf("%s Algorithm Result:\n", label);
}

void printinfo::printnum(const int num)
{
	if (!firstitem_) printf(" ");
	printf("%d", num);
	firstitem_ = false;
}
