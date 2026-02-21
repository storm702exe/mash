#include <shell.hpp>
#include <iostream>
#include <cstdlib>
#include <string>
std::string home = std::getenv("HOME");
std::string user = std::getenv("USER");
std::string host = std::getenv("HOSTNAME");
std::string pwd = std::getenv("PWD");
Shell::Shell(/* args */)
{   
    
    
    std::cout << "host working";
    
    std::cout << "pwd working";
    std::cout << "line 10 working";
    std::string command;
    
    

    
    std::cout << "[" << user << "@" << host;
    while (true)
    {
        if (home == pwd)
        {
            std::cout << " ~ ]$";
            std::cout << "if statment working";
        }
        else
        {
            std::cout << " " << pwd;
            std::cout << "else also working";
        }
        std::cin >> command;
        std::cout << "input working";
    }
    
}

