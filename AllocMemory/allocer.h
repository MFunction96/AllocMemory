#pragma once
#include "stdafx.h"

class allocer
{
protected:
	int size_;
	vector<int>* data_;
	printinfo* printer_;
public:
	char* label;
	explicit allocer(int size, const vector<int>* data, const char* label);
	virtual void solve() const = 0;
	virtual ~allocer();
};