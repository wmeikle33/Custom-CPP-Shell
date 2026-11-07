#include "executor.hpp"

#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include <sys/wait.h>

void Executor::execute(
    const std::vector<std::string>& args
) {
    if (args.empty()) {
        return;
    }

    pid_t pid = fork();

    if (pid == 0) {
        std::vector<char*> argv;

        for (const auto& arg : args) {
            argv.push_back(
                const_cast<char*>(arg.c_str())
            );
        }

        argv.push_back(nullptr);

        execvp(argv[0], argv.data());

        perror("execvp");
        _exit(127);
    }
    else if (pid > 0) {
        int status;

        if (waitpid(pid, &status, 0) == -1) {
            perror("waitpid");
        }
    }
    else {
        perror("fork");
    }
}
