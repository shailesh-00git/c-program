// Write a program to create a structure Book having ld. name. price ist menber.Create one variable of type Book and display its content.
#include <stdio.h>
struct book
{
  char name[23];
  int id;
  float price;
};
int main()
{
  struct book b;
  printf("Enter the detauls of book: ");
  scanf("%d%s%f",&b.id,b.name, &b.price);

  printf("\nPrinting the details of book\n");
  printf("Name = %s,Id = %d,price = %f", b.name, b.id, b.price);
  return 0;
}