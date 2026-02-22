#include <string>
#include <iostream>
#include <lexer.hpp>
#include <vector>
std::vector<lexer::token> tkn;

lexer::token t;
std::string tk;
bool is_in_quots;
int lexer::lex(std::string command)
{
    
    tokenizer(command);
    return 0;
}
std::vector<lexer::token> lexer::tokenizer(std::string cmd)
{
    
    for (size_t i=0;i < cmd.size();i++)
    {
        char current = cmd[i];
        char space = ' ';
        char quots =  '"';
    
        if (current != space)
        {

            tk.push_back(current);
            
        }
        else if (current == quots) 
        {
            
            t.type = lexer::type_handler(tk);
            t.text = tk;
            tkn.push_back(t);
            is_in_quots = !is_in_quots;
            tk.clear();
        }
        else if(current == '\0')
        {
            return tkn;
        }
        else 
        {
            if (is_in_quots)
            {
                tk.push_back(current);
            }
            else
            {
                t.type = lexer::type_handler(tk);
                t.text = tk;
                tkn.push_back(t);
            }

        }
        
    }
    
    
    return tkn;
}
std::string lexer::type_handler(std::string token_)
{
    switch(is_in_quots)
    {
        case true:
            return "QUOTED_STRING";
            break;
        case false:
            return "UNQUOTED_STRING";
            break;
    }
}