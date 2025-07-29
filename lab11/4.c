// to count the totaal numberss of vowel
#include <stdio.h>
#include <string.h>

int main()
{
  char str[20];
  int i, c = 0;
  printf("Enter a string: ");
  gets(str);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
    {
      c++;
    }
  }
  printf("The nunber of vowels is %d",c);
}