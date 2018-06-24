#pragma once
#include "stdafx.h"
using namespace std;

class optimal : public allocer
{
	preload* load_{};
	
public:
	explicit optimal(int size, const vector<int>* data);
	void solve() const override;
	~optimal();
};