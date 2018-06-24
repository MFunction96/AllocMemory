#include "stdafx.h"

fifo::fifo(const int size, const vector<int>* data) : allocer(size, data, "FIFO")
{
}

void fifo::solve() const
{
	const auto q = new queue<int>();
	for (auto i = 0u; i < data_->size(); i++)
	{
		if (q->size() == size_)
		{
			//printer_->printnum(q->front());
			q->pop();
		}
		q->push((*data_)[i]);		
	}
	delete q;
}

fifo::~fifo()
{
}