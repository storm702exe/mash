#include <string>
#include <iostream>
#include <lexer.hpp>
#include <vector>
int lexer::lex(std::string command)
{
    std::cout << "i exist" << std::endl;
    tokenizer(command);
    return 0;
}
int lexer::tokenizer(std::string cmd)
{
    for (size_t i=0;i < cmd.size();i++)
    {
        std::cout << cmd[i];
        
    }
    return 0;
}