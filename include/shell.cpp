#ifndef SHELL_HP
#define SHELL_HP

#include "history.hpp"

#include <string>

class Shell {
private:
  bool running;
  int lastExitStatus;

  History history;
  void displayPrompt() const;
  bool readCommand(std::string & input);
  void processCommand(const std::string& input);
  int executeCommand(const std::string& input);

public:
    // Constructor
    Shell();

    // Destructor
    ~Shell();

    // Start the interactive shell
    int run();

    // Request shell termination
    void exit(int status = 0);

    // Retrieve the last command's exit status
    int getExitStatus() const;
};

#endif // SHELL_HPP
