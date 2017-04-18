#include "Sort.h"



Sort::Sort(short field0)
{
	field = field0;
}


Sort::~Sort()
{
}


void Sort::insert(const Contact& contact) // sorts by value
{
	Contact tmpContact;
	int max = list.size() - 1;
	int min = 0;
	int mid = max / 2;
	//tmpContact = File.readContact(mid)
	if (tmpContact.getAttribute(field) > contact.getAttribute(field))
		max = mid - 1;
	else if (File.readContact(mid).getAttribute(field) < contact.getAttribute(field)) {
		if (File.readContact(mid + 1).getAttribute(field) > contact.getAttribute(field))
			list.insert()
		min = mid + 1;
	}
		
}


void search(vector<unsigned int> results)
{
}