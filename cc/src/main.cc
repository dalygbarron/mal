#include <stdio.h>

/**
 * Read in user input.
 * @return the textual input or null if it wants to close the program.
 */
char const *read() {
    static char buffer[256];
    printf("user>");
    return buffer;
}

/**
 * Evaluates user input.
 * @param value is the input to evaluate.
 * @return the result of the evaluated input.
 */
char *eval(char const *value) {
    return value;
}

/**
 * Prints data.
 * @param result is the data to print.
 */
void print(char const *result) {
    printf("%s\n", result);
}

/**
 * Start of the program.
 * @param argc is the number of arguments.
 * @param argv is the arguments.
 * @return the response code.
 */
int main(int argc, char **argv) {
    while (true) {
        char const *input = read();
        if (!result) break;
        char const *result = eval(input);
        print(result);
    }
    return 0;
}
