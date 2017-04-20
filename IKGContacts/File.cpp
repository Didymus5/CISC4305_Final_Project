#include "File.h"
#include "Contact.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;


File::File(string fileName)
{
	//fstream ioFile{ fileName, ios::in | ios::out };

	//if (!ioFile) {cerr << "File could not be opened" << endl; exit(EXIT_FAILURE);}
}


File::~File()
{
}


Contact File::readContract(int position)
{
	Contact contact;
	return contact;
}

vector<Contact> File::readContactList()
{
	fstream ioFile{ "sampleContacts.dat", ios::in | ios::out };

	if (!ioFile) {cerr << "File could not be opened" << endl; exit(EXIT_FAILURE);}
	
	vector<Contact> list;
	Contact contact;
	string line;
	string str;	
	
	while (!ioFile.eof()) {
		
		//getline(ioFile, line);
		
		while(getline(ioFile, line)) // gets a whole line from .dat file
		{
			std::stringstream ss(line); // line streamed

			// gets string until delimiter '|'
			getline(ss, str, '|'); contact.setTitle(str);
			getline(ss, str, '|'); contact.setFirstName(str);
			getline(ss, str, '|'); contact.setLastName(str);
			getline(ss, str, '|'); contact.setNationality(str);
			getline(ss, str, '|'); contact.setState(str);
			getline(ss, str, '|'); contact.setCountry(str);
			getline(ss, str, '|'); contact.setEmail(str);
			getline(ss, str, '|'); contact.setPhoneNumber(str);
			getline(ss, str, '|'); contact.setRace(str);

			list.push_back(contact);
		}
	}

	return list;
}