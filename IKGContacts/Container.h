#pragma once

#include <set>
#include "Contact.h"

struct CompareGeneric
{
	bool operator()(const Contact& lhs, const Contact& rhs) const
	{
		return &lhs < &rhs;
	}
};

struct CompareByTitle
{
	bool operator()(const Contact& lhs, const Contact& rhs) const
	{
		return lhs.getTitle() < rhs.getTitle();
	}
};

struct CompareByLastName
{
	bool operator()(const Contact& lhs, const Contact& rhs) const
	{
		return lhs.getLastName() < rhs.getLastName();
	}
};

struct CompareByFirstName
{
	bool operator()(const Contact& lhs, const Contact& rhs) const
	{
		return lhs.getFirstName() < rhs.getFirstName();
	}
};

struct CompareByNationality
{
	bool operator()(const Contact& lhs, const Contact& rhs) const
	{
		return lhs.getNationality() < rhs.getNationality();
	}
};

struct CompareByState
{
	bool operator()(const Contact& lhs, const Contact& rhs) const
	{
		return lhs.getState() < rhs.getState();
	}
};

struct CompareByCountry
{
	bool operator()(const Contact& lhs, const Contact& rhs) const
	{
		return lhs.getCountry() < rhs.getCountry();
	}
};

struct CompareByEmail
{
	bool operator()(const Contact& lhs, const Contact& rhs) const
	{
		return lhs.getEmail() < rhs.getEmail();
	}
};

struct CompareByPhone
{
	bool operator()(const Contact& lhs, const Contact& rhs) const
	{
		return lhs.getPhoneNumber() < rhs.getPhoneNumber();
	}
};

struct CompareByRace
{
	bool operator()(const Contact& lhs, const Contact& rhs) const
	{
		return lhs.getRace() < rhs.getRace();
	}
};

typedef std::multiset<Contact, CompareGeneric> GenericSet_t;
typedef std::multiset<Contact, CompareByTitle> TitleSet_t;
typedef std::multiset<Contact, CompareByFirstName> FirstNameSet_t;
typedef std::multiset<Contact, CompareByLastName> LastNameSet_t;
typedef std::multiset<Contact, CompareByNationality> NationalitySet_t;
typedef std::multiset<Contact, CompareByState> StateSet_t;
typedef std::multiset<Contact, CompareByCountry> CountrySet_t;
typedef std::multiset<Contact, CompareByEmail> EmailSet_t;
typedef std::multiset<Contact, CompareByPhone> PhoneSet_t;
typedef std::multiset<Contact, CompareByRace> RaceSet_t;
