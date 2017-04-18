#pragma once
#include <iostream>

using namespace std;

class Contact
{
public:
	Contact();
	~Contact();
    
    // Title
    void setTitle(string);
    string getTitle() const;
    
    // First Name
    void setFirstName(string);
    string getFirstName() const;
    
    // Last Name
    void setLastName(string);
    string getLastName() const;
    
    // Nationality
    void setNationality(string);
    string getNationality() const;
    
    // State
    void setState(string);
    string getState() const;
    
    // Country
    void setCountry(string);
    string getCountry() const;
    
    // Email
    void setEmail(string);
    string getEmail() const;
    
    // Phone Number
    void setPhoneNumber(string);
    string getPhoneNumber() const;
    
    // Race
    void setRace(string);
    string getRace() const;

	string getAttribute(short) const;
    
private:
    string title;
    string fName;
    string lName;
    string nationality;
    string state;
    string country;
    string email;
    string phoneNumber;
    string race;
};

