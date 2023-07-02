#include "phoneBook.hpp"
#include "contact.hpp"

phoneBook::phoneBook()
{
}

phoneBook::~phoneBook()
{

}

void phoneBook::ADD()
{
    if(position >= 2)
        std::cout << "no more available slots" << std::endl;
    else
    {
        contactList[position].addContact();
        position++;
    }
}

void phoneBook::SEARCH()
{
    contactList[0].displayName();
}
