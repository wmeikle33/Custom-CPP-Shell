#include <sstream>
#include <string>
#include <vector>

std::vector<std::string> Parser::parse(
    const std::string& input
) {
    std::vector<std::string> tokens;
    std::istringstream stream(input);
    std::string token;

    while (stream >> token) {
        tokens.push_back(token);
    }

    return tokens;
}
