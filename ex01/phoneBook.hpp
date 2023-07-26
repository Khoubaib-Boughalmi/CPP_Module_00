#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "contact.hpp"

class PhoneBook
{
    private:
        Contact contactList[8];
        int     position;
        int     limiter;
    public:
        PhoneBook();
        ~PhoneBook();
        void    ADD();
        void    SEARCH();
        void    showMoreInfo();
};

#endif