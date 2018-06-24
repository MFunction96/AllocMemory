#include "stdafx.h"

address::address(const int memory_position, const int queue_position, const int data)
	: memory_position(memory_position), queue_position(queue_position), data(data)
{
}

bool address::operator<(const address & a) const
{
	if (queue_position < a.queue_position) return true;
	if (queue_position > a.queue_position) return false;
	return data < a.data;
}