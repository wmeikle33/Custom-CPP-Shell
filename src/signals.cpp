#ifndef SIGNALS_HPP
#define SIGNALS_HPP

#include <sys/types.h>

namespace shell_signals {

// Initialize interactive shell signal handling.
bool initialize();

// Ignore signals while running as an interactive shell.
bool ignoreInteractiveSignals();

// Restore default signal behavior in child processes.
bool restoreDefaultSignals();

// Give terminal control to a foreground process group.
bool setForegroundProcessGroup(pid_t pgid);

// Return terminal control to the shell.
bool restoreShellForeground();

// Return the shell's process group ID.
pid_t getShellProcessGroup();

} // namespace shell_signals

#endif
