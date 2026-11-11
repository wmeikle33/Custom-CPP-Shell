
#ifndef PIPES_HPP
#define PIPES_HPP

#include "redirection.hpp"

#include <string>
#include <vector>

namespace pipes {

struct Command {
    std::vector<std::string> args;

    std::vector<redirection::Redirect> redirects;
};

// Execute a sequence of piped commands.
// Returns the exit status of the last command.
int executePipeline(
    const std::vector<Command>& commands
);

} // namespace pipes

#endif
