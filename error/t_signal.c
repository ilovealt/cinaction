#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void signal_handler(const int signal)
{
    printf("Received signal %d\n", signal);
    // Handle the signal (e.g., clean up resources, exit gracefully)
    // ...
    // Exit the program
    exit(0);
}

int main(int argc, char const *argv[])
{

    // Register the signal handler
    signal(SIGINT, signal_handler);
    // Infinite loop to keep the program running
    while (1)
    {
        printf("Running...\n");
        sleep(1);
    }
    return 0;
}
