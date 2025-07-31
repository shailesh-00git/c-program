// to sort the strings into ascending order
#include <stdio.h>
#include <string.h>

int main()
{
    char temp[10];
    int i, j;
    char name[3][10] = {"ram", "sita", "hari"};

    // Sort strings using bubble sort
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)  // Changed 4 to 3
        {
            if (strcmp(name[i], name[j]) > 0)  // Compare strings, not indices
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    // Print sorted strings
    printf("Strings in ascending order:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}
