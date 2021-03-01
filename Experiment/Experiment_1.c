#include <stdio.h>
#include <string.h>

main()
{
  int a = 10;
  void f();
  a = f();
  printf("\no/od",a);
}

void f()
{
  printf("\nHi");
}