#pragma once
#include "stdafx.h"

class address
{
public:
	int memory_position;
	int queue_position;
	int data;
	explicit address(int memory_position, int queue_position, int data);
	bool operator< (const address & a) const;
};