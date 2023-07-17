#include "phoneBook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::ADD()
{
    contactList[position % 2].addContact();
    if(limiter < 2)
        limiter++;
    position++;
}

void PhoneBook::showMoreInfo()
{
    std::string position;

    std::cout << "Please select the index for more info: ";
    std::getline(std::cin, position);
    while(position.length() > 1 || !(position[0] >= '0' && position[0] < limiter + '0'))
    {
        std::cout << "Please enter a valid index: ";
        std::getline(std::cin, position);
    }
    contactList[position[0] - '0'].displayUserInfo();
}

void PhoneBook::SEARCH()
{
    int i = 0;
    if(limiter > 0)
    {
        std::cout << "|-------------------------------------------|\n";
        std::cout << "|     Index|First name| Last name|  Nickname|\n";
        std::cout << "|-------------------------------------------|\n";
        while (i < limiter)
        {
            contactList[i].displayAllInfo(i);
            i++;
        }   
        std::cout << "|-------------------------------------------|\n";
        showMoreInfo();
    }
    else
        std::cout << "Phonebook is empty use ADD command to add new user\n";
}
