#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
: _target(0) {
}

std::string subStrToDot(std::string str) {
	return str.size() > 10 ? str.substr(0, 9) + '.' : str;
}

void showInputMsg(int i) {
	switch(i){
		case 0:
			std::cout << "First Name: ";
			break ;
		case 1:
			std::cout << "Last Name: ";
			break ;
		case 2:
			std::cout << "Nick Name: ";
			break ;
		case 3:
			std::cout << "Darkest Secret: ";
			break ;
		case 4:
			std::cout << "Phone Number: ";
			break ;
		default:
			break ;
	}

}

void PhoneBook::add() {
	std::string temp[5];
	int i(0);

	while (i < 5) {
		showInputMsg(i);
		std::cin >> temp[i];
		if (temp[i] == "EXIT" || std::cin.eof())
			this->exit();
		if (temp[i].size())
			++i;
	}
	
	this->_contactArr[this->_target % 8] = Contact(temp[0], temp[1], temp[2], temp[3], temp[4]);
	this->_target += 1;
}

int toNumber(std::string str, int max)
{
	int i;
	int num;

	num = 0;
	i = 0;
	if (str.size() > 1)
		return (-1);
	else if (!isdigit(str[i]))
 		return (-1);
	else {
		num = str[i] - '0';
		if (num < max)
			return num;
	}
	return (-1);
}

void PhoneBook::search()
{
	int i;
	int num;
	std::string temp;

	i = 0;
	if (this->_target < 1) {
		std::cout << "PhoneBook is Empty" << std::endl;
		return ;
	}
	std::cout << "|" << std::setw(10);
	std::cout << "index";
	std::cout << "|" << std::setw(10);
	std::cout << "first name";
	std::cout << "|" << std::setw(10);
	std::cout << "last name";
	std::cout << "|" << std::setw(10);
	std::cout << "nickname" << "|" << std::endl;
	while (i < (this->_target < 8 ? this->_target : 8))
	{
		std::cout << "|" << std::setw(10);
		std::cout << i;
		std::cout << "|" << std::setw(10);
		std::cout << subStrToDot(this->_contactArr[i].getFirstName());
		std::cout << "|" << std::setw(10);
		std::cout << subStrToDot(this->_contactArr[i].getLastName());
		std::cout << "|" << std::setw(10);
		std::cout << subStrToDot(this->_contactArr[i].getNickName()) << "|" << std::endl;
		++i;
	}
	if (i >= 1) {
		std::cout << "select index\n";
		std::getline(std::cin, temp);
		if (temp == "EXIT" || std::cin.eof())
			this->exit();
		num = toNumber(temp, i);
		if (num >= 0) {
			std::cout << "index: ";
			std::cout << num << std::endl;
			std::cout << "First Name: ";
			std::cout << this->_contactArr[num].getFirstName() << std::endl;
			std::cout << "Last Name: ";
			std::cout << this->_contactArr[num].getLastName() << std::endl;
			std::cout << "Nick Name: ";
			std::cout << this->_contactArr[num].getNickName() << std::endl;
			std::cout << "Darkest Secret: ";
			std::cout << this->_contactArr[num].getDarkestSecret() << std::endl;
			std::cout << "Phone Number: ";
			std::cout << this->_contactArr[num].getPhoneNumber() << std::endl;
		} else {
			std::cout << "Invalid Index" << std::endl;
		}	
	} else {
		std::cout << "PhoneBook is Empty" << std::endl;
	}


}

void PhoneBook::exit()
{
	std::exit(0);
}

void selectCommand(PhoneBook& phoneBook)
{
	std::string input;

	do {
		std::cout << "Choose the Command: \n";
		std::cout << "1: Add, 2: Search, 3: Exit \n";
		std::getline(std::cin, input);
		if (input == "1" || input == "Add")
		{
			phoneBook.add();
			break ;
		}
		else if (input == "2" || input == "Search")
		{
			phoneBook.search();
			break ;
		}
		else if (input == "3" || input == "EXIT") {
			phoneBook.exit();
		}
		else
		{
			if (std::cin.eof())
				phoneBook.exit();
			std::cout << "INVALID MSG\n";
		}
		std::cin.clear();
		clearerr(stdin);
	} while (1);
}

PhoneBook::~PhoneBook() {
}
