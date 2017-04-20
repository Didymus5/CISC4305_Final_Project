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
	Contact readContract(int position);
private:
	//fstream ioFile{"sampleContacts.dat", ios::in | ios::out };
};
