#ifndef REDIRECTION_HPP
#define REDIRECTION_HPP

#include <string>
#include <vector>

namespace redirection {

enum class Type {
    Input,
    Output,
    Append,
    Error,
    ErrorAppend,
    DuplicateFd
};

struct Redirect {
    Type type;
    std::string filename;
    int targetFd = -1;
    int sourceFd = -1;
};

// Apply redirections in their original order.
bool apply(const std::vector<Redirect>& redirects);

} // namespace redirection

#endif
