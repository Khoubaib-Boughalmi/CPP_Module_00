#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"

class phoneBook
{
    private:
        contact contactList[8];
        int     position = 0;
        int     limiter = 0;
    public:
        phoneBook();
        ~phoneBook();
        void    ADD();
        void    SEARCH();

};

#endif