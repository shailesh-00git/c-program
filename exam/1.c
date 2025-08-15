// to display the fabinacco series up to fifteen terms
#include <stdio.h>
int main()
{
  //  0 1 1 2 3 5 8 13 21 ..........
  int prev = 0, curr = 1, nxt ;
  printf("%d %d ", prev, curr);
  for (int i = 0; i < 15; i++)
  {
    nxt = curr + prev;
    printf(" %d", nxt);
    prev = curr;
    curr = nxt;
  }
  return 0;
}