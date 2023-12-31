#include "contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

std::string Contact::toString(int value) {
    std::stringstream str;
    str << value;
    return str.str();
}

void   Contact::paddingSpaces(std::string str)
{
    int j = 0;
    int i = 10 - str.length();  
    while (j < i)
    {
        std::cout << " ";
        j++;
    }
}

std::string truncateStr(std::string initialStr)
{
    std::string finalStr = "";
    if(initialStr.length() > 9)
    {
        finalStr = initialStr.substr(0, 9);
        finalStr += '.';
        return finalStr;
    }
    return initialStr;
}

void   Contact::displayAllInfo(int pos)
{
    std::cout << "|";
    this->paddingSpaces(toString(pos));
    std::cout << toString(pos);
    std::cout << "|";
    this->paddingSpaces(fName);
    std::cout << truncateStr(fName);
    std::cout << "|";
    this->paddingSpaces(lName);
    std::cout << truncateStr(lName);
    std::cout << "|";
    this->paddingSpaces(nName);
    std::cout << truncateStr(nName);
    std::cout << "|\n";
}

void   Contact::displayUserInfo()
{
    std::cout << "First Name: " << fName << std::endl;
    std::cout << "Last Name : " << lName << std::endl;
    std::cout << "NickName  : " << nName << std::endl;
    std::cout << "Phone Number: " << pNum << std::endl;
    std::cout << "Darkest Secret: " <<  dSecret << std::endl;
}

int  isValidPhoneNumber(std::string pNum)
{
    size_t i = 0;
    if(pNum.length() < 6)
        return (0);
    while (i < pNum.length())
    {
        if(!(pNum[i] >= '0' && pNum[i] <= '9'))
            return (0);
        i++;
    }
    return (1);
}

void    Contact::addContact()
{
    std::cout << "Enter First Name: ";
    std::getline(std::cin, fName);
    while (fName == "\n" || fName == "\0")
    {
        std::cout << "Empty field not valid! Please, try again.\n";
        std::cout << "Enter First Name: ";
        std::getline(std::cin, fName);
    }
    std::cout << "Enter Last Name: ";
    std::getline(std::cin, lName);
    while (lName == "\n" || lName == "\0")
    {
        std::cout << "Empty field not valid! Please, try again.\n";
        std::cout << "Enter last Name: ";
        std::getline(std::cin, lName);
    }
    std::cout << "Enter Nickname: ";
    std::getline(std::cin, nName);
    while (nName == "\n" || nName == "\0")
    {
        std::cout << "Empty field not valid! Please, try again.\n";
        std::cout << "Enter Nickname: ";
        std::getline(std::cin, nName);
    }
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, pNum);
    while (pNum == "\n" || pNum == "\0" || !isValidPhoneNumber(pNum))
    {
        std::cout << "Invalid Phone Number! Please, try again.\n";
        std::cout << "Enter Phone Number: ";
        std::getline(std::cin, pNum);
    }
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, dSecret);
    while (dSecret == "\n" || dSecret == "\0")
    {
        std::cout << "Empty field not valid! Please, try again.\n";
        std::cout << "Enter Darkest Secret: ";
        std::getline(std::cin, dSecret);
    }
}