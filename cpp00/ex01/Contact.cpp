#include "Contact.hpp"


Contact::Contact(){	
}

Contact::Contact(const std::string& firstName, const std::string& lastName, const std::string& nickName, const std::string& darkestSecret, const std::string& phoneNumber)
:_firstName(firstName), _lastName(lastName), _nickName(nickName), _darkestSecret(darkestSecret), _phoneNumber(phoneNumber) {
/* 	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	this->_darkestSecret = darkestSecret;
	this->_phoneNumber = phoneNumber; */
}

const std::string& Contact::getFirstName() const { return (this->_firstName); }
const std::string& Contact::getLastName() const { return (this->_lastName); }
const std::string& Contact::getNickName() const { return (this->_nickName); }
const std::string& Contact::getDarkestSecret() const { return (this->_darkestSecret); }
const std::string& Contact::getPhoneNumber() const { return (this->_phoneNumber); }
void Contact::setFirstName(const std::string& str) { this->_firstName = str; }
void Contact::setLastName(const std::string& str) { this->_lastName = str; }
void Contact::setNickName(const std::string& str) { this->_nickName = str; }
void Contact::setDarkestSecret(const std::string& str) { this->_darkestSecret = str; }
void Contact::setPhoneNumber(const std::string& str) { this->_phoneNumber = str; }

Contact::~Contact(){	
}

