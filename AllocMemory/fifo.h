#pragma once
#include "stdafx.h"
using namespace std;

class fifo : public allocer
{
public:
	fifo(int size, const vector<int>* data);
	void solve() const override;
	~fifo();
};