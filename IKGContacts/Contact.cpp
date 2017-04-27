#include <string>
#include "Contact.h"
#include "File.h"

using namespace std;

Contact::Contact()
{
}

Contact::Contact(string title, string firstName, string lastName,
	string nationality, string state, string country,
	string email, string phoneNumber, string race){
	setTitle(title);
	setFirstName(firstName);
	setLastName(lastName);
	setNationality(nationality);
	setState(state);
	setCountry(country);
	setEmail(email);
	setPhoneNumber(phoneNumber);
	setRace(race);
}

Contact::Contact(string zData)
{
	unflattenAll(zData);
}

Contact::~Contact()
{
    
}

void Contact::setTitle(string title)
{
	this->title = title;
}

string Contact::getTitle() const
{
	return title;
}

void Contact::setFirstName(string firstName)
{
	this->fName = firstName;
}

string Contact::getFirstName() const
{
	return fName;
}

void Contact::setLastName(string lastname)
{
	this->lName = lastname;
}

string Contact::getLastName() const
{
	return lName;
}

void Contact::setNationality(string nationality)
{
	this->nationality = nationality;
}

string Contact::getNationality() const
{
	return nationality;
}

void Contact::setState(string state)
{
	this->state = state;
}

string Contact::getState()const
{
	return state;
}

void Contact::setCountry(string country)
{
	this->country = country;
}

string Contact::getCountry() const
{
	return country;
}

void Contact::setEmail(string email)
{
	this->email = email;
}

string Contact::getEmail() const
{
	return email;
}

void Contact::setPhoneNumber(string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

string Contact::getPhoneNumber() const
{
	return phoneNumber;
}

void Contact::setRace(string race)
{
	this->race = race;
}

string Contact::getRace()const
{
	return race;
}


string Contact::getAttribute(short attribute) const
{
	switch (attribute) {
	case 1: return this->getTitle();
	case 2: return this->getFirstName();
	case 3: return this->getLastName();
	case 4: return this->getNationality();
	case 5: return this->getState();
	case 6: return this->getCountry();
	case 7: return this->getEmail();
	case 8: return this->getPhoneNumber();
	case 9: return this->getRace();
	default: return "NULL";
	}
	return "NULL";
}

string Contact::getAll() const
{
	string zAll;

	zAll += "---------------------------------------------\r\n";
	zAll += (string("Title: ") + getTitle() + "\r\n");
	zAll += (string("First Name: ") + getFirstName() + "\r\n");
	zAll += (string("Last Name: ") + getLastName() + "\r\n");
	zAll += (string("Nationality: ") + getNationality() + "\r\n");
	zAll += (string("State: ") + getState() + "\r\n");
	zAll += (string("Country: ") + getCountry() + "\r\n");
	zAll += (string("Email: ") + getEmail() + "\r\n");
	zAll += (string("Phone Number: ") + getPhoneNumber() + "\r\n");
	zAll += (string("Race: ") + getRace() + "\r\n");
	zAll += "---------------------------------------------\r\n";

	return zAll;
}

std::string Contact::flattenAll() const
{
	string zAll;

	zAll += "|";
	zAll += (getTitle() + "|");
	zAll += (getFirstName() + "|");
	zAll += (getLastName() + "|");
	zAll += (getNationality() + "|");
	zAll += (getState() + "|");
	zAll += (getCountry() + "|");
	zAll += (getEmail() + "|");
	zAll += (getPhoneNumber() + "|");
	zAll += (getRace() + "|");
	zAll += "/n";

	return zAll;
}

void Contact::unflattenAll(string zData)
{
	Lines_t tUnflattened;
	size_t nPosStart,
		   nPosEnd,
		   nPosLength,
		   nStrLength = zData.length();

	nPosStart = zData.find('|');

	do {
		nPosStart++;
		nPosEnd = zData.find('|', nPosStart);

		if (nPosEnd == string::npos) {
			break;
		}

		nPosLength = nPosEnd - nPosStart;

		tUnflattened.push_back(zData.substr(nPosStart, nPosLength));

		nPosStart = nPosEnd;
	} while (nPosStart < nStrLength);

	setTitle(tUnflattened[0]);
	setFirstName(tUnflattened[1]);
	setLastName(tUnflattened[2]);
	setNationality(tUnflattened[3]);
	setState(tUnflattened[4]);
	setCountry(tUnflattened[5]);
	setEmail(tUnflattened[6]);
	setPhoneNumber(tUnflattened[7]);
	setRace(tUnflattened[8]);
}
