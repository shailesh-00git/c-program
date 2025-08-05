// read the value for 4 bikes i.e name,lot,price
#include <stdio.h>
#include <stdlib.h>
struct bike
{
  char name[20];
  int lot;
  int price;
};
int main()
{
  struct bike b[4];
  FILE *fp;
  fp = fopen("Bike.txt", "w");
  if (fp == NULL)
  {
    printf("Error");
    exit(0);
  }
  for (int i = 0; i < 3; i++)
  {

    printf("Enter the name: ");
    scanf("%s", b[i].name);
    printf("Enter lot : ");
    scanf("%d", &b[i].lot);
    printf("Enter price :");
    scanf("%d", &b[i].price);
    fprintf(fp, "%s %d %d\n", b[i].name, b[i].lot, b[i].price);
  }
  printf("File added sucessfully\n");
  fclose(fp);
  struct bike b1[4];
  int total = 0;
  fp = fopen("Bike.txt", "r");
  for (int i = 0; i < 3; i++)
  {
    fscanf(fp, "%s%d%d", b1[i].name, &b1[i].lot, &b1[i].price);
    // printf("Name=%s,%d,%d\n", b1[i].name, b1[i].lot, b1[i].price);
    total += b1[i].price;
  }
  printf("\n%d = total", total);
      fclose(fp);
}