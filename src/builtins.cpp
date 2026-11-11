
#ifndef BUILTINS_HPP
#define BUILTINS_HPP

#include <string>
#include <vector>

namespace builtins {

struct Result {
    int status = 0;
    bool should_exit = false;
};

// Check whether a command is built into the shell.
bool is_builtin(const std::string& command);

// Execute a built-in command.
Result execute(const std::vector<std::string>& args);

} // namespace builtins

#endif
