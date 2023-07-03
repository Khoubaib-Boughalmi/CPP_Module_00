#include "contact.hpp"

contact::contact()
{
}

contact::~contact()
{
}

void    contact::displayName()
{
    std::cout << "Person Name : " << fName << std::endl;
}

void    contact::addContact()
{
    std::cout << "Enter First Name" << std::endl;
    std::cin >> fName;
    std::cout << "Enter Last Name" << std::endl;
    std::cin >> lName;
    // std::cout << "Enter NickName" << std::endl;
    // std::cin >> nName;
    // std::cout << "Enter Phone Number" << std::endl;
    // std::cin >> pNum;
    // std::cout << "Enter Darkest Secret" << std::endl;
    // std::cin >> dSecret;
    std::cout << fName << " " << lName << " " << nName << std::endl;
}