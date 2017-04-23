#include "ContactList.h"




ContactList::ContactList()
{

}

ContactList::~ContactList()
{

}

void ContactList::AddContact(Contact& cContact)
{
	m_tTitles.insert(cContact);
	m_tNames.insert(cContact);
	m_tNationalities.insert(cContact);
	m_tStates.insert(cContact);
	m_tCountries.insert(cContact);
	m_tEmails.insert(cContact);
	m_tPhones.insert(cContact);
	m_tRaces.insert(cContact);
}

GenericSet_t& ContactList::SearchBy(Token_t eToken, string& zString)
{

}
