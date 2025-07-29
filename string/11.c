//to find the numbe of vowels in  given string
#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0, i;
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            count++;
    }
    printf("There are %d vowels", count);
}
