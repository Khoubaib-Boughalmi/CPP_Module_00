#include "contact.hpp"
#include "phoneBook.hpp"

int main(int argc, char *argv[])
{
    (void) argc;
    (void) argv;

    PhoneBook phoneBook;
    std::string input;
    while (1)
    {
        std::cout << "Enter a command: ";
        std::getline(std::cin, input);
        if(input == "EXIT")
            return (0);
        else if(input == "ADD")
            phoneBook.ADD();
        else if(input == "SEARCH")
            phoneBook.SEARCH();
        else
            std::cout << "Not a valid command! Try again\n";
    }
    return (0);
}