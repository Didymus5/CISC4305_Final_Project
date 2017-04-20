#include "Contact.h"



Contact::Contact()
{
    return;
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

string Contact::getCountry() const
{
	return email;
}

void Contact::setPhoneNumber(string phonenumber)
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

/*
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
}*/