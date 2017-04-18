#include "Contact.h"



Contact::Contact()
{
    return;
}


Contact::~Contact()
{
    
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