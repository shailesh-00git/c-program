// to diaplay the ascii value of the the lettres fro A to Z
#include <stdio.h>
int main()
{
    char letter;
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        printf("%c = %d\n", letter, letter);
    }
    return 0;
}