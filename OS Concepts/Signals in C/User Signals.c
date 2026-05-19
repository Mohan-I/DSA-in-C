#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void signalHandler(int sig) {
    const char msg[] = "Caught SIGINT\n";
    write(STDOUT_FILENO, msg, sizeof(msg) - 1);
    _exit(sig);
}

int main() { 
    signal(SIGINT, signalHandler); 

    while (1) {
        printf("Hello World!\n");
        sleep(1);
    }

    return 0; 
}

/*
User Defined Signal Handlers
A process can replace the default signal handler for almost all signals (except SIGKILL) with its own handler function. A signal handler can have any name, but it must return void and accept a single int parameter, representing the signal number.

To trigger the signal handler when the signal has occurred, we use signal() function that is provided by <signal.h> header file.

Syntax:

signal(type, signalHandler);

where,
type: Type of signal.
signalHandler: Function that handle type signal.
*/ 