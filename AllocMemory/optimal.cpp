#include "stdafx.h"
#include "optimal.h"
using namespace std;

optimal::optimal(const int size, const vector<int>* data): allocer(size, data, "Optimal")
{
	load_ = new preload(data);
}

void optimal::solve() const
{
	const auto m = new int[size_];
	memset(m, -1, size_ * sizeof 1);
	for (const auto data : *load_->origin_data)
	{
		const auto index = preload::judge_min(m, size_);
		//printer_->printnum(m[index]);
		m[index] = data;		
	}
	delete[] m;
}

optimal::~optimal()
{
	delete load_;
}
