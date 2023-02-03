#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <iostream>
#include <string>

class Contact {
public:
	Contact();
	Contact(const std::string&, const std::string&, const std::string&, const std::string&, const std::string&);
	const std::string& getFirstName() const;
	const std::string& getLastName() const;
	const std::string& getNickName() const;
	const std::string& getDarkestSecret() const;
	const std::string& getPhoneNumber() const;
	void setFirstName(const std::string& str);
	void setLastName(const std::string& str);
	void setNickName(const std::string& str);
	void setDarkestSecret(const std::string& str);
	void setPhoneNumber(const std::string& str);
	~Contact();
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _darkestSecret;
	std::string _phoneNumber;
};
#endif // __CONTACT_H__
