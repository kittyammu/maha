#include<stdio.h>
int main()
{
  int c, n;
  for (c = 1; c <= 10; c++) 
  {
    n = rand() % 100 + 1;
    printf("%d\n", n);
  }
   return 0;
}
