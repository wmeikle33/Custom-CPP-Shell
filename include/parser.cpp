#ifndef PARSER_HPP
#define PARSER_HPP

#include "redirection.hpp"

#include <string>
#include <vector>

namespace parser {

// Different types of tokens.
enum class TokenType {
    Word,
    Pipe,
    InputRedirect,
    OutputRedirect,
    AppendRedirect,
    ErrorRedirect,
    ErrorAppendRedirect,
    FdDuplicate,
    Background,
    End
};

// Represents one token.
struct Token {
    TokenType type;
    std::string value;
};

// Represents a single shell command.
struct Command {
    std::vector<std::string> args;

    std::vector<redirection::Redirect> redirects;
};

// Represents a sequence of piped commands.
struct Pipeline {
    std::vector<Command> commands;

    bool background = false;
};

// Main parser class.
class Parser {
public:
    // Convert input text into tokens.
    std::vector<Token> tokenize(
        const std::string& input
    ) const;

    // Convert input into a pipeline.
    Pipeline parse(
        const std::string& input
    ) const;

    // Check whether a token is an operator.
    bool isOperator(
        TokenType type
    ) const;

private:
    // Convert tokens into a pipeline.
    Pipeline parseTokens(
        const std::vector<Token>& tokens
    ) const;
};

} // namespace parser

#endif // PARSER_HPP
