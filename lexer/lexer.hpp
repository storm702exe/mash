#if !defined(LEXER_H)
#define LEXER_H
#include <string>
#include <vector>
class lexer
{
private:
    std::string type_handler(std::string token_);
    
public:
    struct token
    {
        std::string type;
        std::string text;
        
        
    };  
    
    std::vector<lexer::token> tokenizer(std::string cmd);
    int lex(std::string command);
    
};




#endif // LEXER_H
