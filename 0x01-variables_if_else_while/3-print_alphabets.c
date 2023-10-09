#include <stdio.h>
/**
 *main - prints the alphabet withou q and e.
 *
 * Return: Always 0 (success)
 * */

int main() {
    char lowercase = 'a';
    char uppercase = 'A';

    while (lowercase <= 'z') {
        putchar(lowercase);
        lowercase++;
    }

    while (uppercase <= 'Z') {
        putchar(uppercase);
        uppercase++;
    }

    putchar('\n');

    return 0;
}

