#pragma once
#include "Contact.h"
#include <vector>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class File
{
public:
	File(string fileName = "sampleContacts.dat");
	~File();

	vector<Contact> readContactList();
	void writeContactList(vector<Contact>);

	Contact readContact(int position);
	void writeContact(Contact&);

private:
	//fstream ioFile{"sampleContacts.dat", ios::in | ios::out };
};
