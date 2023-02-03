#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include "Contact.hpp"
#include <cstdlib>
#include <iomanip>

class PhoneBook {
	public:
		PhoneBook();
		void add(); // add phonebook contact add | contact -> cin | phoneBook  
		void search();
		void exit();
		~PhoneBook();
	private:
		Contact _contactArr[8];
		int _target;
};

std::string subStrToDot(std::string str);
void showInputMsg(int i);
int toNumber(std::string str, int max);
void selectCommand(PhoneBook& phoneBook);

#endif // __PHONEBOOK_H__


