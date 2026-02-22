#include <shell.hpp>
#include <iostream>
#include <cstdlib>
#include <string>
#include <unistd.h>
#include <lexer.hpp>
std::string home = std::getenv("HOME");
std::string user = std::getenv("USER");
std::string PWD = std::getenv("PWD");
Shell::Shell(/* args */)
{   
    
    
    
    std::string command;
    char host_buffer[256];
    gethostname(host_buffer, sizeof(host_buffer));
    std::string host(host_buffer);
    

    
    
    while (true)
    {
        std::cout << "[" << user << "@" << host;
        if (home == PWD)
        {
            std::cout << " ~ ]$";
        }
        else
        {
            std::cout << " " << PWD << "]$ ";
            
        }

        std::cin >> command;
        lexer lexar;
        lexar.lex(command);
        
    }
    
}

