#include <iostream>
#include "ContactList.h"

using namespace std;


ContactList::ContactList()
{
}

ContactList::~ContactList()
{
}

void ContactList::AddContact(Contact& cContact)
{
	m_tTitles.insert(cContact);
	m_tFirstNames.insert(cContact);
	m_tLastNames.insert(cContact);
	m_tNationalities.insert(cContact);
	m_tStates.insert(cContact);
	m_tCountries.insert(cContact);
	m_tEmails.insert(cContact);
	m_tPhones.insert(cContact);
	m_tRaces.insert(cContact);
}

GenericSet_t ContactList::SearchBy(Token_t eToken, std::string& zString)
{
	GenericSet_t tResult;

	switch (eToken) {
		case SC_TITLE: {
			tResult = DoSearchTitle(zString);
		} break;
		case SC_FIRST_NAME: {
			tResult = DoSearchFirstName(zString);
		} break;
		case SC_LAST_NAME: {
			tResult = DoSearchLastName(zString);
		} break;
		case SC_NATIONALITY: {
			tResult = DoSearchNation(zString);
			} break;
		case SC_STATE: {
			tResult = DoSearchState(zString);
			} break;
		case SC_COUNTRY: {
			tResult = DoSearchCountry(zString);
			} break;
		case SC_EMAIL: {
			tResult = DoSearchEmail(zString);
			} break;
		case SC_PHONE: {
			tResult = DoSearchPhone(zString);
			} break;
		case SC_RACE: {
			tResult = DoSearchRace(zString);
			} break;
		default:break;
	}

	return tResult;
}

string ContactList::getAll()
{
	string zResult;
	TitleSet_t::iterator it;

	for (it = m_tTitles.begin(); it != m_tTitles.end(); it++) {
		zResult += (*it).getAll();
	}

	return zResult;
}

GenericSet_t ContactList::DoSearchTitle(std::string& zString)
{
	GenericSet_t tResult;
	TitleSet_t::iterator it;

	for (it = m_tTitles.begin(); it != m_tTitles.end(); it++) {
		if ((*it).getTitle() == zString) {
			tResult.insert((*it));
		}
	}

	return tResult;
}

GenericSet_t ContactList::DoSearchFirstName(std::string& zString)
{
	GenericSet_t tResult;
	FirstNameSet_t::iterator it;

	for (it = m_tFirstNames.begin(); it != m_tFirstNames.end(); it++) {
		if ((*it).getFirstName() == zString) {
			tResult.insert((*it));
		}
	}

	return tResult;
}

GenericSet_t ContactList::DoSearchLastName(std::string& zString)
{
	GenericSet_t tResult;
	LastNameSet_t::iterator it;

	for (it = m_tLastNames.begin(); it != m_tLastNames.end(); it++) {
		if ((*it).getLastName() == zString) {
			tResult.insert((*it));
		}
	}

	return tResult;
}

GenericSet_t ContactList::DoSearchNation(std::string& zString)
{
	GenericSet_t tResult;
	NationalitySet_t::iterator it;

	for (it = m_tNationalities.begin(); it != m_tNationalities.end(); it++) {
		if ((*it).getNationality() == zString) {
			tResult.insert((*it));
		}
	}

	return tResult;
}

GenericSet_t ContactList::DoSearchState(std::string& zString)
{
	GenericSet_t tResult;
	StateSet_t::iterator it;

	for (it = m_tStates.begin(); it != m_tStates.end(); it++) {
		if ((*it).getState() == zString) {
			tResult.insert((*it));
		}
	}

	return tResult;
}

GenericSet_t ContactList::DoSearchCountry(std::string& zString)
{
	GenericSet_t tResult;
	CountrySet_t::iterator it;

	for (it = m_tCountries.begin(); it != m_tCountries.end(); it++) {
		if ((*it).getCountry() == zString) {
			tResult.insert((*it));
		}
	}

	return tResult;
}

GenericSet_t ContactList::DoSearchEmail(std::string& zString)
{
	GenericSet_t tResult;
	EmailSet_t::iterator it;

	for (it = m_tEmails.begin(); it != m_tEmails.end(); it++) {
		if ((*it).getEmail() == zString) {
			tResult.insert((*it));
		}
	}

	return tResult;
}

GenericSet_t ContactList::DoSearchPhone(std::string& zString)
{
	GenericSet_t tResult;
	PhoneSet_t::iterator it;

	for (it = m_tPhones.begin(); it != m_tPhones.end(); it++) {
		if ((*it).getPhoneNumber() == zString) {
			tResult.insert((*it));
		}
	}

	return tResult;
}

GenericSet_t ContactList::DoSearchRace(std::string& zString)
{
	GenericSet_t tResult;
	RaceSet_t::iterator it;

	for (it = m_tRaces.begin(); it != m_tRaces.end(); it++) {
		if ((*it).getRace() == zString) {
			tResult.insert((*it));
		}
	}

	return tResult;
}
