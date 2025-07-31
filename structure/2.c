// to create  a structure of bike consisting of name,lot,price
// initilization of structure
#include <stdio.h>
struct bike
{
  char name[20];
  int lot;
  float price;
};
int main()
{
  // First method of initilization
  struct bike b1 = {"honda", 102, 100000.005};

  // second method of initilization
  struct bike b2 = {
      .name = "ktm",
      .lot = 123,
      .price = 123.23};

  printf("\nBike details of b1 and b2\n");
  printf("Name = %s,lot = %d,price = %f\n", b1.name, b1.lot, b1.price);
  printf("Name = %s,lot = %d,price = %f\n", b2.name, b2.lot, b2.price);
  float sum = b1.price + b2.price;
  printf("Total price of two bikes = %f", sum);
  return 0;
}