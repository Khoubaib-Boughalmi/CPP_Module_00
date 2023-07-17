#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <sstream>

class Contact
{
    public:
        Contact();
        ~Contact();
        std::string toString(int value);
        void addContact();
        void    displayAllInfo(int pos);
        void    displayUserInfo();
        void    paddingSpaces(std::string str);
    private:
        std::string fName;
        std::string lName;
        std::string nName;
        std::string pNum;
        std::string dSecret;
};


#endif