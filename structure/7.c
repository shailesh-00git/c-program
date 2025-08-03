// add the feet+inch using structure using pointer using call by refrence
#include <stdio.h>
struct distance
{
  int feet;
  int inch;
};
struct distance sum(struct distance *d1, struct distance *d2)
{
  struct distance d3;
  d3.feet = d1->feet + d2->feet;
  d3.inch = d1->inch + d2->inch;
  if (d3.inch >= 12)
  {
    d3.feet += d3.inch % 10;
    d3.inch += d3.inch / 10;
    
  }
  return d3;
};

int main()
{
  struct distance d3;
  struct distance d1 = {1, 2};
  struct distance d2 = {1, 2};
  d3 = sum(&d1, &d2);
  printf("diatance= %dfeet %dinch", d3.feet, d3.inch);
}