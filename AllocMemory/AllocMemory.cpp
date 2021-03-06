// AllocMemory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#pragma warning(disable:4996)
using namespace std;

void test(const allocer* ma, const int count)
{
	auto sum = 0.0;
	for (auto i = 0; i < count; i++)
	{
		const auto start = clock();
		ma->solve();
		const auto end = clock();
		sum += double(end - start) * 1000 / CLOCKS_PER_SEC;
	}
	cout << "Sum time (" << count << " times test):" << endl << sum << "ms" << endl;
}

vector<int>* read_file()
{
	freopen("data.in", "r", stdin);
	int num;
	auto v = new vector<int>;
	while (scanf("%d", &num) != -1) v->push_back(num);
	freopen("CON", "r", stdin);
	return v;
}

int main()
{
	int t;
	cout << "Enter test times:" << endl;
	scanf("%d", &t);
	const auto data = read_file();
	const auto op = new optimal(3, data);
	test(op, t);
	delete op;
	const auto ff = new fifo(3, data);
	test(ff, t);
	delete ff;
	delete data;
	system("pause");
	return 0;
}