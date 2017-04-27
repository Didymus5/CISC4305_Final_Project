#pragma once
#include <iostream>


class Contact
{
public:
	Contact();
	Contact(std::string title, std::string firstname, std::string lastname,
		std::string nationality, std::string state, std::string country,
		std::string email, std::string phonenumber, std::string race);
	Contact(std::string zData);
	~Contact();
    
    // Title
    void setTitle(std::string);
    std::string getTitle() const;
    
    // First Name
    void setFirstName(std::string);
    std::string getFirstName() const;
    
    // Last Name
    void setLastName(std::string);
    std::string getLastName() const;
    
    // Nationality
    void setNationality(std::string);
    std::string getNationality() const;
    
    // State
    void setState(std::string);
    std::string getState() const;
    
    // Country
    void setCountry(std::string);
    std::string getCountry() const;
    
    // Email
    void setEmail(std::string);
    std::string getEmail() const;
    
    // Phone Number
    void setPhoneNumber(std::string);
    std::string getPhoneNumber() const;
    
    // Race
    void setRace(std::string);
    std::string getRace() const;

	std::string getAttribute(short) const;

	std::string getAll() const;

	std::string flattenAll() const;
	void unflattenAll(std::string zData);
    
private:
    std::string title;
    std::string fName;
    std::string lName;
    std::string nationality;
    std::string state;
    std::string country;
    std::string email;
    std::string phoneNumber;
    std::string race;
};

