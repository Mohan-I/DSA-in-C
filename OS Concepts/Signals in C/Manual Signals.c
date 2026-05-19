/*
Generate Signals Manually
In the above example, you can see that the signal is automatically generated when the user presses Ctrl+C. There are functions available that provide the functionality to generate signals manually.

raise() Function
The raise() function in C enables you to send a signal to the current process. It takes the signal type as an argument and triggers that signal within the same process.

Syntax:

raise(signal_type);

It returns 0 on success, or a non-zero value on failure. Example:
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

// Signal handler function
void signalHandler(int sig) {
    printf("Interrupt handled: %d", sig);
    
    // Optionally exit the program after handling
    exit(sig);
}

int main() {
    
    // Handle signal
    signal(SIGINT, signalHandler);
    
    // Automatically generate a signal
    raise(SIGINT);
    return 0;
}