#include "stdafx.h"

preload::preload(const vector<int>* data)
{
	origin_data = new vector<int>(*data);
	index = new map<int, priority_queue<int, vector<int>, greater<int>>*>;
	load(data);
}

void preload::load(const vector<int>* data) const
{
	for (auto i = 0u; i < data->size(); i++)
	{
		if ((*index)[(*data)[i]] == nullptr) (*index)[(*data)[i]] = new priority_queue<int, vector<int>, greater<int>>;
		(*index)[(*data)[i]]->push(i);
	}
}

int preload::judge_min(const int *memory, const int size)
{
	auto num = 0x7fffffff;
	auto index = 0;
	for (auto i = 0; i< size; i++)
	{
		if (memory[i] < num)
		{
			index = i;
			num = memory[i];
		}
	}
	return index;
}
preload::~preload()
{
	for (auto it = index->begin(); it != index->end(); ++it)
	{
		delete it->second;
	}
	delete index;
}
