#include <iostream>
#include <string>
#include <cctype>

void    ft_putstr(std::string str)
{
    int     i = 0;
    while (str[i])
    {    
        if(str[i] >= 'a' && str[i] <= 'z')
            std::cout << static_cast<char>(std::toupper(\
                static_cast<unsigned char>(str[i])));
        else
            std::cout << str[i];
        i++;
    }
}
int main(int argc, char *argv[])
{
    int i = 1;
    if(argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (i < argc)
    {
        ft_putstr(argv[i]);
        if(i < argc - 1)
            std::cout << " ";
        i++;
    }
    std::cout << std::endl;
    return (0);
}