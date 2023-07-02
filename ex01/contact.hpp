#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class contact
{
    public:
        contact();
        ~contact();
        void    addContact();
        void    displayName();
    private:
        std::string fName{};
        std::string lName{};
        std::string nName{};
        std::string pNum{};
        std::string dSecret{};
};


#endif