#include <stdio.h>
#include <string.h>

int main()
{
  char name[50];
  int age;
  char position[20];
  float height;

  // Pointers to the variables
  char *namePtr = name;
  int *agePtr = &age;
  char *positionPtr = position;
  float *heightPtr = &height;

  // Input
  printf("Enter player name: ");
  scanf("%s", namePtr);
  printf("Enter player age: ");
  scanf("%d", agePtr);
  printf("Enter player position: ");
  scanf("%s", positionPtr);
  printf("Enter player height: ");
  scanf("%f", heightPtr);

   // Displaying the information
  printf("\nPlayer Information:\n");
  printf("Name: %s", *namePtr);
  printf("Age: %d\n", *agePtr);
  printf("Position: %s\n", *positionPtr);
  printf("Height: %f\n", *heightPtr);

  return 0;
}