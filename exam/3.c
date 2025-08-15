#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *input;
  FILE *output;
  int num;
  int count;
  input = fopen("file.txt", "r");
  if (input == NULL)
    exit(0);
  output = fopen("file1.txt", "w");
  if (output == NULL)
    exit(0);
  while (fscanf(input, "%d", &num) == 1)
  {
    count = 0;
    for (int i = 1; i <= num; i++)
    {
      if (num % i == 0)
        count++;
    }
    if (count == 2)
    {
      printf("%d\t", num);
          fprintf(output, "%d\t", num);
    }
  }
  fclose(input);
  fclose(output);
  return 0;
}