#pragma once
#include "stdafx.h"
using namespace std;

class preload
{
public:
	vector<int> * origin_data;
	map<int, priority_queue<int, vector<int>, greater<int>>*>* index;
	explicit preload(const vector<int>* data);
	~preload();
	static int judge_min(const int* memory, int size);
protected:
	void load(const vector<int>* data) const;
};
