#pragma once

#include <set>
#include "Contact.h"

using namespace std;

struct CompareByTitle
{
	bool operator()(const Contact& lhs, const Contact& rhs) const
	{
		return lhs.getTitle() < rhs.getTitle();
	}
};

struct CompareByName
{
	bool operator()(const Contact& lhs, const Contact& rhs) const
	{
		return lhs.getLastName() < rhs.getLastName();
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

typedef set<Contact> GenericSet_t;
typedef set<Contact, CompareByTitle> TitleSet_t;
typedef set<Contact, CompareByName> NameSet_t;
typedef set<Contact, CompareByNationality> NationalitySet_t;
typedef set<Contact, CompareByState> StateSet_t;
typedef set<Contact, CompareByCountry> CountrySet_t;
typedef set<Contact, CompareByEmail> EmailSet_t;
typedef set<Contact, CompareByPhone> PhoneSet_t;
typedef set<Contact, CompareByRace> RaceSet_t;
