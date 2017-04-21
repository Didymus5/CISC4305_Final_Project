#include "ContactList.h"
#include "File.h"
#include <array>

ContactList::ContactList()
{
	File file;
	//cout << "read contact list()" << endl;
	list = file.readContactList();
}

void ContactList::sort(short field)
{
	sort(field, 0, list.size() - 1);
	//return 0;
}

void ContactList::sort(short field, int low, int high) {
	if ((high - low) >= 1) {
		int middle1{ (low + high) / 2 };
		int middle2{ middle1 + 1 };

		sort(field, low, middle1);
		sort(field, middle2, high);

		merge(field, low, middle1, middle2, high);
	}
	//return 0;
}

void ContactList::merge(short field, int low, int middle1, int middle2, const int high) {
	int leftIndex{ low };
	int rightIndex{ middle2 };
	int combinedIndex{ low };
	//size_t size = high;
	vector<Contact> combined;
	Contact emptyContact;
	for (int i = 0; i < low; i++)
		combined.push_back(emptyContact);

	while (leftIndex <= middle1 && rightIndex <= high) {
		if (list[leftIndex].getAttribute(field) <= list[rightIndex].getAttribute(field)) {
			combined.push_back(list[leftIndex++]);
			//combinedIndex++;
		}
		else {
			combined.push_back(list[rightIndex++]);
			//combinedIndex++;
		}
	}

	if (leftIndex == middle2) {
		while (rightIndex <= high) {
			combined.push_back(list[rightIndex++]);
			//combinedIndex++;
		}
	}
	else {
		while (leftIndex <= middle1) {
			combined.push_back(list[leftIndex++]);
			//combinedIndex++;
		}
	}

	for (int i = low; i <= high; i++) {
		list[i] = combined[i];
	}

	//return 0;
}


ContactList::~ContactList()
{

}

void ContactList::save()
{
	File file;
	file.writeContactList(list);
}

void ContactList::add(Contact& contact)
{
	list.push_back(contact);
	File file;
	file.writeContact(contact);
}

void ContactList::print() {
	for (int i = 0; i < list.size(); i++)
		cout <<
			list[i].getTitle() << '|' <<
			list[i].getFirstName() << '|' <<
			list[i].getLastName() << '|' <<
			list[i].getNationality() << '|' <<
			list[i].getState() << '|' <<
			list[i].getCountry() << '|' <<
			list[i].getEmail() << '|' <<
			list[i].getPhoneNumber() << '|' <<
			list[i].getRace() << endl;

	//cout << "print";
	//cout << list[1].getFirstName();
	//cout << list[1].getLastName();
}

/*
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

}*/


void search(vector<unsigned int> results)
{
}