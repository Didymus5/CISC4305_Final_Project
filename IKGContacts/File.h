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
	string fileName = "sampleContacts.dat";
	fstream ioFile{fileName, ios::in | ios::out };
	fstream appFile{ fileName, ios::app };
};
