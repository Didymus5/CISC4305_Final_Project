#pragma once
#include <iostream>

using namespace std;

class Contact
{
public:
	Contact();
	~Contact();
    
    void setFirstName(string);
    string getFirstName() const;
};

