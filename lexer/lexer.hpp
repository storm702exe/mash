#if !defined(LEXER_H)
#define LEXER_H
#include <string>
#include <vector>
class lexer
{
private:
    

public:
    int tokenizer(std::string cmd);
    int lex(std::string command);
    
    struct token
    {
        std::string type;
        std::string text;
        
        
    };
    
};




#endif // LEXER_H
