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

void PhoneBook::SEARCH()
{
    int i = 0;
    std::cout << "|-------------------------------------------|\n";
    std::cout << "|     Index|First name| Last name|  Nickname|\n";
    std::cout << "|-------------------------------------------|\n";
    while (i < limiter)
    {
        contactList[i].displayInfo(i);
        i++;
    }   
    std::cout << "|-------------------------------------------|\n";
}
