#include "shell.hpp"
#include "parser.hpp"
#include "executor.hpp"

#include <iostream>
#include <string>

int Shell::run() {
    std::string input;

    while (running) {
        std::cout << "myshell> " << std::flush;

        if (!std::getline(std::cin, input)) {
            break;
        }

        if (input.empty()) {
            continue;
        }

        auto command = parser.parse(input);

        if (command.empty()) {
            continue;
        }

        executor.execute(command);
    }

    return 0;
}
