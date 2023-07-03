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
    contactList[position % 2].addContact();
    if(limiter < 2)
        limiter++;
    position++;
}

void phoneBook::SEARCH()
{
    int i = 0;
    while (i < limiter)
    {
        contactList[i].displayName();
        i++;
    }   
}
