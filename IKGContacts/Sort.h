#pragma once
#include <vector>
#include "Contact.h"
class Sort
{
public:
	Sort(short field0);
	~Sort();
	void insert(const Contact&); // sorts by value
	void search(vector<unsigned int> results);
private:
	std::vector<unsigned int> list;
	short field;
};

