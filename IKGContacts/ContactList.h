#pragma once
#include <vector>
#include "Contact.h"

using namespace std;

class ContactList
{
public:
	ContactList();
	~ContactList();
	void sort(short field);
	void sort(short field, int low, int high);
	void merge(short field, int low, int middle1,
		int middle2, int high);
	void print();
	void save();
	void add(Contact&);
	//void insert(const Contact&); // sorts by value
	//void search(vector<unsigned int> results);
private:
	vector<Contact> list;
	//vector<unsigned int> list;
	short field;
};