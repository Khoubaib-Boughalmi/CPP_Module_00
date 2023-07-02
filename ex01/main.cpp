#include "main.hpp"
#include "contact.hpp"
#include "phoneBook.hpp"

int main(int argc, char *argv[])
{
    phoneBook PhoneBook;
    while (1)
    {
        std::string input;
        std::getline(std::cin, input);
        if(input == "EXIT")    
            return (0);
        if(input == "ADD")
            PhoneBook.ADD();
        if(input == "SEARCH")
            PhoneBook.SEARCH();
    }
    return (0);
}