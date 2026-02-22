#include <shell.hpp>
#include <iostream>
#include <cstdlib>
#include <string>
#include <unistd.h>
std::string home = std::getenv("HOME");
std::string user = std::getenv("USER");
std::string PWD = std::getenv("PWD");
Shell::Shell(/* args */)
{   
    
    
    
    std::string command;
    char buffer[256];
    gethostname(buffer, sizeof(buffer));
    std::string host(buffer);
    

    
    
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
        
        
    }
    
}

