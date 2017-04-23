#pragma once

#include "Container.h"
#include "Contact.h"


typedef enum Token_t
{
	SC_TITLE,
	SC_NAME,
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
	GenericSet_t& SearchBy(Token_t eToken, string& zString);

private:
	TitleSet_t			m_tTitles;
	NameSet_t			m_tNames;
	NationalitySet_t	m_tNationalities;
	StateSet_t			m_tStates;
	CountrySet_t		m_tCountries;
	EmailSet_t			m_tEmails;
	PhoneSet_t			m_tPhones;
	RaceSet_t			m_tRaces;
};
