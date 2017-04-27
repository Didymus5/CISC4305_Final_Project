#pragma once

#include <string>
#include "Container.h"
#include "Contact.h"
#include "File.h"


typedef enum Token_t
{
	SC_TITLE,
	SC_FIRST_NAME,
	SC_LAST_NAME,
	SC_NATIONALITY,
	SC_STATE,
	SC_COUNTRY,
	SC_EMAIL,
	SC_PHONE,
	SC_RACE,
	SC_END
} Token_t;

class ContactList
{
public:
	ContactList();
	~ContactList();

	void AddContact(Contact& cContact);
	GenericSet_t SearchBy(Token_t eToken, std::string& zString);
	std::string getAll();
	Lines_t getAllFlattened();

private:
	GenericSet_t DoSearchTitle(std::string& zString);
	GenericSet_t DoSearchFirstName(std::string& zString);
	GenericSet_t DoSearchLastName(std::string& zString);
	GenericSet_t DoSearchNation(std::string& zString);
	GenericSet_t DoSearchState(std::string& zString);
	GenericSet_t DoSearchCountry(std::string& zString);
	GenericSet_t DoSearchEmail(std::string& zString);
	GenericSet_t DoSearchPhone(std::string& zString);
	GenericSet_t DoSearchRace(std::string& zString);

	TitleSet_t			m_tTitles;
	FirstNameSet_t		m_tFirstNames;
	LastNameSet_t		m_tLastNames;
	NationalitySet_t	m_tNationalities;
	StateSet_t			m_tStates;
	CountrySet_t		m_tCountries;
	EmailSet_t			m_tEmails;
	PhoneSet_t			m_tPhones;
	RaceSet_t			m_tRaces;
};
